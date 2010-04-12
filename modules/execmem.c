#include "std2priv.h"
#include <fnmatch.h>
#include <assert.h>
#include <sys/mman.h>
#include <stdlib.h>

struct mem
{
    void* ptr;
    int size;
};

static void free_mem(void* ptr)
{
    struct mem* m = ptr;
    munmap(m->ptr, m->size);
    free(m);
}

static void wrap_new(void* ret, void* const * args)
{
    int size = *(int*)args[0];
    void* ptr = mmap(0, size, PROT_EXEC | PROT_READ | PROT_WRITE,
                     MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);
    if (ptr == (void*)-1)
    {
        *(void**)ret = 0;
        return;
    }

    struct mem* m = malloc(sizeof(struct mem));
    *(void**)ret = m;

    m->size = size;
    m->ptr = ptr;
}

STD2_BEGIN_CLASS_LIST(execmem)
    STD2_CLASS("mem", free_mem)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(execmem)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(execmem)
    STD2_FUNC("new", "mem", "i", wrap_new)
STD2_END_FUNC_LIST()

STD2_MODULE(execmem, STD2_MODULE_UNSAFE)
