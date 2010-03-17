#include "std2priv.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

static void free_stat(void* ptr)
{
    free(ptr);
}

static void wrap_fork(void* ret, void * const* args)
{
    (void)args;
    *(int*)ret = fork();
}

static void wrap_stat(void* ret, void* const* args)
{
    struct stat* st = malloc(sizeof(struct stat));
    int retval = stat((const char*)args[0], st);
    if (retval < 0)
    {
        free(st);
        st = 0;
    }
    *(void**)ret = st;
}

static void wrap_stat_size(void* ret, void* const* args)
{
    struct stat* st = args[0];
    *(int*)ret = st->st_size;
}

static void wrap_stat_atime(void* ret, void* const* args)
{
    struct stat* st = args[0];
    *(std2_int64*)ret = st->st_atime;
}

static void wrap_stat_mtime(void* ret, void* const* args)
{
    struct stat* st = args[0];
    *(std2_int64*)ret = st->st_mtime;
}

static void wrap_stat_ctime(void* ret, void* const* args)
{
    struct stat* st = args[0];
    *(std2_int64*)ret = st->st_ctime;
}

STD2_BEGIN_CLASS_LIST(posix)
    STD2_CLASS("stat", free_stat)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(posix)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(posix)
    STD2_FUNC("fork",         "i",      "",         wrap_fork)
    STD2_FUNC("stat",         "stat",   "cs",       wrap_stat)
    /* TODO: implement the rest, I only needed mtime just right now */
    /*
    STD2_FUNC("stat_dev",     "i",      "stat",     wrap_stat_dev)
    STD2_FUNC("stat_ino",     "i",      "stat",     wrap_stat_ino)
    STD2_FUNC("stat_mode",    "i",      "stat",     wrap_stat_mode)
    STD2_FUNC("stat_nlink",   "i",      "stat",     wrap_stat_nlink)
    STD2_FUNC("stat_uid",     "i",      "stat",     wrap_stat_uid)
    STD2_FUNC("stat_gid",     "i",      "stat",     wrap_stat_gid)
    STD2_FUNC("stat_rdev",    "i",      "stat",     wrap_stat_rdev)
    */
    STD2_FUNC("stat_size",    "i",      "stat",     wrap_stat_size)
    /*
    STD2_FUNC("stat_blksize", "i",      "stat",     wrap_stat_blksize)
    STD2_FUNC("stat_blocks",  "i",      "stat",     wrap_stat_blocks)
    */
    STD2_FUNC("stat_atime",   "ll",     "stat",     wrap_stat_atime)
    STD2_FUNC("stat_mtime",   "ll",     "stat",     wrap_stat_mtime)
    STD2_FUNC("stat_ctime",   "ll",     "stat",     wrap_stat_ctime)
STD2_END_FUNC_LIST()

STD2_MODULE(posix)


