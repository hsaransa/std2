#include "std2priv.h"
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

extern const struct std2_module std2_module_testmod;
extern const struct std2_module std2_module_fnmatch;
extern const struct std2_module std2_module_libc;
extern const struct std2_module std2_module_iconv;
extern const struct std2_module std2_module_glob;
extern const struct std2_module std2_module_posix;
extern const struct std2_module std2_module_inotify;
STD2_MODULE_DYN_STUB(readline)
STD2_MODULE_DYN_STUB(sdl)
STD2_MODULE_DYN_STUB(sdl_ttf)
STD2_MODULE_DYN_STUB(fltk)
STD2_MODULE_DYN_STUB(cuda)
STD2_MODULE_DYN_STUB(openssl)
STD2_MODULE_DYN_STUB(gl)

static const struct std2_module* modules[] = {
#ifdef STD2_TESTMOD
    &std2_module_testmod,
#endif
    &std2_module_fnmatch,
    &std2_module_libc,
#ifdef STD2_ICONV
    &std2_module_iconv,
#endif
#ifdef STD2_GLOB
    &std2_module_glob,
#endif
#ifdef STD2_POSIX
    &std2_module_posix,
#endif
#ifdef STD2_INOTIFY
    &std2_module_inotify,
#endif
#ifdef STD2_READLINE
    &std2_module_readline,
#endif
#ifdef STD2_SDL
    &std2_module_sdl,
#endif
#ifdef STD2_SDL_TTF
    &std2_module_sdl_ttf,
#endif
#ifdef STD2_FLTK
    &std2_module_fltk,
#endif
#ifdef STD2_CUDA
    &std2_module_cuda,
#endif
#ifdef STD2_OPENSSL
    &std2_module_openssl,
#endif
#ifdef STD2_GL
    &std2_module_gl,
#endif
    0
};

typedef struct buffer_s
{
    int pos;
    int size;
    int max;
    void* data;
} buffer;

typedef struct fork_state_s
{
    int fork_pid;
    int to_client_fd[2];
    int to_host_fd[2];

    int current_id; // for requests
    int next_id;

    buffer in_buffer;
    buffer out_buffer;
} fork_state;

typedef struct request_s
{
    int id;
    int fork_id;
    buffer buffer;
    struct std2_param ret_type;
} request;

static int         fork_count;
static fork_state* forks;

static void buffer_reserve(buffer* buf, int n)
{
    int max = buf->size + n;

    if (max < buf->max)
        return;

    max = (max + 63) & ~63;

    void* ptr = realloc(buf->data, max);
    if (!ptr)
    {
        fprintf(stderr, "std2: malloc of %d bytes failed\n", max);
        abort();
    }

    buf->max = max;
    buf->data = ptr;
}

static void buffer_free(buffer* b)
{
    free(b->data);
    memset(b, 0, sizeof(*b));
}

static void buffer_append_data(buffer* b, const void* p, int n)
{
    buffer_reserve(b, n);
    assert(b->size+n <= b->max);
    memcpy((char*)b->data + b->size, p, n);
    b->size += n;
}

static void buffer_append_alignment(buffer* b, int align)
{
    assert(align == 4 || align == 8);
    int n = (b->size + align - 1) & ~(align - 1);
    buffer_reserve(b, align);
    while (b->size < n)
        *((char*)b->data + b->size++) = 0;
}

static void buffer_append_32(buffer* b, std2_int32 v)
{
    buffer_reserve(b, 4);
    assert(b->size+4 <= b->max);
    memcpy((char*)b->data + b->size, &v, 4);
    b->size += 4;
}

static void buffer_append_64(buffer* b, std2_int64 v)
{
    buffer_reserve(b, 8);
    assert(b->size+8 <= b->max);
    memcpy((char*)b->data + b->size, &v, 8);
    b->size += 8;
}

static std2_int32 buffer_read_32(buffer* b)
{
    std2_int32 v;
    assert(b->pos + 4 <= b->size);
    memcpy(&v, (char*)b->data + b->pos, 4);
    b->pos += 4;
    return v;
}

static int buffer_avail(buffer* b)
{
    return b->size - b->pos;
}

