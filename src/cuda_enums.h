/* generated: Thu Mar 25 20:21:51 2010
 * arguments: scripts/gccxml.py /usr/include/cuda/cuda.h prefix:CU_ prefix:CUDA_ prefix:CU prefix:cuda enums
 */
static void ctx_flags_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_CTX_SCHED_AUTO:
        s = "CTX_SCHED_AUTO";
        break;
    case CU_CTX_SCHED_SPIN:
        s = "CTX_SCHED_SPIN";
        break;
    case CU_CTX_SCHED_YIELD:
        s = "CTX_SCHED_YIELD";
        break;
    case CU_CTX_SCHED_MASK:
        s = "CTX_SCHED_MASK";
        break;
    case CU_CTX_BLOCKING_SYNC:
        s = "CTX_BLOCKING_SYNC";
        break;
    case CU_CTX_MAP_HOST:
        s = "CTX_MAP_HOST";
        break;
    case CU_CTX_LMEM_RESIZE_TO_MAX:
        s = "CTX_LMEM_RESIZE_TO_MAX";
        break;
    case CU_CTX_FLAGS_MASK:
        s = "CTX_FLAGS_MASK";
        break;
    }
    *(const char**)ret = s;
}
static void filter_mode_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_TR_FILTER_MODE_POINT:
        s = "TR_FILTER_MODE_POINT";
        break;
    case CU_TR_FILTER_MODE_LINEAR:
        s = "TR_FILTER_MODE_LINEAR";
        break;
    }
    *(const char**)ret = s;
}
static void jit_target_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_TARGET_COMPUTE_10:
        s = "TARGET_COMPUTE_10";
        break;
    case CU_TARGET_COMPUTE_11:
        s = "TARGET_COMPUTE_11";
        break;
    case CU_TARGET_COMPUTE_12:
        s = "TARGET_COMPUTE_12";
        break;
    case CU_TARGET_COMPUTE_13:
        s = "TARGET_COMPUTE_13";
        break;
    }
    *(const char**)ret = s;
}
static void memorytype_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_MEMORYTYPE_HOST:
        s = "MEMORYTYPE_HOST";
        break;
    case CU_MEMORYTYPE_DEVICE:
        s = "MEMORYTYPE_DEVICE";
        break;
    case CU_MEMORYTYPE_ARRAY:
        s = "MEMORYTYPE_ARRAY";
        break;
    }
    *(const char**)ret = s;
}
static void computemode_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_COMPUTEMODE_DEFAULT:
        s = "COMPUTEMODE_DEFAULT";
        break;
    case CU_COMPUTEMODE_EXCLUSIVE:
        s = "COMPUTEMODE_EXCLUSIVE";
        break;
    case CU_COMPUTEMODE_PROHIBITED:
        s = "COMPUTEMODE_PROHIBITED";
        break;
    }
    *(const char**)ret = s;
}
static void jit_fallback_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_PREFER_PTX:
        s = "PREFER_PTX";
        break;
    case CU_PREFER_BINARY:
        s = "PREFER_BINARY";
        break;
    }
    *(const char**)ret = s;
}
static void event_flags_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_EVENT_DEFAULT:
        s = "EVENT_DEFAULT";
        break;
    case CU_EVENT_BLOCKING_SYNC:
        s = "EVENT_BLOCKING_SYNC";
        break;
    }
    *(const char**)ret = s;
}
static void jit_option_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_JIT_MAX_REGISTERS:
        s = "JIT_MAX_REGISTERS";
        break;
    case CU_JIT_THREADS_PER_BLOCK:
        s = "JIT_THREADS_PER_BLOCK";
        break;
    case CU_JIT_WALL_TIME:
        s = "JIT_WALL_TIME";
        break;
    case CU_JIT_INFO_LOG_BUFFER:
        s = "JIT_INFO_LOG_BUFFER";
        break;
    case CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES:
        s = "JIT_INFO_LOG_BUFFER_SIZE_BYTES";
        break;
    case CU_JIT_ERROR_LOG_BUFFER:
        s = "JIT_ERROR_LOG_BUFFER";
        break;
    case CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES:
        s = "JIT_ERROR_LOG_BUFFER_SIZE_BYTES";
        break;
    case CU_JIT_OPTIMIZATION_LEVEL:
        s = "JIT_OPTIMIZATION_LEVEL";
        break;
    case CU_JIT_TARGET_FROM_CUCONTEXT:
        s = "JIT_TARGET_FROM_CUCONTEXT";
        break;
    case CU_JIT_TARGET:
        s = "JIT_TARGET";
        break;
    case CU_JIT_FALLBACK_STRATEGY:
        s = "JIT_FALLBACK_STRATEGY";
        break;
    }
    *(const char**)ret = s;
}
static void function_attribute_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK:
        s = "FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK";
        break;
    case CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES:
        s = "FUNC_ATTRIBUTE_SHARED_SIZE_BYTES";
        break;
    case CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES:
        s = "FUNC_ATTRIBUTE_CONST_SIZE_BYTES";
        break;
    case CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES:
        s = "FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES";
        break;
    case CU_FUNC_ATTRIBUTE_NUM_REGS:
        s = "FUNC_ATTRIBUTE_NUM_REGS";
        break;
    case CU_FUNC_ATTRIBUTE_MAX:
        s = "FUNC_ATTRIBUTE_MAX";
        break;
    }
    *(const char**)ret = s;
}
static void Error_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CUDA_SUCCESS:
        s = "SUCCESS";
        break;
    case CUDA_ERROR_INVALID_VALUE:
        s = "ERROR_INVALID_VALUE";
        break;
    case CUDA_ERROR_OUT_OF_MEMORY:
        s = "ERROR_OUT_OF_MEMORY";
        break;
    case CUDA_ERROR_NOT_INITIALIZED:
        s = "ERROR_NOT_INITIALIZED";
        break;
    case CUDA_ERROR_DEINITIALIZED:
        s = "ERROR_DEINITIALIZED";
        break;
    case CUDA_ERROR_NO_DEVICE:
        s = "ERROR_NO_DEVICE";
        break;
    case CUDA_ERROR_INVALID_DEVICE:
        s = "ERROR_INVALID_DEVICE";
        break;
    case CUDA_ERROR_INVALID_IMAGE:
        s = "ERROR_INVALID_IMAGE";
        break;
    case CUDA_ERROR_INVALID_CONTEXT:
        s = "ERROR_INVALID_CONTEXT";
        break;
    case CUDA_ERROR_CONTEXT_ALREADY_CURRENT:
        s = "ERROR_CONTEXT_ALREADY_CURRENT";
        break;
    case CUDA_ERROR_MAP_FAILED:
        s = "ERROR_MAP_FAILED";
        break;
    case CUDA_ERROR_UNMAP_FAILED:
        s = "ERROR_UNMAP_FAILED";
        break;
    case CUDA_ERROR_ARRAY_IS_MAPPED:
        s = "ERROR_ARRAY_IS_MAPPED";
        break;
    case CUDA_ERROR_ALREADY_MAPPED:
        s = "ERROR_ALREADY_MAPPED";
        break;
    case CUDA_ERROR_NO_BINARY_FOR_GPU:
        s = "ERROR_NO_BINARY_FOR_GPU";
        break;
    case CUDA_ERROR_ALREADY_ACQUIRED:
        s = "ERROR_ALREADY_ACQUIRED";
        break;
    case CUDA_ERROR_NOT_MAPPED:
        s = "ERROR_NOT_MAPPED";
        break;
    case CUDA_ERROR_INVALID_SOURCE:
        s = "ERROR_INVALID_SOURCE";
        break;
    case CUDA_ERROR_FILE_NOT_FOUND:
        s = "ERROR_FILE_NOT_FOUND";
        break;
    case CUDA_ERROR_INVALID_HANDLE:
        s = "ERROR_INVALID_HANDLE";
        break;
    case CUDA_ERROR_NOT_FOUND:
        s = "ERROR_NOT_FOUND";
        break;
    case CUDA_ERROR_NOT_READY:
        s = "ERROR_NOT_READY";
        break;
    case CUDA_ERROR_LAUNCH_FAILED:
        s = "ERROR_LAUNCH_FAILED";
        break;
    case CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES:
        s = "ERROR_LAUNCH_OUT_OF_RESOURCES";
        break;
    case CUDA_ERROR_LAUNCH_TIMEOUT:
        s = "ERROR_LAUNCH_TIMEOUT";
        break;
    case CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING:
        s = "ERROR_LAUNCH_INCOMPATIBLE_TEXTURING";
        break;
    case CUDA_ERROR_UNKNOWN:
        s = "ERROR_UNKNOWN";
        break;
    }
    *(const char**)ret = s;
}
static void address_mode_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_TR_ADDRESS_MODE_WRAP:
        s = "TR_ADDRESS_MODE_WRAP";
        break;
    case CU_TR_ADDRESS_MODE_CLAMP:
        s = "TR_ADDRESS_MODE_CLAMP";
        break;
    case CU_TR_ADDRESS_MODE_MIRROR:
        s = "TR_ADDRESS_MODE_MIRROR";
        break;
    }
    *(const char**)ret = s;
}
static void device_attribute_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK:
        s = "DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X:
        s = "DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y:
        s = "DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z:
        s = "DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X:
        s = "DEVICE_ATTRIBUTE_MAX_GRID_DIM_X";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y:
        s = "DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z:
        s = "DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK:
        s = "DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK";
        break;
    case CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY:
        s = "DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY";
        break;
    case CU_DEVICE_ATTRIBUTE_WARP_SIZE:
        s = "DEVICE_ATTRIBUTE_WARP_SIZE";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_PITCH:
        s = "DEVICE_ATTRIBUTE_MAX_PITCH";
        break;
    case CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK:
        s = "DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK";
        break;
    case CU_DEVICE_ATTRIBUTE_CLOCK_RATE:
        s = "DEVICE_ATTRIBUTE_CLOCK_RATE";
        break;
    case CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT:
        s = "DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT";
        break;
    case CU_DEVICE_ATTRIBUTE_GPU_OVERLAP:
        s = "DEVICE_ATTRIBUTE_GPU_OVERLAP";
        break;
    case CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT:
        s = "DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT";
        break;
    case CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT:
        s = "DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT";
        break;
    case CU_DEVICE_ATTRIBUTE_INTEGRATED:
        s = "DEVICE_ATTRIBUTE_INTEGRATED";
        break;
    case CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY:
        s = "DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY";
        break;
    case CU_DEVICE_ATTRIBUTE_COMPUTE_MODE:
        s = "DEVICE_ATTRIBUTE_COMPUTE_MODE";
        break;
    }
    *(const char**)ret = s;
}
static void array_format_enum_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CU_AD_FORMAT_UNSIGNED_INT8:
        s = "AD_FORMAT_UNSIGNED_INT8";
        break;
    case CU_AD_FORMAT_UNSIGNED_INT16:
        s = "AD_FORMAT_UNSIGNED_INT16";
        break;
    case CU_AD_FORMAT_UNSIGNED_INT32:
        s = "AD_FORMAT_UNSIGNED_INT32";
        break;
    case CU_AD_FORMAT_SIGNED_INT8:
        s = "AD_FORMAT_SIGNED_INT8";
        break;
    case CU_AD_FORMAT_SIGNED_INT16:
        s = "AD_FORMAT_SIGNED_INT16";
        break;
    case CU_AD_FORMAT_SIGNED_INT32:
        s = "AD_FORMAT_SIGNED_INT32";
        break;
    case CU_AD_FORMAT_HALF:
        s = "AD_FORMAT_HALF";
        break;
    case CU_AD_FORMAT_FLOAT:
        s = "AD_FORMAT_FLOAT";
        break;
    }
    *(const char**)ret = s;
}

