/* Header file of standard standard library (std^2) */
#ifndef _std2_h_
#define _std2_h_

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*std2_unrefer_func)(void* ptr);
typedef void (*std2_func)(void* ret, void* const * args);

typedef int std2_int32;
typedef long long int std2_int64;

enum std2_const_type
{
    STD2_CONST_INT,
    STD2_CONST_FLOAT
};

enum std2_param_type
{
    STD2_VOID,      // empty
    STD2_INT32,     // "i"
    STD2_INT64,     // "l"
    STD2_FLOAT,     // "f"
    STD2_DOUBLE,    // "d"
    STD2_C_STRING,  // "cs"
    STD2_BUF_PTR,   // "buf"
    STD2_BUF_SIZE,  // always after BUF_PTR
    STD2_INSTANCE,  // module.class
};

struct std2_param
{
    enum std2_param_type type;
    int module_id;
    int class_id;
};

void std2_init();

void std2_list_modules(const char** names, int* count);
void std2_list_classes(int m, const char** names, int* count);
void std2_list_consts(int m, const char** names, int* count);
void std2_list_functions(int m, const char** names, int* count);

int  std2_find_module(const char* name);
int  std2_find_class(int m, const char* name);
int  std2_find_const(int m, const char* name);
int  std2_find_function(int m, const char* name);

int                 std2_get_param_count(int m, int f);
struct std2_param   std2_get_param_type(int m, int f, int i);
struct std2_param   std2_get_return_type(int m, int f);

void std2_call(int mod, int func, void* ret, void* const * args);
void std2_unrefer(int mod, int clas, void* ptr);

#ifdef __cplusplus
}
#endif

#endif
