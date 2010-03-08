#include "std2priv.h"
#include <iconv.h>

static void iconv_unrefer(void* arg)
{
    iconv_close((iconv_t)arg);
}

static void wrap_iconv_open(void* ret, void* const* args)
{
    iconv_t ic = iconv_open((char*)args[0], (char*)args[1]);
    *(void**)ret = (void*)ic;
}

static void wrap_iconv(void* ret, void* const* args)
{
    size_t r = iconv(args[0], args[1], args[2], args[3], args[4]);
    *(int*)ret = r;
}

STD2_BEGIN_CLASS_LIST(iconv)
    STD2_CLASS("iconv", iconv_unrefer)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(iconv)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(iconv)
    STD2_FUNC("open",  "iconv", "cs cs",         wrap_iconv_open)
    STD2_FUNC("iconv", "i",     "iconv buf buf", wrap_iconv)
STD2_END_FUNC_LIST()

STD2_MODULE(iconv)


#if 0
extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);

/* Convert at most *INBYTESLEFT bytes from *INBUF according to the
   code conversion algorithm specified by CD and place up to
   *OUTBYTESLEFT bytes in buffer at *OUTBUF.  */
extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
		     size_t *__restrict __inbytesleft,
		     char **__restrict __outbuf,
		     size_t *__restrict __outbytesleft);

/* Free resources allocated for descriptor CD for code conversion.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern int iconv_close (iconv_t __cd);
#endif