#define ENUM_CONSTS \
STD2_CONST("CTX_SCHED_AUTO", INT, CU_CTX_SCHED_AUTO) \
STD2_CONST("CTX_SCHED_SPIN", INT, CU_CTX_SCHED_SPIN) \
STD2_CONST("CTX_SCHED_YIELD", INT, CU_CTX_SCHED_YIELD) \
STD2_CONST("CTX_SCHED_MASK", INT, CU_CTX_SCHED_MASK) \
STD2_CONST("CTX_BLOCKING_SYNC", INT, CU_CTX_BLOCKING_SYNC) \
STD2_CONST("CTX_MAP_HOST", INT, CU_CTX_MAP_HOST) \
STD2_CONST("CTX_LMEM_RESIZE_TO_MAX", INT, CU_CTX_LMEM_RESIZE_TO_MAX) \
STD2_CONST("CTX_FLAGS_MASK", INT, CU_CTX_FLAGS_MASK) \
STD2_CONST("TR_FILTER_MODE_POINT", INT, CU_TR_FILTER_MODE_POINT) \
STD2_CONST("TR_FILTER_MODE_LINEAR", INT, CU_TR_FILTER_MODE_LINEAR) \
STD2_CONST("TARGET_COMPUTE_10", INT, CU_TARGET_COMPUTE_10) \
STD2_CONST("TARGET_COMPUTE_11", INT, CU_TARGET_COMPUTE_11) \
STD2_CONST("TARGET_COMPUTE_12", INT, CU_TARGET_COMPUTE_12) \
STD2_CONST("TARGET_COMPUTE_13", INT, CU_TARGET_COMPUTE_13) \
STD2_CONST("MEMORYTYPE_HOST", INT, CU_MEMORYTYPE_HOST) \
STD2_CONST("MEMORYTYPE_DEVICE", INT, CU_MEMORYTYPE_DEVICE) \
STD2_CONST("MEMORYTYPE_ARRAY", INT, CU_MEMORYTYPE_ARRAY) \
STD2_CONST("COMPUTEMODE_DEFAULT", INT, CU_COMPUTEMODE_DEFAULT) \
STD2_CONST("COMPUTEMODE_EXCLUSIVE", INT, CU_COMPUTEMODE_EXCLUSIVE) \
STD2_CONST("COMPUTEMODE_PROHIBITED", INT, CU_COMPUTEMODE_PROHIBITED) \
STD2_CONST("PREFER_PTX", INT, CU_PREFER_PTX) \
STD2_CONST("PREFER_BINARY", INT, CU_PREFER_BINARY) \
STD2_CONST("EVENT_DEFAULT", INT, CU_EVENT_DEFAULT) \
STD2_CONST("EVENT_BLOCKING_SYNC", INT, CU_EVENT_BLOCKING_SYNC) \
STD2_CONST("JIT_MAX_REGISTERS", INT, CU_JIT_MAX_REGISTERS) \
STD2_CONST("JIT_THREADS_PER_BLOCK", INT, CU_JIT_THREADS_PER_BLOCK) \
STD2_CONST("JIT_WALL_TIME", INT, CU_JIT_WALL_TIME) \
STD2_CONST("JIT_INFO_LOG_BUFFER", INT, CU_JIT_INFO_LOG_BUFFER) \
STD2_CONST("JIT_INFO_LOG_BUFFER_SIZE_BYTES", INT, CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES) \
STD2_CONST("JIT_ERROR_LOG_BUFFER", INT, CU_JIT_ERROR_LOG_BUFFER) \
STD2_CONST("JIT_ERROR_LOG_BUFFER_SIZE_BYTES", INT, CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES) \
STD2_CONST("JIT_OPTIMIZATION_LEVEL", INT, CU_JIT_OPTIMIZATION_LEVEL) \
STD2_CONST("JIT_TARGET_FROM_CUCONTEXT", INT, CU_JIT_TARGET_FROM_CUCONTEXT) \
STD2_CONST("JIT_TARGET", INT, CU_JIT_TARGET) \
STD2_CONST("JIT_FALLBACK_STRATEGY", INT, CU_JIT_FALLBACK_STRATEGY) \
STD2_CONST("FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK", INT, CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK) \
STD2_CONST("FUNC_ATTRIBUTE_SHARED_SIZE_BYTES", INT, CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES) \
STD2_CONST("FUNC_ATTRIBUTE_CONST_SIZE_BYTES", INT, CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES) \
STD2_CONST("FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES", INT, CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES) \
STD2_CONST("FUNC_ATTRIBUTE_NUM_REGS", INT, CU_FUNC_ATTRIBUTE_NUM_REGS) \
STD2_CONST("FUNC_ATTRIBUTE_MAX", INT, CU_FUNC_ATTRIBUTE_MAX) \
STD2_CONST("SUCCESS", INT, CUDA_SUCCESS) \
STD2_CONST("ERROR_INVALID_VALUE", INT, CUDA_ERROR_INVALID_VALUE) \
STD2_CONST("ERROR_OUT_OF_MEMORY", INT, CUDA_ERROR_OUT_OF_MEMORY) \
STD2_CONST("ERROR_NOT_INITIALIZED", INT, CUDA_ERROR_NOT_INITIALIZED) \
STD2_CONST("ERROR_DEINITIALIZED", INT, CUDA_ERROR_DEINITIALIZED) \
STD2_CONST("ERROR_NO_DEVICE", INT, CUDA_ERROR_NO_DEVICE) \
STD2_CONST("ERROR_INVALID_DEVICE", INT, CUDA_ERROR_INVALID_DEVICE) \
STD2_CONST("ERROR_INVALID_IMAGE", INT, CUDA_ERROR_INVALID_IMAGE) \
STD2_CONST("ERROR_INVALID_CONTEXT", INT, CUDA_ERROR_INVALID_CONTEXT) \
STD2_CONST("ERROR_CONTEXT_ALREADY_CURRENT", INT, CUDA_ERROR_CONTEXT_ALREADY_CURRENT) \
STD2_CONST("ERROR_MAP_FAILED", INT, CUDA_ERROR_MAP_FAILED) \
STD2_CONST("ERROR_UNMAP_FAILED", INT, CUDA_ERROR_UNMAP_FAILED) \
STD2_CONST("ERROR_ARRAY_IS_MAPPED", INT, CUDA_ERROR_ARRAY_IS_MAPPED) \
STD2_CONST("ERROR_ALREADY_MAPPED", INT, CUDA_ERROR_ALREADY_MAPPED) \
STD2_CONST("ERROR_NO_BINARY_FOR_GPU", INT, CUDA_ERROR_NO_BINARY_FOR_GPU) \
STD2_CONST("ERROR_ALREADY_ACQUIRED", INT, CUDA_ERROR_ALREADY_ACQUIRED) \
STD2_CONST("ERROR_NOT_MAPPED", INT, CUDA_ERROR_NOT_MAPPED) \
STD2_CONST("ERROR_INVALID_SOURCE", INT, CUDA_ERROR_INVALID_SOURCE) \
STD2_CONST("ERROR_FILE_NOT_FOUND", INT, CUDA_ERROR_FILE_NOT_FOUND) \
STD2_CONST("ERROR_INVALID_HANDLE", INT, CUDA_ERROR_INVALID_HANDLE) \
STD2_CONST("ERROR_NOT_FOUND", INT, CUDA_ERROR_NOT_FOUND) \
STD2_CONST("ERROR_NOT_READY", INT, CUDA_ERROR_NOT_READY) \
STD2_CONST("ERROR_LAUNCH_FAILED", INT, CUDA_ERROR_LAUNCH_FAILED) \
STD2_CONST("ERROR_LAUNCH_OUT_OF_RESOURCES", INT, CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES) \
STD2_CONST("ERROR_LAUNCH_TIMEOUT", INT, CUDA_ERROR_LAUNCH_TIMEOUT) \
STD2_CONST("ERROR_LAUNCH_INCOMPATIBLE_TEXTURING", INT, CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING) \
STD2_CONST("ERROR_UNKNOWN", INT, CUDA_ERROR_UNKNOWN) \
STD2_CONST("TR_ADDRESS_MODE_WRAP", INT, CU_TR_ADDRESS_MODE_WRAP) \
STD2_CONST("TR_ADDRESS_MODE_CLAMP", INT, CU_TR_ADDRESS_MODE_CLAMP) \
STD2_CONST("TR_ADDRESS_MODE_MIRROR", INT, CU_TR_ADDRESS_MODE_MIRROR) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK", INT, CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X", INT, CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y", INT, CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z", INT, CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_GRID_DIM_X", INT, CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y", INT, CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z", INT, CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK", INT, CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK) \
STD2_CONST("DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK", INT, CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK) \
STD2_CONST("DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY", INT, CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY) \
STD2_CONST("DEVICE_ATTRIBUTE_WARP_SIZE", INT, CU_DEVICE_ATTRIBUTE_WARP_SIZE) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_PITCH", INT, CU_DEVICE_ATTRIBUTE_MAX_PITCH) \
STD2_CONST("DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK", INT, CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK) \
STD2_CONST("DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK", INT, CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK) \
STD2_CONST("DEVICE_ATTRIBUTE_CLOCK_RATE", INT, CU_DEVICE_ATTRIBUTE_CLOCK_RATE) \
STD2_CONST("DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT", INT, CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT) \
STD2_CONST("DEVICE_ATTRIBUTE_GPU_OVERLAP", INT, CU_DEVICE_ATTRIBUTE_GPU_OVERLAP) \
STD2_CONST("DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT", INT, CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT) \
STD2_CONST("DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT", INT, CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT) \
STD2_CONST("DEVICE_ATTRIBUTE_INTEGRATED", INT, CU_DEVICE_ATTRIBUTE_INTEGRATED) \
STD2_CONST("DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY", INT, CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY) \
STD2_CONST("DEVICE_ATTRIBUTE_COMPUTE_MODE", INT, CU_DEVICE_ATTRIBUTE_COMPUTE_MODE) \
STD2_CONST("AD_FORMAT_UNSIGNED_INT8", INT, CU_AD_FORMAT_UNSIGNED_INT8) \
STD2_CONST("AD_FORMAT_UNSIGNED_INT16", INT, CU_AD_FORMAT_UNSIGNED_INT16) \
STD2_CONST("AD_FORMAT_UNSIGNED_INT32", INT, CU_AD_FORMAT_UNSIGNED_INT32) \
STD2_CONST("AD_FORMAT_SIGNED_INT8", INT, CU_AD_FORMAT_SIGNED_INT8) \
STD2_CONST("AD_FORMAT_SIGNED_INT16", INT, CU_AD_FORMAT_SIGNED_INT16) \
STD2_CONST("AD_FORMAT_SIGNED_INT32", INT, CU_AD_FORMAT_SIGNED_INT32) \
STD2_CONST("AD_FORMAT_HALF", INT, CU_AD_FORMAT_HALF) \
STD2_CONST("AD_FORMAT_FLOAT", INT, CU_AD_FORMAT_FLOAT) \

