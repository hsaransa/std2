import os, sys, fnmatch, time, re
import xml.parsers.expat

consts = []
classes = []
funcs = []
int_types = ['CARD8', 'INT16', 'CARD16', 'CARD32', 'BYTE', 'BOOL', 'INT32', 'INT8']
ignore_types = []
struct_types = []

def mangle(n):
    if n.isupper():
        return n.lower()
    s = n[0].lower() + ''.join(['_' + i.lower() if i.isupper() or i.isdigit() else i for i in n[1:]])
    s = re.sub(r'_(.)_', r'_\1', s)
    return s

def add_class(a, b):
    for c, d in classes:
        if a == c:
            break
    else:
        classes.append((a, b))

dada = {}
st = []

def start_element(name, attrs):
    global current, struct_name, reply_name, request_name, request_fields, request_failed
    global cookie_name, event_name, event_number

    dada.setdefault(name, [])
    dada[name].append(attrs)

    if name == 'struct':
        current = 'struct'
        struct_name = mangle(attrs['name'])
    if name == 'request':
        current = 'request'
        request_name = mangle(attrs['name'])
        request_fields = []
        request_failed = False
        cookie_name = 'void'
    if name == 'reply':
        current = 'reply'
        reply_name = request_name
        cookie_name = reply_name
    if name == 'event':
        current = 'event'
        event_name = mangle(attrs['name'])
        event_number = attrs['number']
    if name == 'error':
        current = 'error'

