#include "std2priv.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>

static char* line;
static int quit;
static int return_id;

static void handler(char* l)
{
    rl_callback_handler_remove();
    if (!l)
        quit = 1;
    line = l;
}

static void return_line(int id, void* ret, void* arg0, void* arg1)
{
    *(char**)ret = arg1;
}

static void callback(void* ret, int fd, int mask, void* user)
{
    line = 0;
    quit = 0;
    rl_callback_read_char();

    if (!quit && !line)
    {
        struct std2_callback cb;
        memset(&cb, 0, sizeof(cb));
        cb.flags = STD2_CALLBACK_READ;
        cb.fd = 0; // stdin
        cb.func = callback;
        std2_yield_callback(&cb);
    }
    else
    {
        if (line)
            add_history(line);

        std2_continue_return(return_id, return_line, line);
    }
}

static void wrap_readline(void* ret, void* const* args)
{
    if (return_id)
    {
        *(void**)ret = 0;
        return;
    }

    rl_callback_handler_install((const char*)args[0], handler);

    struct std2_callback cb;
    memset(&cb, 0, sizeof(cb));
    cb.flags = STD2_CALLBACK_READ;
    cb.fd = 0; // stdin
    cb.func = callback;
    std2_yield_callback(&cb);

    return_id = std2_delay_return(0, 0);
}

STD2_BEGIN_CLASS_LIST(readline)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(readline)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(readline)
    STD2_FUNC("readline",     "ms",      "cs",     wrap_readline)
STD2_END_FUNC_LIST()

STD2_MODULE(readline, 0)