static int write_buffer(int fd, buffer* buf)
{
    int r = write(fd, (char*)buf->data + buf->pos, buf->size - buf->pos);
    if (r < 0)
    {
        fprintf(stderr, "std2: wtf, error %s\n", strerror(errno));
        abort();
    }
    buf->pos += r;
    return r;
}

static int read_buffer_append(int fd, buffer* buf, int at_least)
{
    buffer_reserve(buf, at_least);
    while (buffer_avail(buf) < at_least)
    {
        int ret = read(fd, (char*)buf->data + buf->size, buf->max - buf->size);
        if (ret < 0)
        {
            fprintf(stderr, "std2: child recv error %s\n", strerror(errno));
            abort();
        }
        if (ret == 0)
            return 1;

        buf->size += ret;
    }
    return 0;
}

static void load_module(int mod)
{
    const struct std2_module* old_m = modules[mod];
    if (old_m->functions)
        return;

    char name[128];
    snprintf(name, sizeof(name), "%s/libstd2_%s.so", STD2_MODULE_PATH, old_m->name);

    void* handle = dlopen(name, RTLD_NOW);
    if (!handle)
        fprintf(stderr, "%s load error: %s\n", name, dlerror());

    char symname[128];
    snprintf(symname, sizeof(symname), "std2_module_%s", old_m->name);
    void* new_m = dlsym(handle, symname);
    if (!new_m)
    {
        fprintf(stderr, "invalid std2 module: %s symbol not found: %s\n", name, symname);
        abort();
    }

    modules[mod] = new_m;

    // TODO: handle is leaked (there's no unload support)
}

void std2_init()
{
}

void std2_list_modules(const char** names, int* count)
{
    if (!count)
        return;

    int limit = *count;

    int i;
    for (i = 0; modules[i]; i++)
    {
        if (names && i < limit)
            names[i] = modules[i]->name;
    }

    *count = i;
}

#define get_listing(field) \
    if (!count) \
        return; \
\
    load_module(mod); \
    const struct std2_module* m = modules[mod]; \
\
    int limit = *count; \
\
    int i; \
    for (i = 0; m->field[i].name; i++) \
    { \
        if (names && i < limit) \
            names[i] = m->field[i].name; \
    } \
\
    *count = i; \

void std2_list_classes(int mod, const char** names, int* count)
{
    get_listing(classes)
}

void std2_list_consts(int mod, const char** names, int* count)
{
    get_listing(consts)
}

void std2_list_functions(int mod, const char** names, int* count)
{
    get_listing(functions)
}

int std2_find_module(const char* name)
{
    int i;
    for (i = 0; modules[i]; i++)
        if (strcmp(modules[i]->name, name) == 0)
            return i;
    return -1;
}

int std2_find_class(int module, const char* name)
{
    load_module(module);
    const struct std2_module* m = modules[module];
    int i;
    for (i = 0; m->classes[i].name; i++)
        if (strcmp(m->classes[i].name, name) == 0)
            return i;
    return -1;
}

int std2_find_const(int module, const char* name)
{
    load_module(module);
    const struct std2_module* m = modules[module];
    int i;
    for (i = 0; m->consts[i].name; i++)
        if (strcmp(m->consts[i].name, name) == 0)
            return i;
    return -1;
}

int std2_find_function(int module, const char* name)
{
    load_module(module);
    const struct std2_module* m = modules[module];
    int i;
    for (i = 0; m->functions[i].name; i++)
        if (strcmp(m->functions[i].name, name) == 0)
            return i;
    return -1;
}

static const struct std2_function* get_function(int mod, int func)
{
    assert(mod >= 0);
    assert(func >= 0);

    load_module(mod);

    const struct std2_module* m = modules[mod];
    const struct std2_function* f = &m->functions[func];

    return f;
}

static const struct std2_class* get_class(int mod, int clas)
{
    assert(mod >= 0);
    assert(clas >= 0);

    load_module(mod);

    const struct std2_module* m = modules[mod];
    const struct std2_class* c = &m->classes[clas];

    return c;
}

static const struct std2_const* get_const(int mod, int cons)
{
    assert(mod >= 0);
    assert(cons >= 0);

    load_module(mod);

    const struct std2_module* m = modules[mod];
    const struct std2_const* c = &m->consts[cons];

    return c;
}

