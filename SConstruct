# Run scons

env = Environment()
env.Append(CPPFLAGS=['-g', '-Wall', '-W'])
env.Append(CPPPATH=['include'])

src = ['src/std2.c']

env.Append(CPPDEFINES=[("STD2_FNMATCH", 1)])
src += [env.StaticObject('src/fnmatch.c')]

env.Append(CPPDEFINES=[("STD2_LIBC", 1)])
src += [env.StaticObject('src/libc.c')]

#env.Append(CPPDEFINES=[("STD2_SDL", 1)])
#env.Append(LIBS=['SDL'])
#src += [env.StaticObject('sdl.c', CPPPATH=['/usr/include/SDL'])]

#env.Append(CPPDEFINES=[("STD2_ICONV", 1)])
#env.Append(LIBS=['iconv'])
#src += [env.StaticObject('iconv.c')]

env.StaticLibrary('std2', src)

env.Program("test", ['src/test.cpp', 'libstd2.a'])