#define ENUM_FUNCS \
STD2_FUNC("ctx_flags_enum_to_string", "cs", "i", ctx_flags_enum_to_string) \
STD2_FUNC("filter_mode_enum_to_string", "cs", "i", filter_mode_enum_to_string) \
STD2_FUNC("jit_target_enum_to_string", "cs", "i", jit_target_enum_to_string) \
STD2_FUNC("memorytype_enum_to_string", "cs", "i", memorytype_enum_to_string) \
STD2_FUNC("computemode_enum_to_string", "cs", "i", computemode_enum_to_string) \
STD2_FUNC("jit_fallback_enum_to_string", "cs", "i", jit_fallback_enum_to_string) \
STD2_FUNC("event_flags_enum_to_string", "cs", "i", event_flags_enum_to_string) \
STD2_FUNC("jit_option_enum_to_string", "cs", "i", jit_option_enum_to_string) \
STD2_FUNC("function_attribute_enum_to_string", "cs", "i", function_attribute_enum_to_string) \
STD2_FUNC("Error_enum_to_string", "cs", "i", Error_enum_to_string) \
STD2_FUNC("address_mode_enum_to_string", "cs", "i", address_mode_enum_to_string) \
STD2_FUNC("device_attribute_enum_to_string", "cs", "i", device_attribute_enum_to_string) \
STD2_FUNC("array_format_enum_to_string", "cs", "i", array_format_enum_to_string) \