static const char* parse_type(const char* p, int module, struct std2_param* param)
{
    char buf[64];
    buf[0] = '\0';
    int i;
    int ret = sscanf(p, "%s%n", buf, &i);
    p += i;

    if (ret < 1)
    {
        param->type = STD2_VOID;
        return 0;
    }

    if (strcmp(buf, "i") == 0)
        param->type = STD2_INT32;
    else if (strcmp(buf, "l") == 0)
        param->type = STD2_INT64;
    else if (strcmp(buf, "f") == 0)
        param->type = STD2_FLOAT;
    else if (strcmp(buf, "d") == 0)
        param->type = STD2_DOUBLE;
    else if (strcmp(buf, "cs") == 0)
        param->type = STD2_C_STRING;
    else if (strcmp(buf, "ms") == 0)
        param->type = STD2_M_STRING;
    else if (strcmp(buf, "cb") == 0)
        param->type = STD2_C_BUFFER;
    else if (strcmp(buf, "mb") == 0)
        param->type = STD2_M_BUFFER;
    else if (strcmp(buf, "buf") == 0)
        param->type = STD2_BUF_PTR;
    else
    {
        char* class_p;
        char* q = strchr(buf, '.');
        if (q)
        {
            class_p = q+1;
            *q = '\0';

            param->module_id = std2_find_module(buf);
            if (param->module_id < 0)
            {
                fprintf(stderr, "std2: bad module %s\n", buf);
                param->type = STD2_VOID;
                return 0;
            }
        }
        else
        {
            class_p = buf;
            param->module_id = module;
        }

        param->class_id = std2_find_class(param->module_id, class_p);
        if (param->class_id < 0)
        {
            fprintf(stderr, "std2: bad type %s\n", buf);
            param->type = STD2_VOID;
            return 0;
        }

        param->type = STD2_INSTANCE;
    }

    return p;
}

int std2_get_param_count(int mod, int func)
{
    const struct std2_function* f = get_function(mod, func);
    assert(f);

    const char* p = f->args;

    int i = 0;
    struct std2_param param;

    while ((p = parse_type(p, mod, &param)) != 0)
    {
        if (param.type == STD2_BUF_PTR)
            i++;
        i++;
    }

    return i;
}

struct std2_param std2_get_param_type(int mod, int func, int i)
{
    const struct std2_function* f = get_function(mod, func);
    struct std2_param param;
    const char* p = f->args;

    i++;
    do
    {
        p = parse_type(p, mod, &param);
        if (param.type == STD2_BUF_PTR)
        {
            i--;
            if (i)
            {
                param.type = STD2_BUF_SIZE;
                i--;
            }
        }
        else
            i--;
    } while (i && p);

    assert(p);

    return param;
}

struct std2_param std2_get_return_type(int mod, int func)
{
    const struct std2_function* f = get_function(mod, func);
    struct std2_param param;
    parse_type(f->ret, mod, &param);
    return param;
}

enum std2_const_type std2_get_const_type(int m, int c)
{
    const struct std2_const* cc = get_const(m, c);
    return cc->type;
}

const void* std2_get_const(int m, int c)
{
    const struct std2_const* cc = get_const(m, c);
    return &cc->ivalue;
}

static int has_callback;
static struct std2_callback callback;

void std2_yield_callback(struct std2_callback* cb)
{
    assert(!has_callback);
    callback = *cb;
    has_callback = 1;
}

static void read_cb(void* ret, int fd, int mask, void* user);

static void yield_read_callback(fork_state* fs, request* req)
{
    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ | STD2_CALLBACK_ERROR | STD2_CALLBACK_ABORT;
    cb.fd    = fs->to_host_fd[0];
    cb.user  = req;
    cb.func  = read_cb;
    std2_yield_callback(&cb);
}

static void read_cb(void* ret, int fd, int mask, void* user)
{
    request* req = user;
    fork_state* fs = &forks[req->fork_id-1];

    fprintf(stderr, "THE MASK IS %x\n", mask);
    if (mask & STD2_CALLBACK_ABORT)
    {
        assert(!"abort not implemented");
        abort();
        return;
    }

    buffer_reserve(&req->buffer, 1024);
    int closed = read_buffer_append(fd, &req->buffer, 1);
    assert(!closed);

    if (buffer_avail(&req->buffer) < 4)
    {
        yield_read_callback(fs, req);
        return;
    }

    int ret_size = *(std2_int32*)req->buffer.data;

    if (buffer_avail(&req->buffer) < 4 + ret_size)
    {
        yield_read_callback(fs, req);
        return;
    }

    void* p = (char*)req->buffer.data + 4;

    switch (req->ret_type.type)
    {
    case STD2_INT32:
        *(std2_int32*)ret = *(std2_int32*)p;
        p = (char*)p + 4;
        break;
    }
}

