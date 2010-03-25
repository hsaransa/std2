import os, sys, fnmatch
import xml.parsers.expat

structs = []
functions = []
enums = []
by_id = {}

def start_element(name, attrs):
    global fun, enum
    if attrs.has_key('id'):
        by_id[attrs['id']] = (name, attrs)

    if name == 'Function':
        fun = attrs
        fun['arguments'] = []
        functions.append(attrs)

    if name == 'Argument':
        fun['arguments'].append(attrs)

    if name == 'Enumeration':
        enum = attrs
        enum['values'] = []
        enums.append(attrs)

    if name == 'EnumValue':
        enum['values'].append(attrs)

def execute(cmd):
    if os.system(cmd):
        print "command failed '%s'" % cmd
        sys.exit(1)

spec = {}

def parse_spec(fn):
    spec.setdefault('funs', {})
    spec.setdefault('classes', {})
    spec.setdefault('consts', {})
    for i in open(fn).read().splitlines():
        i = i.split('#')[0].split()
        if not i:
            continue
        if i[0] == 'fun':
            cur = {}
            spec['funs'][i[1]] = cur
        elif i[0] == 'class':
            cur = {}
            spec['classes'][i[1]] = cur
        elif i[0] == 'const':
            cur = {}
            spec['consts'][i[1]] = cur
        elif i[0] == 'struct':
            cur['struct'] = i[1]
        elif i[0] == 'freefun':
            cur['freefun'] = i[1]
        else:
            raise RuntimeError('bad line', i)

def process(fn):
    execute("gccxml -fxml=out.xml %s" % fn)
    x = xml.parsers.expat.ParserCreate()
    x.StartElementHandler = start_element
    x.ParseFile(open("out.xml"))

def parse_type(i):
    t = by_id[i][0]
    a = by_id[i][1]
    if t == 'FundamentalType':
        if a['name'] == 'int':
            return 'int'
        elif a['name'] == 'unsigned int':
            return 'int'
        elif a['name'] == 'void':
            return 'void'
        else:
            print 'FUNDA', by_id[i]
    elif t == 'Typedef':
        return parse_type(a['type'])
    elif t == 'PointerType':
        p = parse_type(a['type'])
        return ['ptr', p]
    elif t == 'Struct':
        return a['name']
    else:
        print 'ERR', by_id[i]

def emit_fun(f, s):
    print "EMITTING %s" % f['name']
    print parse_type(f['returns'])
    for i, j in enumerate(f['arguments']):
        print i, parse_type(j['type'])

def generate():
    global functions

    for i in structs:
        pass

    for i in functions:
        for k, v in spec['funs'].items():
            if fnmatch.fnmatch(i['name'], k):
                emit_fun(i, v)
                break

prefixes = []

def remove_prefix(x):
    for p in prefixes:
        if x.startswith(p):
            return x[len(p):]
    return x

def cmd(c):
    global prefixes

    c = c.split(':')

    if c[0] == 'prefix':
        prefixes += [c[1]]

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
        print '#define ENUM_CONSTS \\'
        for i in match_enums:
            for j in i['values']:
                n = j['name']
                print 'STD2_CONST("%s", INT, %s) \\' % (remove_prefix(n), n)

        print
        print '#define ENUM_FUNCS \\'
        for i in match_enums:
            name = remove_prefix(i['name'])
            print 'STD2_FUNC("%s_to_string", "cs", "i", %s_to_string) \\' % (name, name)
        print

if __name__ == '__main__':
    print "/* generated!"
    print " * arguments: %s" % (sys.argv,)
    print " */"
#    parse_spec(sys.argv[1])
    process(sys.argv[1])
    for i in sys.argv[2:]:
        cmd(i)
