/* Header file of standard standard library (std^2) */
#ifndef _std2_h_
#define _std2_h_

#ifdef __cplusplus
extern "C" {
#endif

typedef int             std2_int32;
typedef long long int   std2_int64;
typedef void          (*std2_callback_func)(int fd, int mask, void*);

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
    STD2_M_STRING,    // "ms", malloced c string, call free() for this
    STD2_C_BUFFER,    // "cb", const buffer, struct std2_buffer
    STD2_M_BUFFER,    // "mb", malloced buffer, struct std2_buffer, call free() for data
    // TODO: BUF_PTR and BUF_SIZE are obsolete, remove them!
    STD2_BUF_PTR,     // "buf"
    STD2_BUF_SIZE,    // always after BUF_PTR
    STD2_INSTANCE,    // module.class or just class to refer current module
};

struct std2_buffer
{
    void* data;
    int size;
};

struct std2_param
{
    enum std2_param_type type;
    int module_id;
    int class_id;
};

enum std2_callback_flags
{
    STD2_CALLBACK_READ       = 1,
    STD2_CALLBACK_WRITE      = 2,
    STD2_CALLBACK_ERROR      = 4,
    STD2_CALLBACK_TIMEOUT    = 8,
    STD2_CALLBACK_ABORT      = 16
};

struct std2_callback
{
    int flags;
    int fd;
    int timeout; // in ms
    void* user;
    std2_callback_func func;
};

enum std2_module_flags
{
    STD2_MODULE_VALID       = 1, // all modules have this bit on
    STD2_MODULE_BLOCKS      = 2, // calls may block
    STD2_MODULE_UNSAFE      = 4, // calls may crash
    STD2_MODULE_THREAD_SAFE = 8, // may be called from different threads
    STD2_MODULE_MUST_FORK   = 16
};

void std2_init();

// Assigns at most *count number of names to *names and then sets *count to
// total number of names.
void std2_list_modules(const char** names, int* count);
void std2_list_classes(int m, const char** names, int* count);
void std2_list_consts(int m, const char** names, int* count);
void std2_list_functions(int m, const char** names, int* count);

int  std2_get_module_flags(int m);

int  std2_fork();
void std2_unfork(int id);

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

// Returns zero on success, positive number on delayed return (the id).
int  std2_call(int fork, int mod, int func, void* ret, void* const * args);
void std2_unrefer(int fork, int mod, int clas, void* ptr);

// Returns true if there was a callback.
int std2_get_callback(struct std2_callback*);

void std2_call_callback(struct std2_callback* cb, int mask);

// Get id for delayed return. Returns zero if there are none available.
int std2_get_return();
// Perform the actual return, returns zero on success. Non-zero means
// that fork crashed.
int std2_do_return(int id, void* ret);
// Abort call.
void std2_abort_return(int id);

#ifdef __cplusplus
}
#endif

#endif
