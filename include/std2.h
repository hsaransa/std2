/* Header file of standard standard library (std^2) */
#ifndef _std2_h_
#define _std2_h_

#ifdef __cplusplus
extern "C" {
#endif

typedef int             std2_int32;
typedef long long int   std2_int64;
typedef void          (*std2_callback_func)(void*, int fd, int mask, void*);

enum std2_const_type
{
    STD2_CONST_INT,
    STD2_CONST_FLOAT
};

enum std2_param_type
{
    STD2_VOID,        // empty
    STD2_INT32,       // "i"
    STD2_INT64,       // "l"
    STD2_FLOAT,       // "f"
    STD2_DOUBLE,      // "d"
    STD2_C_STRING,    // "cs"
    STD2_M_C_STRING,  // "ms", malloced c string, call free() for this
    STD2_BUF_PTR,     // "buf"
    STD2_BUF_SIZE,    // always after BUF_PTR
    STD2_INSTANCE,    // module.class or just class to refer current module
};

struct std2_param
{
    enum std2_param_type type;
    int module_id;
    int class_id;
};

#define STD2_CALLBACK_READ          1
#define STD2_CALLBACK_WRITE         2
#define STD2_CALLBACK_ERROR         4
#define STD2_CALLBACK_TIMEOUT       8
#define STD2_CALLBACK_ABORT         16

struct std2_callback
{
    int flags;
    int fd;
    int timeout; // ms
    void* user;
    std2_callback_func func;
};

void std2_init();

// Sets at most *count number of names to *names and then sets *count to
// total number of names.
void std2_list_modules(const char** names, int* count);
void std2_list_classes(int m, const char** names, int* count);
void std2_list_consts(int m, const char** names, int* count);
void std2_list_functions(int m, const char** names, int* count);

// Returns negative if not found.
int  std2_find_module(const char* name);
int  std2_find_class(int m, const char* name);
int  std2_find_const(int m, const char* name);
int  std2_find_function(int m, const char* name);

int                 std2_get_param_count(int m, int f);
struct std2_param   std2_get_param_type(int m, int f, int i);
struct std2_param   std2_get_return_type(int m, int f);

enum std2_const_type    std2_get_const_type(int m, int c);
const void*             std2_get_const(int m, int c);

// Returns 1 if return value is returned by a callback.
int std2_call(int mod, int func, void* ret, void* const * args);
int std2_call_callback(struct std2_callback* cb, void* ret, int mask);
void std2_unrefer(int mod, int clas, void* ptr);

struct std2_callback std2_get_callback();

#ifdef __cplusplus
}
#endif

#endif
