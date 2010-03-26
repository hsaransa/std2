import os, sys, fnmatch, time
import xml.parsers.expat

structs = []
functions = []
enums = []
structs = []
by_id = {}

def start_element(name, attrs):
    global fun, enum
    if attrs.has_key('id'):
        by_id[attrs['id']] = (name, attrs)

    if name == 'FunctionType':
        fun = None

    if name == 'Function':
        fun = attrs
        fun['arguments'] = []
        functions.append(attrs)

    if name == 'Argument':
        if fun:
            fun['arguments'].append(attrs)

    if name == 'Enumeration':
        enum = attrs
        enum['values'] = []
        enums.append(attrs)

    if name == 'EnumValue':
        enum['values'].append(attrs)

    if name == 'Struct':
        structs.append(attrs)

def execute(cmd):
    if os.system(cmd):
        print "command failed '%s'" % cmd
        sys.exit(1)

def process(fn):
    execute("gccxml -fxml=out.xml %s" % fn)
    x = xml.parsers.expat.ParserCreate()
    x.StartElementHandler = start_element
    x.ParseFile(open("out.xml"))

def parse_type(i):
    t = by_id[i][0]
    a = by_id[i][1]
    if t == 'CvQualifiedType':
        return parse_type(a['type'])
    elif t == 'FundamentalType':
        if a['name'] in ('int', 'unsigned int', 'char', 'unsigned char', \
                         'short int', 'short unsigned int', 'long int', \
                         'long unsigned int', 'bool', 'signed char'):
            return 'int'
        if a['name'] in ('long long int', 'long long unsigned int'):
            return 'long'
        elif a['name'] == 'float':
            return 'float'
        elif a['name'] == 'double':
            return 'double'
        elif a['name'] == 'void':
            return 'void'
        else:
            print 'UNKNOWN FUNDAMENTAL', by_id[i]
    elif t == 'Typedef':
        return parse_type(a['type'])
    elif t == 'PointerType':
        p = parse_type(a['type'])
        return ['ptr', p]
    elif t == 'Enumeration':
        return 'int'
    elif t == 'Struct':
        return a['name']
    else:
        print 'ERR', by_id[i]

def parse_field(i):
    assert by_id[i][0] == 'Field'
    a = by_id[i][1]
    return a['name'], parse_type(a['type'])

def emit_fun(f, s):
    print "EMITTING %s" % f['name']
    print parse_type(f['returns'])
    for i, j in enumerate(f['arguments']):
        print i, parse_type(j['type'])

prefixes = []
matches = []
renames = []

def remove_prefix(x):
    for p in prefixes:
        if x.startswith(p):
            return x[len(p):]
    return x

def mangle(x):
    x = remove_prefix(x)
    for a, b in renames:
        if a == x:
            return b
    return x

