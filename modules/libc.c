#include "std2priv.h"
#include <assert.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * structs
 */

static void free_tm(void* ptr)
{
    free(ptr);
}

STD2_BEGIN_CLASS_LIST(libc)
    STD2_CLASS("tm", free_tm)
STD2_END_CLASS_LIST()

/*
 * consts
 */

STD2_BEGIN_CONST_LIST(libc)
STD2_END_CONST_LIST()

/*
 * functions
 */

static void wrap_new_tm(void* ret, void* const * args)
{
    struct tm* tm;
    (void)args;
    tm = malloc(sizeof(struct tm));
    memset(tm, 0, sizeof(*tm));
    *(void**)ret = tm;
}

static void wrap_strerror(void* ret, void* const * args)
{
    *(char**)ret = strerror(*(int*)args[0]);
}

static void wrap_time(void* ret, void* const * args)
{
    (void)args;
    *(std2_int64*)ret = (std2_int64)time(0);
}

static struct tm* copy_tm(const struct tm* tm)
{
    struct tm* tm2;
    tm2 = malloc(sizeof(struct tm));
    memcpy(tm2, tm, sizeof(struct tm));
    return tm2;
}

static void wrap_gmtime(void* ret, void* const * args)
{
    struct tm* tm;
    time_t t;

    t = *(std2_int64*)args[0];
    tm = gmtime(&t);

    *(void**)ret = (void*)copy_tm(tm);
}

static void wrap_localtime(void* ret, void* const * args)
{
    struct tm* tm;
    time_t t;

    t = *(std2_int64*)args[0];
    tm = localtime(&t);

    *(void**)ret = (void*)copy_tm(tm);
}

static void wrap_strftime(void* ret, void* const * args)
{
    ssize_t v;
    v = strftime((char*)args[0], *(int*)args[1], (const char*)args[2], (const struct tm*)args[3]);
    *(std2_int32*)ret = v;
}

// move to posix?
#if 0
static void wrap_strptime(void* ret, void* const * args)
{
    *(char**)ret = strptime((char*)args[0], (char*)args[1], (struct tm*)args[2]);
}
#endif

#define INT_TO_INT_WRAP(x) \
static void wrap_##x(void* ret, void* const* args) { \
    *(int*)ret = x(*(int*)args[0]); \
}

INT_TO_INT_WRAP(isalnum)
INT_TO_INT_WRAP(isalpha)
INT_TO_INT_WRAP(isascii)
INT_TO_INT_WRAP(isblank)
INT_TO_INT_WRAP(iscntrl)
INT_TO_INT_WRAP(isdigit)
INT_TO_INT_WRAP(isgraph)
INT_TO_INT_WRAP(islower)
INT_TO_INT_WRAP(isprint)
INT_TO_INT_WRAP(ispunct)
INT_TO_INT_WRAP(isspace)
INT_TO_INT_WRAP(isupper)
INT_TO_INT_WRAP(isxdigit)
INT_TO_INT_WRAP(toupper)
INT_TO_INT_WRAP(tolower)

STD2_BEGIN_FUNC_LIST(libc)
    STD2_FUNC("new_tm",     "tm", "",          wrap_new_tm)
    //STD2_FUNC("set_tm_sec", "tm", "i",         wrap_set_tm_sec)
    STD2_FUNC("strerror",   "cs", "i",         wrap_strerror)
    STD2_FUNC("time",       "l",  "",          wrap_time)
    STD2_FUNC("gmtime",     "tm", "l",         wrap_gmtime)
    STD2_FUNC("localtime",  "tm", "l",         wrap_localtime)
    STD2_FUNC("strftime",   "i",  "buf cs tm", wrap_strftime)
    //STD2_FUNC("strptime",   "cs", "cs cs tm",  wrap_strptime)

    STD2_FUNC("isalnum",    "i", "i", wrap_isalnum)
    STD2_FUNC("isalpha",    "i", "i", wrap_isalpha)
    STD2_FUNC("isascii",    "i", "i", wrap_isascii)
    STD2_FUNC("isblank",    "i", "i", wrap_isblank)
    STD2_FUNC("iscntrl",    "i", "i", wrap_iscntrl)
    STD2_FUNC("isdigit",    "i", "i", wrap_isdigit)
    STD2_FUNC("isgraph",    "i", "i", wrap_isgraph)
    STD2_FUNC("islower",    "i", "i", wrap_islower)
    STD2_FUNC("isprint",    "i", "i", wrap_isprint)
    STD2_FUNC("ispunct",    "i", "i", wrap_ispunct)
    STD2_FUNC("isspace",    "i", "i", wrap_isspace)
    STD2_FUNC("isupper",    "i", "i", wrap_isupper)
    STD2_FUNC("isxdigit",   "i", "i", wrap_isxdigit)
    STD2_FUNC("toupper",    "i", "i", wrap_toupper)
    STD2_FUNC("tolower",    "i", "i", wrap_tolower)
STD2_END_FUNC_LIST()

STD2_MODULE(libc, 0)
