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
    (void)args;
    *(void**)ret = malloc(4);
}

static void class_set(void* ret, void* const* args)
{
    (void)ret;
    **(int**)args[0] = *(int*)args[1];
}

static void class_get(void* ret, void* const* args)
{
    *(int*)ret = **(int**)args[0];
}

static void crash(void* ret, void* const* args)
{
    (void)ret;
    (void)args;
    fprintf(stderr, "testmod.crash method called!\n");
    *(int*)0 = 0;
}

static void wrap_sleep(void* ret, void* const* args)
{
    (void)ret;
    int n = *(int*)args[0];
    fprintf(stderr, "testmod.sleep method called with %d\n", n);
    sleep(n);
}

static void sleep_mul(void* ret, void* const* args)
{
    int n = *(int*)args[0];
    fprintf(stderr, "testmod.sleep_mul method called with %d\n", n);
    sleep(n);
    *(int*)ret = *(int*)args[1] * *(int*)args[2];
}

static void mul(void* ret, void* const* args)
{
    *(int*)ret = *(int*)args[0] * *(int*)args[1];
}

static int waits[10];
static int wait_values[10];
static int wait_count;

static void wait_return(int id, void* ret, void* arg0, void* arg1)
{
    *(int*)ret = (int)arg0;
}

static void wait(void* ret, void* const* args)
{
    int id = std2_delay_return(wait_return, (void*)*(int*)args[0]);
    waits[wait_count++] = id;
}

static void wake(void* ret, void* const* args)
{
    if (wait_count)
    {
        wait_count--;
        std2_continue_return(waits[wait_count], 0, (void*)wait_values[wait_count]);
    }
}

static void wake_all(void* ret, void* const* args)
{
    while (wait_count)
        wake(0, 0);
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
    STD2_FUNC("sleep_mul", "i", "i i i", sleep_mul)
    STD2_FUNC("mul", "i", "i i", mul)
    STD2_FUNC("wait", "i", "i", wait)
    STD2_FUNC("wake", "", "", wake)
    STD2_FUNC("wake_all", "", "", wake_all)
STD2_END_FUNC_LIST()

STD2_MODULE(testmod, STD2_MODULE_BLOCKS | STD2_MODULE_UNSAFE)