static void write_cb(void* ret, int fd, int mask, void* user)
{
    request* req = user;
    fork_state* fs = &forks[req->fork_id-1];

    (void)ret;

    if (mask & STD2_CALLBACK_ABORT)
    {
        assert(!"abort not implemented");
        abort();
        return;
    }

    int r = write_buffer(fd, &req->buffer);
    if (r < 0)
    {
        fprintf(stderr, "std2: wtf, error %s\n", strerror(errno));
        abort();
    }

    if (req->buffer.pos < req->buffer.size)
    {
        // Didn't write everything => wait for next write access.

        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_WRITE | STD2_CALLBACK_ABORT;
        cb.fd    = fs->to_client_fd[1];
        cb.user  = req;
        cb.func  = write_cb;
        std2_yield_callback(&cb);
        return;
    }

    // Request written, wait for response.

    req->buffer.pos = 0;
    req->buffer.size = 0;
    yield_read_callback(fs, req);
}

int std2_call(int fork, int mod, int func, void* ret, void* const * args)
{
    const struct std2_function* f = get_function(mod, func);

    has_callback = 0;

    if (fork == 0)
    {
        f->func(ret, args);
    }
    else
    {
        fork_state* fs = &forks[fork-1];

        request* req = malloc(sizeof(request));
        memset(req, 0, sizeof(request));

        req->fork_id = fork;
        req->id = fs->next_id++;

        buffer_append_32(&req->buffer, 'c');
        buffer_append_32(&req->buffer, mod);
        buffer_append_32(&req->buffer, func);
        int size_pos = req->buffer.size;
        buffer_append_32(&req->buffer, 0); // size of param block

        int param_count = std2_get_param_count(mod, func);
        int i;
        for (i = 0; i < param_count; i++)
        {
            struct std2_param p = std2_get_param_type(mod, func, i);
            switch (p.type)
            {
            case STD2_INT32:
                buffer_append_32(&req->buffer, *(int*)args[i]);
                break;

            case STD2_C_STRING:
                {
                    int l = strlen((char*)args[i]) + 1;
                    int n = (l + 3) & ~3;
                    buffer_append_32(&req->buffer, n);
                    buffer_append_data(&req->buffer, (char*)args[i], l);
                    buffer_append_alignment(&req->buffer, 4);
                }
                break;

            default:
                fprintf(stderr, "std2: unknown type %d\n", p.type);
                abort();
            }
        }

        req->ret_type = std2_get_return_type(mod, func);

        *(int*)((char*)req->buffer.data + size_pos) = req->buffer.size - size_pos - 4;

        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_WRITE | STD2_CALLBACK_ABORT;
        cb.fd    = fs->to_client_fd[1];
        cb.user  = req;
        cb.func  = write_cb;
        std2_yield_callback(&cb);
    }

    return has_callback;
}

int std2_unrefer(int fork, int mod, int clas, void* ptr)
{
    has_callback = 0;

    if (fork == 0)
    {
        std2_unrefer_func f = get_class(mod, clas)->unrefer;
        if (f)
            f(ptr);
    }
    else
    {
        fork_state* fs = &forks[fork-1];

        request* req = malloc(sizeof(request));
        memset(req, 0, sizeof(request));

        req->fork_id = fork;
        req->id = fs->next_id++;

        buffer_append_32(&req->buffer, 'u');
        buffer_append_32(&req->buffer, mod);
        buffer_append_32(&req->buffer, clas);
        buffer_append_64(&req->buffer, (std2_int64)ptr);

        struct std2_callback cb;
        cb.flags = STD2_CALLBACK_WRITE | STD2_CALLBACK_ABORT;
        cb.fd    = fs->to_client_fd[1];
        cb.user  = req;
        cb.func  = write_cb;
        std2_yield_callback(&cb);
    }

    return has_callback;
}

