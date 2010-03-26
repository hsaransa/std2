#include <std2priv.h>
#include <assert.h>
#include <cuda.h>
#include "cuda_enums.h"

static void wrap_cuInit(void* ret, void* const* args)
{
    *(int*)ret = cuInit(*(int*)args[0]);
}

#if 0
static void wrap_cuDeviceGet(void* ret, void* const* args)
{
    CUdevice* dev = malloc(sizeof(CUdevice))
    *(int*)ret = cuDeviceGet(dev, *(int*)args[0]);
}
#endif

STD2_BEGIN_CLASS_LIST(cuda)
    STD2_CLASS("device", free)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(cuda)
    ENUM_CONSTS
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(cuda)
    STD2_FUNC("Init", "i", "i", wrap_cuInit)
//    STD2_FUNC("DeviceGet", "device", "i", wrap_cuDeviceGet)
    ENUM_FUNCS
STD2_END_FUNC_LIST()

STD2_MODULE(cuda, STD2_MODULE_UNSAFE)
