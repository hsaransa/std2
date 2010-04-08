import sys, gccxml

def add_class(a, b):
    for i, j in gccxml.out_classes:
        if a == i:
            return
    gccxml.emit_class(a, None)
        

def process_funcs():
    for i in gccxml.functions:
        name = i['name']
        ok = True

        if not name.startswith('gtk_'):
            continue
        name = name[4:]

        body = ''
        
        if not i['arguments']:
            body += '(void)args;\n'

        rt = gccxml.parse_type(i['returns'])
        if rt == 'void':
            body += '(void)ret;\n'
            ret = ''
        elif rt == 'int':
            body += '*(int*)ret =\n'
            ret = 'i'
        elif rt == 'float':
            body += '*(float*)ret =\n'
            ret = 'f'
        elif rt == 'double':
            body += '*(double*)ret =\n'
            ret = 'd'
        elif type(rt) == list and rt[0] == 'ptr':
            if str(rt[1]).startswith('_Gtk'):
                body += '*(%s**)ret =\n' % rt[1][1:]
                ret = rt[1][4:]
                add_class(rt[1][4:], rt[1][1:])
            elif str(rt[1]) == 'char':
                body += '*(const char**)ret =\n'
                ret = 'cs'
            else:
                ok = False
        else:
            ok = False

        body += '%s(' % i['name']

        args = ''
        for n, j in enumerate(i['arguments']):
            if n != 0:
                body += ','
            body += '\n'
            at = gccxml.parse_type(j['type'])
            if at == 'int':
                body += '  *(int*)args[%d]' % n
                args += 'i '
            elif at == 'float':
                body += '  *(float*)args[%d]' % n
                args += 'f '
            elif at == 'double':
                body += '  *(double*)args[%d]' % n
                args += 'd '
            elif type(at) == list and at[0] == 'ptr':
                if str(at[1]).startswith('_Gtk'):
                    body += '  (%s*)args[%d]' % (at[1][1:], n)
                    add_class(at[1][4:], at[1][1:])
                    args += at[1][4:] + ' '
                elif str(at[1]) == 'char':
                    body += '  (const char*)args[%d]' % n
                    args += 'cs '
                else:
                    ok = False
            else:
                ok = False
        body += ');'

        if ok:
            gccxml.emit_func(name, ret, args.strip(), body)

if __name__ == '__main__':
    gccxml.header_prefix = 'FUNCS'
    gccxml.process(sys.argv[1:])
    process_funcs()
    gccxml.output()
