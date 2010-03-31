#include "std2priv.h"
#include <fnmatch.h>
#include <assert.h>

static void wrap_fnmatch(void* ret, void* const * args)
{
    *(int*)ret = fnmatch((const char*)args[0], (const char*)args[1], *(int*)args[2]);
}

STD2_BEGIN_CLASS_LIST(fnmatch)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(fnmatch)
    STD2_CONST("PATHNAME",    INT, FNM_PATHNAME)
    STD2_CONST("NOESCAPE",    INT, FNM_NOESCAPE)
    STD2_CONST("PERIOD",      INT, FNM_PERIOD)
    STD2_CONST("FILE_NAME",   INT, FNM_FILE_NAME)
    STD2_CONST("LEADING_DIR", INT, FNM_LEADING_DIR)
//    STD2_CONST("EXTMATCH",    INT, FNM_EXTMATCH)
    STD2_CONST("NOMATCH",     INT, FNM_NOMATCH)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(fnmatch)
    STD2_FUNC("fnmatch", "i", "cs cs i", wrap_fnmatch)
STD2_END_FUNC_LIST()

STD2_MODULE(fnmatch, 0)
