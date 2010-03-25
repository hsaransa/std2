#include <std2priv.h>
#include <openssl/evp.h>

static void free_EVP_MD_CTX(void* ptr)
{
    EVP_MD_CTX_cleanup(ptr);
    free(ptr);
}

static void wrap_OpenSSL_add_all_digests(void* ret, void* const* args)
{
    OpenSSL_add_all_digests();
}

static void wrap_EVP_MD_CTX_init(void* ret, void* const* args)
{
    *(void**)ret = malloc(sizeof(EVP_MD_CTX));
    EVP_MD_CTX_init(*(void**)ret);
}

static void wrap_EVP_DigestInit(void* ret, void* const* args)
{
    *(int*)ret = EVP_DigestInit_ex(args[0], args[1], 0);
}

static void wrap_EVP_DigestUpdate(void* ret, void* const* args)
{
    *(int*)ret = EVP_DigestUpdate(args[0], args[1], *(int*)args[2]);
}

static void wrap_EVP_DigestFinal(void* ret, void* const* args)
{
    struct std2_buffer buf;
    buf.data = malloc(EVP_MAX_MD_SIZE);
    *(int*)ret = EVP_DigestFinal_ex(args[0], buf.data, &buf.size);
    buf.data = realloc(buf.data, buf.size);
    *(struct std2_buffer*)ret = buf;
}

static void wrap_EVP_get_digestbyname(void* ret, void* const* args)
{
    *(const void**)ret = EVP_get_digestbyname(args[0]);
}

STD2_BEGIN_CLASS_LIST(openssl)
    STD2_CLASS("EVP_MD_CTX", free_EVP_MD_CTX)
    STD2_CLASS("EVP_MD",     0)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(openssl)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(openssl)
    STD2_FUNC("OpenSSL_add_all_digests", "", "", wrap_OpenSSL_add_all_digests)
    STD2_FUNC("EVP_MD_CTX_init", "EVP_MD_CTX", "", wrap_EVP_MD_CTX_init)
    STD2_FUNC("EVP_get_digestbyname", "EVP_MD", "cs", wrap_EVP_get_digestbyname)
    STD2_FUNC("EVP_DigestInit", "i", "EVP_MD_CTX EVP_MD", wrap_EVP_DigestInit)
    STD2_FUNC("EVP_DigestUpdate", "i", "EVP_MD_CTX buf", wrap_EVP_DigestUpdate)
    STD2_FUNC("EVP_DigestFinal", "mb", "EVP_MD_CTX", wrap_EVP_DigestFinal)
STD2_END_FUNC_LIST()

STD2_MODULE(openssl)
