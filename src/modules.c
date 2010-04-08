#include <std2priv.h>

extern const struct std2_module std2_module_testmod;
extern const struct std2_module std2_module_fnmatch;
extern const struct std2_module std2_module_libc;
extern const struct std2_module std2_module_iconv;
extern const struct std2_module std2_module_glob;
extern const struct std2_module std2_module_posix;
extern const struct std2_module std2_module_inotify;
STD2_MODULE_DYN_STUB(readline)
STD2_MODULE_DYN_STUB(sdl)
STD2_MODULE_DYN_STUB(sdl_ttf)
STD2_MODULE_DYN_STUB(fltk)
STD2_MODULE_DYN_STUB(cuda)
STD2_MODULE_DYN_STUB(openssl)
STD2_MODULE_DYN_STUB(gl)
STD2_MODULE_DYN_STUB(gtk)

const struct std2_module* std2_modules[] = {
#ifdef STD2_TESTMOD
    &std2_module_testmod,
#endif
    &std2_module_fnmatch,
    &std2_module_libc,
#ifdef STD2_ICONV
    &std2_module_iconv,
#endif
#ifdef STD2_GLOB
    &std2_module_glob,
#endif
#ifdef STD2_POSIX
    &std2_module_posix,
#endif
#ifdef STD2_INOTIFY
    &std2_module_inotify,
#endif
#ifdef STD2_READLINE
    &std2_module_readline,
#endif
#ifdef STD2_SDL
    &std2_module_sdl,
#endif
#ifdef STD2_SDL_TTF
    &std2_module_sdl_ttf,
#endif
#ifdef STD2_FLTK
    &std2_module_fltk,
#endif
#ifdef STD2_CUDA
    &std2_module_cuda,
#endif
#ifdef STD2_OPENSSL
    &std2_module_openssl,
#endif
#ifdef STD2_GL
    &std2_module_gl,
#endif
#ifdef STD2_GTK
    &std2_module_gtk,
#endif
    0
};
