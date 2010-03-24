# Run scons

env = Environment()
env.Append(CPPFLAGS=['-g', '-Wall', '-W'])
env.Append(CPPPATH=['include'])
env.Append(LINKFLAGS=['-rdynamic'])

src = ['src/std2.c']

env.Append(CPPDEFINES=[("STD2_FNMATCH", 1)])
src += [env.StaticObject('src/fnmatch.c')]

env.Append(CPPDEFINES=[("STD2_LIBC", 1)])
src += [env.StaticObject('src/libc.c')]

env.Append(CPPDEFINES=[("STD2_ICONV", 1)])
src += [env.StaticObject('src/iconv.c')]

env.Append(CPPDEFINES=[("STD2_GLOB", 1)])
src += [env.StaticObject('src/glob.c')]

env.Append(CPPDEFINES=[("STD2_POSIX", 1)])
src += [env.StaticObject('src/posix.c')]

env.Append(CPPDEFINES=[("STD2_INOTIFY", 1)])
src += [env.StaticObject('src/inotify.c')]

env.Append(CPPDEFINES=[("STD2_READLINE", 1)])
env.SharedLibrary("std2_readline", ['src/readline.c'], LIBS=['readline'])

#env.Append(CPPDEFINES=[("STD2_FLTK", 1)])
#env.SharedLibrary("std2_fltk", ['src/fltk.cpp'], LIBS=['fltk', 'fltk_gl', 'fltk_images'])

env.Append(CPPDEFINES=[("STD2_SDL", 1)])
env2 = env.Clone()
env2.Append(CPPPATH=['/usr/include/SDL'])
env2.SharedLibrary("std2_sdl", ['src/sdl.c'], LIBS=['SDL'])

env.StaticLibrary('std2', src)

env.Append(LIBS=['dl'])
env.Program("test", ['src/test.cpp', 'libstd2.a'])
