#include "std2priv.h"
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

extern const struct std2_module std2_module_fnmatch;
extern const struct std2_module std2_module_libc;
extern const struct std2_module std2_module_iconv;
extern const struct std2_module std2_module_glob;
extern const struct std2_module std2_module_posix;
extern const struct std2_module std2_module_inotify;
STD2_MODULE_DYN_STUB(readline)
STD2_MODULE_DYN_STUB(sdl)
STD2_MODULE_DYN_STUB(fltk)
STD2_MODULE_DYN_STUB(cuda)

static const struct std2_module* modules[] = {
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
#ifdef STD2_FLTK
    &std2_module_fltk,
#endif
#ifdef STD2_CUDA
    &std2_module_cuda,
#endif
    0
};

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

    // TODO: handle is leaked (there's now unload support)
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

    const struct std2_module* m = modules[mod];
    const struct std2_function* f = &m->functions[func];

    return f;
}

static const struct std2_class* get_class(int mod, int clas)
{
    assert(mod >= 0);
    assert(clas >= 0);

    const struct std2_module* m = modules[mod];
    const struct std2_class* c = &m->classes[clas];

    return c;
}

static const struct std2_const* get_const(int mod, int cons)
{
    assert(mod >= 0);
    assert(cons >= 0);

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
        param->type = STD2_M_C_STRING;
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

int std2_call(int mod, int func, void* ret, void* const * args)
{
    const struct std2_function* f = get_function(mod, func);

    has_callback = 0;
    f->func(ret, args);
    return has_callback;
}

void std2_unrefer(int mod, int clas, void* ptr)
{
    std2_unrefer_func f = get_class(mod, clas)->unrefer;
    if (f)
        f(ptr);
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
