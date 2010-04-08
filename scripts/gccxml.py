import os, sys, fnmatch, time
import xml.parsers.expat

structs = []
functions = []
enums = []
structs = []
classes = []
methods = []
by_id = {}

def start_element(name, attrs):
    global fun, enum, clas

    if attrs.has_key('id'):
        by_id[attrs['id']] = (name, attrs)

    if name == 'FunctionType':
        fun = None

    if name == 'Function':
        fun = attrs
        fun['arguments'] = []
        functions.append(attrs)

    if name == 'Method':
        fun = attrs
        fun['arguments'] = []
        methods.append(attrs)

    if name == 'Constructor':
        fun = attrs
        fun['arguments'] = []
        clas['constructors'].append(attrs)

    if name == 'Argument':
        if fun:
            fun['arguments'].append(attrs)

    if name == 'Ellipsis':
        if fun:
            fun['arguments'].append({'type': 'ellipsis'})

    if name == 'Enumeration':
        enum = attrs
        enum['values'] = []
        enums.append(attrs)

    if name == 'EnumValue':
        enum['values'].append(attrs)

    if name == 'Struct':
        structs.append(attrs)

    if name == 'Class':
        clas = attrs
        clas['constructors'] = []
        classes.append(attrs)

def execute(cmd):
    if os.system(cmd):
        print "command failed '%s'" % cmd
        sys.exit(1)

def process(cc):
    global by_id
    by_id['ellipsis'] = (Ellipsis, {})

    execute("gccxml -fxml=out.xml %s" % ' '.join(cc))
    x = xml.parsers.expat.ParserCreate()
    x.StartElementHandler = start_element
    x.ParseFile(open("out.xml"))

def parse_type(i, prefer_int=True):
    t = by_id[i][0]
    a = by_id[i][1]
    if t == 'CvQualifiedType':
        return parse_type(a['type'], prefer_int)
    elif t == 'FundamentalType':
        if prefer_int:
            if a['name'] in ('int', 'unsigned int', 'char', 'unsigned char', \
                             'short int', 'short unsigned int', 'long int', \
                             'long unsigned int', 'bool', 'signed char'):
                return 'int'
        if a['name'] in ('int', 'unsigned int'):
            return 'int'
        elif a['name'] in ('long int', 'long unsigned int'):
            return 'int'
        elif a['name'] in ('short int', 'short unsigned int'):
            return 'short'
        elif a['name'] in ('char', 'unsigned char'):
            return 'char'
        elif a['name'] in ('long long int', 'long long unsigned int'):
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
        if a['name'] == 'va_list':
            return 'va_list'
        return parse_type(a['type'], prefer_int)
    elif t == 'PointerType':
        p = parse_type(a['type'], False)
        if p:
            return ['ptr', p]
    elif t == 'Enumeration':
        return 'int'
    elif t == 'Struct':
        return a['name']
    else:
        print >> sys.stderr, '// BAD TYPE', by_id[i]

def parse_field(i):
    assert by_id[i][0] == 'Field'
    a = by_id[i][1]
    return a['name'], parse_type(a['type'])

prefixes = []
matches = []
renames = []
classargs = []

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

def is_match(x):
    if x[0] == '.':
        return False
    if x[:2] == '__':
        return False
    if not matches:
        return True
    for m in matches:
        if fnmatch.fnmatch(x, m):
            return True
    return False

def cmd(c):
    global prefixes, matches, renames, header_prefix, classargs

    c = c.split(':')

    if c[0] == 'headerprefix':
        header_prefix = c[1]

    if c[0] == 'prefix':
        prefixes += [c[1]]

    if c[0] == 'match':
        matches += [c[1]]

    if c[0] == 'rename':
        renames += [[c[1], c[2]]]

    if c[0] == 'classarg':
        classargs += [[c[1], c[2]]]

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
            if is_match(i['name']):
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
            if is_match(i['name']):
                match_functions.append(i)

        emitted = []

        for i in match_functions:
            name = i['name']
            print '// FUNC', name

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
                print '//   RET', ret
                rets = ''
                ok = False

            args = []
            argss = ""
            for j in i['arguments']:
                a = parse_type(j['type'])
                if a == 'int':
                    argss += 'i '
                    args.append('int')
                elif a == 'float':
                    argss += 'f '
                    args.append('float')
                elif a == 'double':
                    argss += 'd '
                    args.append('double')
                elif type(a) == list and a[0] == 'ptr':
                    for i,j in classargs:
                        if a[1] == i:
                            break
                    else:
                        print '//   ARG', a
                        ok = False
                    argss += j + ' '
                    args.append('ptr')
                else:
                    print '//   ARG', a
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
                    elif a == 'ptr':
                        s.append('*(void**)args[%s]' % j)


                print "        %s(%s);" % (name, ', '.join(s))
                    
                print '}'

            if ok:
                emitted.append([name, rets, argss.strip()])


        print "#define %s_FUNCS \\" % header_prefix
        for i in emitted:
            print "STD2_FUNC(\"%s\", \"%s\", \"%s\", wrap_%s) \\" % (mangle(i[0]), i[1], i[2], i[0])
        print

    # classes

    if c[0] == 'classes':
        match_classes = []

        for i in classes:
            name = i['name']
            if name[:2] == '__': continue
            if matches:
                for m in matches:
                    if fnmatch.fnmatch(i['name'], m):
                        break
                else:
                    continue
            match_classes.append(i)

        for i in match_classes:
            print i['name']
            for j in i['members'].split():
                m = by_id[j]
                if m[0] != 'Method': continue
                m = by_id[j][1]
                if m['access'] != 'public': continue

                print '  ', m['name']
                print '    ', parse_type(m['returns'])
                for k in m['arguments']:
                    print '      ', parse_type(k['type'])

def output_header():    
    print "/* generated: %s" % time.asctime()
    print " * arguments: %s" % ' '.join(sys.argv)
    print " */"

out_funcs = []

def emit_func(mangled, ret, args, body):
    out_funcs.append([mangled, ret, args, body])

out_classes = []

def emit_class(clas, body):
    out_classes.append([clas, body])

def output():
    global out_funcs, out_classes

    output_header()

    for name, body in out_classes:
        if body:
            print 'static void gfree_%s(void* ptr) {' % name
            print '    ' + body.replace('\n', '\n    ')
            print '}'

    print '#define %s_CLASSES \\' % header_prefix
    for name, body in out_classes:
        if body:
            print 'STD2_CLASS("%s", gfree_%s) \\' % (name, name)
        else:
            print 'STD2_CLASS("%s", 0) \\' % (name)
    print

    for mangled, ret, args, body in out_funcs:
        print 'static void gwrap_%s(void* ret, void* const* args) {' % mangled
        print '    ' + body.replace('\n', '\n    ')
        print '}'

    print '#define %s_FUNCS \\' % header_prefix
    for mangled, ret, args, body in out_funcs:
        print 'STD2_FUNC("%s", "%s", "%s", gwrap_%s) \\' % (mangled, ret, args, mangled)
    print


if __name__ == '__main__':
    output_header()

    cc = []
    a = sys.argv[1:]
    while a[0] != '--':
        cc.append(a[0])
        a = a[1:]

    header_prefix = 'GENERATED'
    
    process(cc)
    for i in a[1:]:
        cmd(i)
