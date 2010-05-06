# Run scons

import os

modpath = ARGUMENTS.get('modpath', os.getcwd())

env = Environment()
env.Append(CPPFLAGS=['-g', '-Wall', '-W', '-Werror=implicit-function-declaration', '-Wno-unused'])
env.Append(CPPPATH=['include'])
env.Append(LINKFLAGS=['-rdynamic'])
env.Append(CPPDEFINES=[("STD2_MODULE_PATH", '\\"%s\\"' % modpath)])

src = ['src/std2.c', 'src/modules.c', 'src/buffer.c', 'src/delayed.c',
       'src/fork.c']

if True:
  env.Append(CPPDEFINES=[("STD2_TESTMOD", 1)])
  src += [env.StaticObject('modules/testmod.c')]

env.Append(CPPDEFINES=[("STD2_FNMATCH", 1)])
src += [env.StaticObject('modules/fnmatch.c')]

env.Append(CPPDEFINES=[("STD2_LIBC", 1)])
src += [env.StaticObject('modules/libc.c')]

env.Append(CPPDEFINES=[("STD2_ICONV", 1)])
src += [env.StaticObject('modules/iconv.c')]

env.Append(CPPDEFINES=[("STD2_GLOB", 1)])
src += [env.StaticObject('modules/glob.c')]

env.Append(CPPDEFINES=[("STD2_POSIX", 1)])
src += [env.StaticObject('modules/posix.c')]

env.Append(CPPDEFINES=[("STD2_INOTIFY", 1)])
src += [env.StaticObject('modules/inotify.c')]

env.Append(CPPDEFINES=[("STD2_EXECMEM", 1)])
src += [env.StaticObject('modules/execmem.c')]

env.Append(CPPDEFINES=[("STD2_READLINE", 1)])
env.SharedLibrary("std2_readline", ['modules/readline.c'], LIBS=['readline'])

#env.Append(CPPDEFINES=[("STD2_FLTK", 1)])
#env.SharedLibrary("std2_fltk", ['modules/fltk.cpp'], LIBS=['fltk', 'fltk_gl', 'fltk_images'])

env.Append(CPPDEFINES=[("STD2_SDL", 1)])
env2 = env.Clone()
env2.Append(CPPPATH=['/usr/include/SDL'])
env2.SharedLibrary("std2_sdl", ['modules/sdl.c'], LIBS=['SDL'])

if False:
  env.Append(CPPDEFINES=[("STD2_CUDA", 1)])
  env2 = env.Clone()
  env2.Append(CPPPATH=['/usr/local/cuda/include'])
  env2.SharedLibrary("std2_cuda", ['modules/cuda.c'], LIBS=['cuda'])

env.Append(CPPDEFINES=[("STD2_OPENSSL", 1)])
env2 = env.Clone()
env2.SharedLibrary("std2_openssl", ['modules/openssl.c'], LIBS=['ssl'])

env.Append(CPPDEFINES=[("STD2_SDL_TTF", 1)])
env2 = env.Clone()
env2.Append(CPPPATH=['/usr/include/SDL'])
env2.SharedLibrary("std2_sdl_ttf", ['modules/sdl_ttf.c'], LIBS=['SDL_ttf'])

env.Append(CPPDEFINES=[("STD2_GL", 1)])
env2 = env.Clone()
env2.SharedLibrary("std2_gl", ['modules/gl.c'], LIBS=['GL'])

env.Append(CPPDEFINES=[("STD2_GTK", 1)])
env2 = env.Clone()
env2.ParseConfig("pkg-config gtk+-2.0 --cflags --libs")
env2.SharedLibrary("std2_gtk", ['modules/gtk.c'])

env.Append(CPPDEFINES=[("STD2_XLIB", 1)])
env2 = env.Clone()
env2.SharedLibrary("std2_xlib", ['modules/xlib.c'])

#env.Append(CPPDEFINES=[("STD2_XCB", 1)])
#env2 = env.Clone()
#env2.ParseConfig("pkg-config xcb --cflags --libs")
#env2.ParseConfig("pkg-config xcb-keysyms --cflags --libs")
#env2.SharedLibrary("std2_xcb", ['modules/xcb.c'])

env.Append(CPPDEFINES=[("STD2_NCURSES", 1)])
env2 = env.Clone()
env2.SharedLibrary("std2_ncurses", ['modules/ncurses.c'], LIBS=['ncurses'])

env.StaticLibrary('std2', src)

env.Append(LIBS=['dl'])
env.Program("test", ['src/test.cpp', 'libstd2.a'])