def end_element(name):
    global dada, classes, consts, funcs, struct, struct_name, xids, current, cdata
    global request_fields, request_failed, cookie_name, event_name, event_number
    attrs = dada[name].pop()

    if name == 'struct':
        struct_types.append(attrs['name'])
        if struct_name == 'setup':
            classes.append((struct_name, 'free_setup'))
        else:
            classes.append((struct_name, 'free'))

    if name == 'xidtype':
        int_types.append(attrs['name'])
        #classes.append((attrs['name'].lower(), None))

    if name == 'xidunion':
        int_types.append(attrs['name'])

    if name == 'union':
        ignore_types.append(attrs['name'])

    if name == 'typedef':
        if attrs['oldname'] in int_types:
            int_types.append(attrs['newname'])

    if name == 'field' and current in ('struct', 'event'):
        f = attrs['name']
        t = attrs['type']
        if t in ignore_types or t in struct_types:
            return

        if current == 'struct':
            n = struct_name
        else:
            n = event_name + '_event'

        ff = f
        ff = '_class' if ff == 'class' else ff
        ff = '_new' if ff == 'new' else ff

        print 'static void %s_get_%s(void* ret, void* const* args) {' % (n, f)
        if t in int_types:
            print '    *(int*)ret = ((xcb_%s_t*)args[0])->%s;' % (n, ff)
        else:
            raise RuntimeError("bad struct field %s" % t)
        print '}'
        funcs.append(('%s_get_%s' % (n, f), 'i', n))

        print 'static void %s_set_%s(void* ret, void* const* args) {' % (n, f)
        print '    (void)ret;'
        if t in int_types:
            print '    ((xcb_%s_t*)args[0])->%s = *(int*)args[1];' % (n, ff)
        else:
            raise RuntimeError("bad struct field %s" % t)
        print '}'
        funcs.append(('%s_set_%s' % (n, f), '', n + " i"))

    if name == 'field' and current == 'request':
        f = attrs['name']
        t = attrs['type']
        if t in ignore_types or t in struct_types:
            raise RuntimeError("bad field %s" % t)

        request_fields.append(t)

    if name == 'list' and current == 'request':
        if attrs['type'] == 'char':
            if request_name == 'set_font_path':
                request_fields.append('INT32')
            request_fields.append('cb')
        else:
            request_failed = True
            #raise RuntimeError("bad field %s" % attrs['type'])

    if name == 'valueparam' and current == 'request':
        if attrs['value-mask-type'] == 'CARD32':
            request_fields.append('INT32')
            request_fields.append('valueparam32')
        else:
            request_failed = True

    if name == 'list' and (current == 'struct' or current == 'reply'):
        if current == 'struct':
            nn = struct_name
            nn2 = struct_name
        else:
            nn = reply_name + '_reply'
            nn2 = reply_name
        n = attrs['name']
        t = attrs['type']
        print 'static void %s_get_%s(void* ret, void* const* args) {' % (nn2, n)
        print '    int i = *(int*)args[1];'
        print '    xcb_%s_t* s = args[0];' % nn
        print '    int size = xcb_%s_%s_length(s);' % (nn2, n)
        print '    if (i < 0 || i >= size) {'
        print '        *(void**)ret = 0;'
        print '        return;'
        print '    }'

        if t in int_types:
            print '    *(int*)ret = xcb_%s_%s(s)[i];' % (nn2, n)
            ret = 'i'
        elif t == 'char':
            print '    *(char**)ret = strndup(xcb_%s_%s(s), size);' % (nn2, n)
            ret = 'ms'
        else:
            if t == 'void':
                print '    *(void**)ret = 0; // TODO: fix this'
            else:
                print '    *(void**)ret = copy_struct(&xcb_%s_%s_iterator(s).data[i]);' % (nn2, n)
            ret = t.lower()
        print '}'
        funcs.append(('%s_get_%s' % (nn2, n), ret, '%s i' % nn))

        print 'static void %s_%s_length(void* ret, void* const* args) {' % (nn2, n)
        print '    xcb_%s_t* s = args[0];' % nn
        print '    *(int*)ret = xcb_%s_%s_length(s);' % (nn2, n)
        print '}'
        funcs.append(('%s_%s_length' % (nn2, n), 'i', '%s' % nn))

    if name == 'request' and not request_failed:
        add_class(cookie_name + '_cookie', None)
        print 'static void %s(void* ret, void* const* args) {' % request_name
        print '    xcb_%s_cookie_t c =' % cookie_name
        print '        xcb_%s(CONN(args[0])' % request_name,
        args = 'connection '
        for i, f in enumerate(request_fields):
            print ','
            print '            ',
            if f in int_types:
                print '*(int*)args[%d] /* %s */' % (i+1, f),
                args += 'i '
            elif f == 'valueparam32':
                print '(uint32_t*)args[%d]' % (i+1),
                args += 'valueparam32 '
            elif f == 'cb':
                print '((struct std2_buffer*)args[%d])->data' % (i+1),
                args += 'cb '
            else:
                print '%s args[%d]' % (f, i+1),
        print
        print '        );'
        print '    *(void**)ret = (void*)c.sequence;'
        print '}'
        funcs.append((request_name, cookie_name + '_cookie', args.strip()))

    if name == 'event':
        print 'static void to_%s_event(void* ret, void* const* args) {' % event_name
        print '    xcb_generic_event_t* ev = args[0];'
        print '    if ((ev->response_type & ~0x80) != XCB_%s) {' % event_name.upper()
        print '        *(void**)ret = 0;'
        print '        return;'
        print '    }'
        print '    *(void**)ret = copy_struct((xcb_%s_event_t*)ev);' % event_name
        print '}'
        add_class(event_name + '_event', 'free')
        funcs.append(("to_" + event_name + '_event', event_name + '_event', "generic_event"))

def cdata_element(c):
    global cdata
    cdata = c

def output_macros():
    print '#define XCB_CLASSES \\'
    for a, b, in classes:
        if b:
            print 'STD2_CLASS("%s", %s) \\' % (a, b)
        else:
            print 'STD2_CLASS("%s", 0) \\' % a
    print

    print '#define XCB_FUNCS \\'
    for a, b, c in funcs:
        print 'STD2_FUNC("%s", "%s", "%s", %s) \\' % (a, b, c, a)
    print

def process(fn):
    x = xml.parsers.expat.ParserCreate()
    x.StartElementHandler = start_element
    x.EndElementHandler = end_element
    x.CharacterDataHandler = cdata_element
    x.ParseFile(open(fn))

if __name__ == '__main__':
    process(sys.argv[1])
    output_macros()
