#include "std2priv.h"
#include <iconv.h>
#include <stdlib.h>

static void iconv_unrefer(void* arg)
{
    iconv_close((iconv_t)arg);
}

static void wrap_iconv_open(void* ret, void* const* args)
{
    iconv_t ic = iconv_open((char*)args[0], (char*)args[1]);
    *(void**)ret = (void*)ic;
}

#if 0
static void wrap_iconv(void* ret, void* const* args)
{
    struct std2_buffer* in  = args[1];
    struct std2_buffer* out = args[2];
    size_t r = iconv(args[0], in->data, in->size, out->data, out->size);
    *(int*)ret = r;
}
#endif

static void convert(void* ret, void* const* args)
{
    struct std2_buffer* in  = args[1];

    struct std2_buffer out;
    out.data = malloc(0);
    out.size = 0;

    char *in_ptr = in->data;
    size_t in_left     = in->size;
    while (in_left)
    {
        int extra = in_left + 128;
        out.data = realloc(out.data, out.size + extra);

        char* out_ptr = out.data + out.size;
        size_t out_left = extra;

        size_t ret = iconv(args[0], &in_ptr, &in_left, &out_ptr, &out_left);
        if (ret == (size_t)-1)
        {
            free(out.data);
            ((struct std2_buffer*)ret)->data = 0;
            return;
        }
        out.size += extra - out_left;
    }

    *(struct std2_buffer*)ret = out;
}

STD2_BEGIN_CLASS_LIST(iconv)
    STD2_CLASS("iconv", iconv_unrefer)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(iconv)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(iconv)
    STD2_FUNC("open",  "iconv", "cs cs",         wrap_iconv_open)
    //STD2_FUNC("iconv", "i",     "iconv mb mb",   wrap_iconv)
    STD2_FUNC("convert",  "mb", "iconv cb",      convert)
STD2_END_FUNC_LIST()

STD2_MODULE(iconv)


#if 0
/* Convert at most *INBYTESLEFT bytes from *INBUF according to the
   code conversion algorithm specified by CD and place up to
   *OUTBYTESLEFT bytes in buffer at *OUTBUF.  */
extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
		     size_t *__restrict __inbytesleft,
		     char **__restrict __outbuf,
		     size_t *__restrict __outbytesleft);
#endif
