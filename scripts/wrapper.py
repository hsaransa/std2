import os, sys, fnmatch
import xml.parsers.expat

functions = []
by_id = {}

def start_element(name, attrs):
    global fun
    if attrs.has_key('id'):
        by_id[attrs['id']] = (name, attrs)

    if name == 'Function':
        fun = attrs
        fun['arguments'] = []
        functions.append(attrs)

    if name == 'Argument':
        fun['arguments'].append(attrs)

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
    generate()

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

    for i in functions:
        for k, v in spec['funs'].items():
            if fnmatch.fnmatch(i['name'], k):
                emit_fun(i, v)
                break


if __name__ == '__main__':
    parse_spec(sys.argv[1])
    process(sys.argv[2])
