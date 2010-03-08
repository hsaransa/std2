#include "std2.h"
#include <assert.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

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

static void wrap_strerror(void* ret, void* const * args, int n)
{
    assert(n == 1);
    *(char**)ret = strerror(*(int*)args[0]);
}

static void wrap_time(void* ret, void* const * args, int n)
{
    assert(n == 0);
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

static void wrap_gmtime(void* ret, void* const * args, int n)
{
    struct tm* tm;
    time_t t;

    assert(n == 1);

    t = *(std2_int64*)args[0];
    tm = gmtime(&t);

    *(void**)ret = (void*)copy_tm(tm);
}

static void wrap_localtime(void* ret, void* const * args, int n)
{
    struct tm* tm;
    time_t t;

    assert(n == 1);

    t = *(std2_int64*)args[0];
    tm = localtime(&t);

    *(void**)ret = (void*)copy_tm(tm);
}

static void wrap_strftime(void* ret, void* const * args, int n)
{
    assert(n == 4);
    ssize_t v;
    v = strftime((char*)args[0], *(int*)args[1], (const char*)args[2], (const struct tm*)args[3]);
    *(std2_int32*)ret = v;
}

STD2_BEGIN_FUNC_LIST(libc)
    STD2_FUNC("strerror",  "cs", "i",         wrap_strerror)
    STD2_FUNC("time",      "l",  "",          wrap_time)
    STD2_FUNC("gmtime",    "tm", "l",         wrap_gmtime)
    STD2_FUNC("localtime", "tm", "l",         wrap_localtime)
    STD2_FUNC("strftime",  "i",  "buf cs tm", wrap_strftime)
STD2_END_FUNC_LIST()

STD2_MODULE(libc)