def cmd(c):
    global prefixes, matches, renames 

    c = c.split(':')

    if c[0] == 'prefix':
        prefixes += [c[1]]

    if c[0] == 'match':
        matches += [c[1]]

    if c[0] == 'rename':
        renames += [[c[1], c[2]]]

    # Structs

    if c[0] == 'structs':
        match_structs = []

        for i in structs:
            if not 'name' in i: continue
            name = i['name']
            if name[0] == '.': continue
            if name[:2] == '__': continue
            if not 'members' in i: continue
            if matches:
                for m in matches:
                    if fnmatch.fnmatch(i['name'], m):
                        break
                else:
                    continue
            match_structs.append(i)

        accessors = []

        for i in match_structs:
            name = i['name']
            for m in i['members'].split():
                # Skip structs inside structs
                if by_id[m][0] == 'Struct':
                    continue

                n, t = parse_field(m)
                if t == 'int':
                    print 'STD2_STRUCT_INT_SETTER(%s, %s, %s)' % (mangle(name), name, n)
                    print 'STD2_STRUCT_INT_GETTER(%s, %s, %s)' % (mangle(name), name, n)
                    accessors.append(("%s_set_%s" % (mangle(name), n), "", "%s i" % mangle(name), "%s_set_%s" % (mangle(name), n)))
                    accessors.append(("%s_get_%s" % (mangle(name), n), "i", mangle(name), "%s_get_%s" % (mangle(name), n)))

        print '#define %s_CONSTS' % header_prefix
        print '#define %s_FUNCS \\' % header_prefix
        for i in accessors:
            print "STD2_FUNC(\"%s\", \"%s\", \"%s\", %s) \\" % i
        print


        #for i in match_structs:

    # Enums

    if c[0] == 'enums':
        match_enums = []

        for i in enums:
            name = i['name']
            if name[0] == '.': continue
            if name[:2] == '__': continue
            match_enums.append(i)

        for i in match_enums:
            name = remove_prefix(i['name'])
            print 'static void %s_to_string(void* ret, void* const* args) {' % name
            print '    const char* s = 0;'
            print '    switch (*(int*)args[0]) {'
            visited = set()
            for j in i['values']:
                n = j['name']
                v = j['init']
                if not v in visited:
                    visited.add(v)
                    print '    case %s:' % n
                    print '        s = "%s";' % remove_prefix(n)
                    print '        break;'
            print '    }'
            print '    *(const char**)ret = s;'
            print '}'

        print
        print '#define %s_CONSTS \\' % header_prefix
        for i in match_enums:
            for j in i['values']:
                n = j['name']
                print 'STD2_CONST("%s", INT, %s) \\' % (remove_prefix(n), n)

        print
        print '#define %s_FUNCS \\' % header_prefix
        for i in match_enums:
            name = remove_prefix(i['name'])
            print 'STD2_FUNC("%s_to_string", "cs", "i", %s_to_string) \\' % (name, name)
        print

    #
    # trivial functions
    #
        
    if c[0] == 'trivialfunctions':
        match_functions = []

        for i in functions:
            name = i['name']
            if name[:2] == '__': continue
            if matches:
                for m in matches:
                    if fnmatch.fnmatch(i['name'], m):
                        break
                else:
                    continue
            match_functions.append(i)

        emitted = []

        for i in match_functions:
            name = i['name']

            ok = True
            ret = parse_type(i['returns'])
            if ret == 'int':
                rets = 'i'
            elif ret == 'float':
                rets = 'f'
            elif ret == 'double':
                rets = 'd'
            elif ret == 'void':
                rets = ''
            else:
                rets = ''
                ok = False

            args = []
            argss = ""
            for j in i['arguments']:
                a = parse_type(j['type'])
                args.append(a)
                if a == 'int':
                    argss += 'i '
                elif a == 'float':
                    argss += 'f '
                elif a == 'double':
                    argss += 'd '
                else:
                    ok = False
            
            if ok:
                print 'static void wrap_%s(void* ret, void* const* args) {' % name

                if not args:
                    print '    (void)args;'

                if ret == 'int':
                    print '    *(int*)ret ='
                elif ret == 'float':
                    print '    *(float*)ret ='
                elif ret == 'double':
                    print '    *(double*)ret ='
                else:
                    print '    (void)ret;'

                s = []
                for j, a in enumerate(args):
                    if a == 'int':
                        s.append('*(int*)args[%s]' % j)
                    elif a == 'float':
                        s.append('*(float*)args[%s]' % j)
                    elif a == 'double':
                        s.append('*(double*)args[%s]' % j)


                print "        %s(%s);" % (name, ', '.join(s))
                    
                print '}'

            if ok:
                emitted.append([name, rets, argss.strip()])


        print "#define %s_FUNCS \\" % header_prefix
        for i in emitted:
            print "STD2_FUNC(\"%s\", \"%s\", \"%s\", wrap_%s) \\" % (mangle(i[0]), i[1], i[2], i[0])
        print

if __name__ == '__main__':
    print "/* generated: %s" % time.asctime()
    print " * arguments: %s" % ' '.join(sys.argv)
    print " */"
    header_prefix = sys.argv[1]
    process(sys.argv[2])
    for i in sys.argv[3:]:
        cmd(i)
