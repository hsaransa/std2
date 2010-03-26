import sys, os, fnmatch
import gccxml

defines = []

def parse_defines(fn):
    for i in open(fn).read().splitlines():
        i = i.strip()
        if not i or i[0] != '#':
            continue
        i = i[1:].strip()
        s = i.split()
        if s[0] != 'define':
            continue
        defines.append(s[1])

matches = []

def cmd(c):
    c = c.split(":")

    if c[0] == 'prefix':
        gccxml.prefixes.append(c[1])

    if c[0] == 'match':
        matches.append(c[1])

    if c[0] == 'gen':
        matched_defines = []
        for i in defines:
            if matches:
                for m in matches:
                    if fnmatch.fnmatch(i, m):
                        break
                else:
                    continue
            matched_defines.append(i)

        print "#define %s_CONSTS \\" % header_prefix
        for i in matched_defines:
            print "STD2_CONST(\"%s\", INT, %s) \\" % (gccxml.mangle(i), i)
        print

        # TODO: can't know about duplicates :(
        #print "static void %s_to_string(void* ret, void* const* args) {"
        #print "    const char* s = 0;"
        #print "    switch (*(int*)ret) {"
        #for i in defines:
        #    print "        case %s:


if __name__ == '__main__':
    print "/* generated: %s */" % ' '.join(sys.argv[1:])
    header_prefix = sys.argv[1]
    parse_defines(sys.argv[2])
    for i in sys.argv[2:]:
        cmd(i)
