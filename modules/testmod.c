#include <std2priv.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static void free_class(void* ptr)
{
    free(ptr);
}

static void new_class(void* ret, void* const* args)
{
    *(void**)ret = malloc(4);
}

static void class_set(void* ret, void* const* args)
{
    **(int**)args[0] = *(int*)args[1];
}

static void class_get(void* ret, void* const* args)
{
    *(int**)ret = **(int**)args[0];
}

static void crash(void* ret, void* const* args)
{
    fprintf(stderr, "testmod.crash method called!\n");
    *(int*)0 = 0;
}

static void wrap_sleep(void* ret, void* const* args)
{
    int n = *(int*)args[0];
    fprintf(stderr, "testmod.sleep method called with %d\n", n);
    sleep(n);
}

static void mul(void* ret, void* const* args)
{
    *(int*)ret = *(int*)args[0] * *(int*)args[1];
}

STD2_BEGIN_CLASS_LIST(testmod)
    STD2_CLASS("class", free_class)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(testmod)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(testmod)
    STD2_FUNC("new_class", "class", "", new_class)
    STD2_FUNC("class_set", "", "class i", class_set)
    STD2_FUNC("class_get", "i", "class", class_get)
    STD2_FUNC("crash", "", "", crash)
    STD2_FUNC("sleep", "", "i", wrap_sleep)
    STD2_FUNC("mul", "i", "i i", mul)
STD2_END_FUNC_LIST()

STD2_MODULE(testmod, STD2_MODULE_BLOCKS | STD2_MODULE_UNSAFE)