struct std2_callback std2_get_callback()
{
    assert(has_callback);
    return callback;
}

int std2_call_callback(struct std2_callback* cb, void* ret, int mask)
{
    has_callback = 0;
    cb->func(ret, cb->fd, mask, cb->user);
    return has_callback;
}

int std2_get_module_flags(int m)
{
    load_module(m);
    return modules[m]->flags;
}

int std2_fork()
{
    fork_count++;
    forks = realloc(forks, sizeof(fork_state) * fork_count);

    fork_state* fs = &forks[fork_count-1];
    memset(fs, 0, sizeof(fork_state));

    if (pipe(fs->to_client_fd) < 0)
    {
        // TODO:
        abort();
    }

    if (pipe(fs->to_host_fd) < 0)
    {
        // TODO:
        abort();
    }

    int pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "std2: fork() failed\n");
        abort();
    }

    if (pid != 0)
    {
        fs->fork_pid = pid;
        close(fs->to_client_fd[0]);
        close(fs->to_host_fd[1]);
    }
    else
    {
        close(fs->to_client_fd[1]);
        close(fs->to_host_fd[0]);

        // Child.

        while (1)
        {
            read_buffer_append(fs->to_client_fd[0], &fs->in_buffer, 16);

            int marker = buffer_read_32(&fs->in_buffer);

            if (marker == 'c')
            {
                int m = buffer_read_32(&fs->in_buffer);
                int f = buffer_read_32(&fs->in_buffer);
                int params_size = buffer_read_32(&fs->in_buffer);

                read_buffer_append(fs->to_client_fd[0], &fs->in_buffer, params_size);

                void* args[16];

                void* p = (char*)fs->in_buffer.data + fs->in_buffer.pos;

                int param_count = std2_get_param_count(m, f);
                int i;
                for (i = 0; i < param_count; i++)
                {
                    struct std2_param t = std2_get_param_type(m, f, i);
                    switch (t.type)
                    {
                    case STD2_INT32:
                        args[i] = p;
                        p = (char*)p + 4;
                        break;

                    case STD2_C_STRING:
                        {
                            int size = *(int*)p;
                            p = (char*)p + 4;
                            args[i] = p;
                            p = (char*)p + size;
                        }
                        break;

                    default:
                        fprintf(stderr, "std2: unknown type %d\n", t.type);
                        abort();
                    }
                }

                const struct std2_function* func = get_function(m, f);
                struct std2_param ret = std2_get_return_type(m, f);

                has_callback = 0;

                int size_pos = fs->out_buffer.pos;
                buffer_append_32(&fs->out_buffer, 0); // size will be filled afterwards

                switch (ret.type)
                {
                case STD2_VOID:
                    func->func(0, args);
                    break;

                case STD2_INT32:
                    {
                        std2_int32 v;
                        func->func(&v, args);
                        buffer_append_32(&fs->out_buffer, v);
                    }
                    break;

                case STD2_INSTANCE:
                    {
                        void* v;
                        func->func(&v, args);
                        buffer_append_64(&fs->out_buffer, (std2_int64)v);
                    }
                    break;

                default:
                    fprintf(stderr, "std2: unknown type %d\n", ret.type);
                    abort();
                }

                *(int*)((char*)fs->out_buffer.data + size_pos) =
                    fs->out_buffer.size - size_pos - 4;

                while (buffer_avail(&fs->out_buffer))
                    write_buffer(fs->to_host_fd[1], &fs->out_buffer);

                fs->in_buffer.pos = 0;
                fs->in_buffer.size = 0;
                fs->out_buffer.pos = 0;
                fs->out_buffer.size = 0;
            }
            else if (marker == 'u')
            {
                assert(!"todo");
            }
            else
            {
                fprintf(stderr, "std2: protocol error\n");
                abort();
            }
        }
    }

    return fork_count;
}

void std2_unfork(int f)
{
    assert(f);
    fork_state* fs = &forks[f-1];

    fprintf(stderr, "FORK CLOSED %d\n", f);

    close(fs->to_client_fd[1]);
    close(fs->to_host_fd[0]);

    buffer_free(&fs->in_buffer);
    buffer_free(&fs->out_buffer);
}
