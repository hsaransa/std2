#ifndef _std2priv_h_
#define _std2priv_h_

#include "std2.h"

#ifdef __cplusplus
#define STD2_EXTERN extern "C"
#else
#define STD2_EXTERN
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*std2_unrefer_func)(void* ptr);
typedef void (*std2_func)(void* ret, void* const * args);
typedef void (*std2_return_func)(int id, void* ret, void* user, void* user2);

struct std2_class
{
    const char*         name;
    std2_unrefer_func   unrefer;
};

struct std2_const
{
    const char*             name;
    enum std2_const_type    type;
    long long int           ivalue;
};

struct std2_function
{
    const char*         name;
    const char*         ret;
    const char*         args;
    std2_func           func;
};

struct std2_module
{
    const char*                 name;
    unsigned int                flags;
    const struct std2_class*    classes;
    const struct std2_const*    consts;
    const struct std2_function* functions;
};

int  std2_delay_return();
void std2_continue_return(int id, std2_return_func, void*);

int  std2_current_fork_fd();
void std2_process_request();

void std2_yield_callback(struct std2_callback* cb);

// Macros to create module specifications.

#define STD2_BEGIN_CLASS_LIST(name) static const struct std2_class class_list_##name[] = {
#define STD2_CLASS(name, unrefer) { name, unrefer },
#define STD2_END_CLASS_LIST() { 0, 0 } };

#define STD2_BEGIN_CONST_LIST(name) static const struct std2_const const_list_##name[] = {
#define STD2_CONST(name, type, ival) { name, STD2_CONST_##type, ival },
#define STD2_END_CONST_LIST() { 0, STD2_CONST_INT, 0 } };

#define STD2_BEGIN_FUNC_LIST(name) static const struct std2_function func_list_##name[] = {
#define STD2_FUNC(name, ret, args, func) { name, ret, args, func },
#define STD2_END_FUNC_LIST() { 0, 0, 0, 0 } };

#define STD2_MODULE(name, f) \
STD2_EXTERN const struct std2_module std2_module_##name = \
{ #name, f | STD2_MODULE_VALID, class_list_##name, const_list_##name, func_list_##name };

#define STD2_MODULE_DYN_STUB(name) \
STD2_EXTERN const struct std2_module std2_module_##name = \
{ #name, 0, 0, 0, 0 };

// Helpers.

#define STD2_STRUCT_INT_SETTER(s, s2, f) \
static void s##_set_##f(void* ret, void* const* args) { \
    ((s2*)args[0])->f = *(int*)ret; \
}

#define STD2_STRUCT_INT_GETTER(s, s2, f) \
static void s##_get_##f(void* ret, void* const* args) { \
    *(int*)ret = ((s2*)args[0])->f; \
}

#ifdef __cplusplus
}
#endif

#endif
