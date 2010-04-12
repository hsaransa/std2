#include "std2priv.h"
#include "buffer.h"
#include "fork.h"
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

extern int std2_last_delay_id;
extern const struct std2_module* std2_modules[];
void std2_load_module(int m);

void std2_init()
{
}

void std2_list_modules(const char** names, int* count)
{
    if (!count)
        return;

    int limit = *count;

    int i;
    for (i = 0; std2_modules[i]; i++)
    {
        if (names && i < limit)
            names[i] = std2_modules[i]->name;
    }

    *count = i;
}

#define get_listing(field) \
    if (!count) \
        return; \
\
    std2_load_module(mod); \
    const struct std2_module* m = std2_modules[mod]; \
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
    for (i = 0; std2_modules[i]; i++)
        if (strcmp(std2_modules[i]->name, name) == 0)
            return i;
    return -1;
}

int std2_find_class(int module, const char* name)
{
    std2_load_module(module);
    const struct std2_module* m = std2_modules[module];
    int i;
    for (i = 0; m->classes[i].name; i++)
        if (strcmp(m->classes[i].name, name) == 0)
            return i;
    return -1;
}

int std2_find_const(int module, const char* name)
{
    std2_load_module(module);
    const struct std2_module* m = std2_modules[module];
    int i;
    for (i = 0; m->consts[i].name; i++)
        if (strcmp(m->consts[i].name, name) == 0)
            return i;
    return -1;
}

int std2_find_function(int module, const char* name)
{
    std2_load_module(module);
    const struct std2_module* m = std2_modules[module];
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

    std2_load_module(mod);

    const struct std2_module* m = std2_modules[mod];
    const struct std2_function* f = &m->functions[func];

    return f;
}

static const struct std2_class* get_class(int mod, int clas)
{
    assert(mod >= 0);
    assert(clas >= 0);

    std2_load_module(mod);

    const struct std2_module* m = std2_modules[mod];
    const struct std2_class* c = &m->classes[clas];

    return c;
}

static const struct std2_const* get_const(int mod, int cons)
{
    assert(mod >= 0);
    assert(cons >= 0);

    std2_load_module(mod);

    const struct std2_module* m = std2_modules[mod];
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

int std2_get_module_flags(int m)
{
    std2_load_module(m);
    return std2_modules[m]->flags;
}

/*
 * Callbacks
 */

static int                   num_callbacks;
static struct std2_callback* callbacks;

void std2_yield_callback(struct std2_callback* cb)
{
    num_callbacks++;
    callbacks = realloc(callbacks, sizeof(struct std2_callback) * num_callbacks);
    callbacks[num_callbacks-1] = *cb;
}

int std2_get_callback(struct std2_callback* cb)
{
    if (!num_callbacks)
        return 0;
    *cb = callbacks[--num_callbacks];
    return 1;
}

/*
 * Calls.
 */

int std2_call(int fork, int mod, int func, void* ret, void* const * args)
{
    const struct std2_function* f = get_function(mod, func);

    std2_last_delay_id = 0;

    /* Without fork, this is trivial. */

    if (fork == 0)
    {
        f->func(ret, args);
        return std2_last_delay_id;
    }

    /* Forked. */

    request* req = new_request(fork, mod, func);

    fork_state* fs = get_fork(fork);

    int size_pos = fs->out_buffer.size;
    buffer_append_32(&fs->out_buffer, 0); // size of param block

    int param_count = std2_get_param_count(mod, func);
    int i;
    for (i = 0; i < param_count; i++)
    {
        struct std2_param p = std2_get_param_type(mod, func, i);
        switch (p.type)
        {
            case STD2_INT32:
                buffer_append_32(&fs->out_buffer, *(int*)args[i]);
                break;

            case STD2_C_STRING:
                {
                    int l = strlen((char*)args[i]) + 1;
                    int n = (l + 3) & ~3;
                    buffer_append_32(&fs->out_buffer, n);
                    buffer_append_data(&fs->out_buffer, (char*)args[i], l);
                    buffer_append_alignment(&fs->out_buffer, 4);
                }
                break;

            case STD2_INSTANCE:
                buffer_append_data(&fs->out_buffer, &args[i], sizeof(void*));
                break;

            default:
                fprintf(stderr, "std2: (b) unknown type %d\n", p.type);
                abort();
        }
    }

    *(int*)((char*)fs->out_buffer.data + size_pos) = fs->out_buffer.size - size_pos - 4;

    req->ret_type = std2_get_return_type(mod, func);
    req->return_id = std2_delay_return(0, req);

    return std2_last_delay_id;
}

void std2_unrefer(int fork, int mod, int clas, void* ptr)
{
    if (fork == 0)
    {
        std2_unrefer_func f = get_class(mod, clas)->unrefer;
        if (f)
            f(ptr);
    }
    else
    {
        new_unrefer_request(fork, mod, clas, ptr);
    }
}

void std2_call_callback(struct std2_callback* cb, int mask)
{
    cb->func(cb->fd, mask, cb->user);
}
