#include "std2priv.h"
#include <glob.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct my_glob_s
{
    int error;
    glob_t glob;
} my_glob;

static void free_glob(void* ptr)
{
    my_glob* g = (my_glob*)ptr;
    assert(g);
    globfree(&g->glob);
    free(g);
}

static void wrap_glob(void* ret, void* const * args)
{
    const char* path = (const char*)args[0];
    int flags = *(int*)args[1];

    my_glob* g = malloc(sizeof(my_glob));
    memset(g, 0, sizeof(*g));

    g->error = glob(path, flags, 0, &g->glob);

    *(void**)ret = g;
}

static void wrap_glob_error(void* ret, void* const * args)
{
    *(int*)ret = ((my_glob*)args[0])->error;
}

static void wrap_glob_count(void* ret, void* const * args)
{
    *(int*)ret = ((my_glob*)args[0])->glob.gl_pathc;
}

static void wrap_glob_path(void* ret, void* const * args)
{
    my_glob* g = (my_glob*)args[0];
    int i = *(int*)args[1];

    if (i >= 0 && i < (int)g->glob.gl_pathc)
        *(const char**)ret = g->glob.gl_pathv[i];
    else
        *(const char**)ret = 0;
}

STD2_BEGIN_CLASS_LIST(glob)
    STD2_CLASS("glob", free_glob)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(glob)
    STD2_CONST("ERR",      INT, GLOB_ERR)
    STD2_CONST("MARK",     INT, GLOB_MARK)
    STD2_CONST("NOSORT",   INT, GLOB_NOSORT)
    STD2_CONST("DOOFFS",   INT, GLOB_DOOFFS)
    STD2_CONST("NOCHECK",  INT, GLOB_NOCHECK)
    STD2_CONST("APPEND",   INT, GLOB_APPEND)
    STD2_CONST("NOESCAPE", INT, GLOB_NOESCAPE)

    STD2_CONST("NOSPACE",  INT, GLOB_NOSPACE)
    STD2_CONST("ABORTED",  INT, GLOB_ABORTED)
    STD2_CONST("NOMATCH",  INT, GLOB_NOMATCH)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(glob)
    STD2_FUNC("glob",       "glob", "cs i",   wrap_glob)
    STD2_FUNC("glob_error", "i",    "glob",   wrap_glob_error)
    STD2_FUNC("glob_count", "i",    "glob",   wrap_glob_count)
    STD2_FUNC("glob_path",  "cs",   "glob i", wrap_glob_path)
STD2_END_FUNC_LIST()

STD2_MODULE(glob)
