#ifndef _std2priv_h_
#define _std2priv_h_

#include "std2.h"

#ifdef __cplusplus
extern "C" {
#endif

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
    const struct std2_class*    classes;
    const struct std2_const*    consts;
    const struct std2_function* functions;
};

#define STD2_BEGIN_CLASS_LIST(name) static const struct std2_class class_list_##name[] = {
#define STD2_CLASS(name, unrefer) { name, unrefer },
#define STD2_END_CLASS_LIST() { 0, 0 } };

#define STD2_BEGIN_CONST_LIST(name) static const struct std2_const const_list_##name[] = {
#define STD2_CONST(name, type, ival) { name, STD2_CONST_##type, ival },
#define STD2_END_CONST_LIST() { 0, 0, 0 } };

#define STD2_BEGIN_FUNC_LIST(name) static const struct std2_function func_list_##name[] = {
#define STD2_FUNC(name, ret, args, func) { name, ret, args, func },
#define STD2_END_FUNC_LIST() { 0, 0, 0, 0 } };

#define STD2_MODULE(name) \
const struct std2_module std2_module_##name = \
{ #name, class_list_##name, const_list_##name, func_list_##name };

#ifdef __cplusplus
}
#endif

#endif
