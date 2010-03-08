#include "std2.h"
#include <iostream>

static void print_type(struct std2_param& p)
{
    switch (p.type)
    {
    case STD2_VOID: std::cerr << "void"; break;
    case STD2_INT32: std::cerr << "int32"; break;
    case STD2_INT64: std::cerr << "int64"; break;
    case STD2_FLOAT: std::cerr << "float"; break;
    case STD2_DOUBLE: std::cerr << "double"; break;
    case STD2_C_STRING: std::cerr << "c_string"; break;
    case STD2_BUF_PTR: std::cerr << "buf_ptr"; break;
    case STD2_BUF_SIZE: std::cerr << "buf_size"; break;
    case STD2_INSTANCE: std::cerr << "instance " << p.module_id << "/" << p.class_id; break;
    }
}

int main()
{
    std2_init();

    int n = 0;
    std2_list_modules(0, &n);

    const char** names = new const char* [n];
    std2_list_modules(names, &n);

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            std::cerr << '\n';
        std::cerr << "module " << names[i] << '\n';

        for (int j = 0; j < 3; j++)
        {
            int m = std2_find_module(names[i]);

            void (*list_func)(int, const char** names, int* c);
            if (j == 0) {
                std::cerr << "  classes\n";
                list_func = std2_list_classes;
            }
            else if (j == 1) {
                std::cerr << "  consts\n";
                list_func = std2_list_consts;
            }
            else if (j == 2) {
                std::cerr << "  functions\n";
                list_func = std2_list_functions;
            }

            int n2 = 0;
            list_func(m, 0, &n2);

            const char** names2 = new const char* [n2];
            list_func(m, names2, &n2);

            for (int k = 0; k < n2; k++)
            {
                std::cerr << "    " << names2[k] << '\n';

                if (j == 2)
                {
                    int f = std2_find_function(m, names2[k]);
                    struct std2_param p;
                    p = std2_get_return_type(m, f);
                    std::cerr << "      returns ";
                    print_type(p);
                    std::cerr << "\n";

                    int n = std2_get_param_count(m, f);
                    for (int i = 0; i < n; i++)
                    {
                        std::cerr << "      param " << i << " ";
                        p = std2_get_param_type(m, f, i);
                        print_type(p);
                        std::cerr << "\n";
                    }
                }
            }

            delete [] names2;
        }
    }

#if 0
    int m = std2_find_module("fnmatch");
    int f = std2_find_function(m, "fnmatch");

    int ret;
    void* args[3];
    args[0] = (void*)"*tuokio";
    args[1] = (void*)"musiikkituokio";
    int flags = 0;
    args[2] = &flags;
    std2_call(m, f, &ret, args, 3);

    std::cout << ret << '\n';
#endif

    return 0;
}
