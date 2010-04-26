#include <std2priv.h>
#include <ncurses.h>
#include <unistd.h>

static WINDOW* screen;

static void free_WINDOW(void* ret)
{
    (void)ret;
}

static void wrap_initscr(void* ret, void* const* args)
{
    if (!screen)
        screen = initscr();

    *(void**)ret = screen;
}

static void wrap_raw(void* ret, void* const* args)
{
    *(int*)ret = raw();
}

static void wrap_cbreak(void* ret, void* const* args)
{
    *(int*)ret = cbreak();
}

static void wrap_keypad(void* ret, void* const* args)
{
    *(int*)ret = keypad((WINDOW*)args[0], *(int*)args[1]);
}

static void wrap_noecho(void* ret, void* const* args)
{
    *(int*)ret = noecho();
}

static void wrap_refresh(void* ret, void* const* args)
{
    *(int*)ret = refresh();
}

static void wrap_endwin(void* ret, void* const* args)
{
    *(int*)ret = endwin();
}

static int getch_return_id;

static void read_cb(int fd, int mask, void* user)
{
    nodelay(screen, 1);
    int k = getch();
    nodelay(screen, 0);
    if (k != ERR)
    {
        std2_continue_return(getch_return_id, 0, (void*)k);
        getch_return_id = 0;
        return;
    }

    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ;
    cb.fd = STDIN_FILENO;
    cb.func = read_cb;
    std2_yield_callback(&cb);
}

static void read_continue(int id, void* ret, void* arg0, void* arg1)
{
    *(int*)ret = (int)arg1;
}

static void wrap_getch(void* ret, void* const* args)
{
    if (getch_return_id > 0 || !screen)
    {
        *(int*)ret = -1;
        return;
    }

    nodelay(screen, 1);
    int k = getch();
    nodelay(screen, 0);
    if (k != ERR)
    {
        *(int*)ret = k;
        return;
    }

    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ;
    cb.fd = STDIN_FILENO;
    cb.func = read_cb;
    std2_yield_callback(&cb);

    getch_return_id = std2_delay_return(read_continue, 0);
}

static void wrap_printw(void* ret, void* const* args)
{
    printw(args[0]);
}

static void wrap_addch(void* ret, void* const* args)
{
    *(int*)ret = addch(*(int*)args[0]);
}

static void wrap_addstr(void* ret, void* const* args)
{
    *(int*)ret = addstr((const char*)args[0]);
}

static void wrap_erase(void* ret, void* const* args)
{
    *(int*)ret = erase();
}

static void wrap_clear(void* ret, void* const* args)
{
    *(int*)ret = clear();
}

static void wrap_clrtobot(void* ret, void* const* args)
{
    *(int*)ret = clrtobot();
}

static void wrap_clrtoeol(void* ret, void* const* args)
{
    *(int*)ret = clrtoeol();
}

static void wrap_getmaxx(void* ret, void* const* args)
{
    int x, y;
    getmaxyx(stdscr, y, x);
    *(int*)ret = x;
}

static void wrap_getmaxy(void* ret, void* const* args)
{
    int x, y;
    getmaxyx(stdscr, y, x);
    *(int*)ret = y;
}

static void wrap_getx(void* ret, void* const* args)
{
    int x, y;
    getyx(stdscr, y, x);
    *(int*)ret = x;
}

static void wrap_gety(void* ret, void* const* args)
{
    int x, y;
    getyx(stdscr, y, x);
    *(int*)ret = y;
}

static void wrap_move(void* ret, void* const* args)
{
    *(int*)ret = move(*(int*)args[0], *(int*)args[1]);
}

STD2_BEGIN_CLASS_LIST(ncurses)
    STD2_CLASS("WINDOW", free_WINDOW)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(ncurses)
    STD2_CONST("A_NORMAL", INT, A_NORMAL)
    STD2_CONST("A_ATTRIBUTES", INT, A_ATTRIBUTES)
    STD2_CONST("A_CHARTEXT", INT, A_CHARTEXT)
    STD2_CONST("A_COLOR", INT, A_COLOR)
    STD2_CONST("A_STANDOUT", INT, A_STANDOUT)
    STD2_CONST("A_UNDERLINE", INT, A_UNDERLINE)
    STD2_CONST("A_REVERSE", INT, A_REVERSE)
    STD2_CONST("A_BLINK", INT, A_BLINK)
    STD2_CONST("A_DIM", INT, A_DIM)
    STD2_CONST("A_BOLD", INT, A_BOLD)
    STD2_CONST("A_ALTCHARSET", INT, A_ALTCHARSET)
    STD2_CONST("A_INVIS", INT, A_INVIS)
    STD2_CONST("A_PROTECT", INT, A_PROTECT)
    STD2_CONST("A_HORIZONTAL", INT, A_HORIZONTAL)
    STD2_CONST("A_LEFT", INT, A_LEFT)
    STD2_CONST("A_LOW", INT, A_LOW)
    STD2_CONST("A_RIGHT", INT, A_RIGHT)
    STD2_CONST("A_TOP", INT, A_TOP)
    STD2_CONST("A_VERTICAL", INT, A_VERTICAL)
    STD2_CONST("KEY_CODE_YES", INT, KEY_CODE_YES)
    STD2_CONST("KEY_MIN", INT, KEY_MIN)
    STD2_CONST("KEY_BREAK", INT, KEY_BREAK)
    STD2_CONST("KEY_SRESET", INT, KEY_SRESET)
    STD2_CONST("KEY_RESET", INT, KEY_RESET)
    STD2_CONST("KEY_DOWN", INT, KEY_DOWN)
    STD2_CONST("KEY_UP", INT, KEY_UP)
    STD2_CONST("KEY_LEFT", INT, KEY_LEFT)
    STD2_CONST("KEY_RIGHT", INT, KEY_RIGHT)
    STD2_CONST("KEY_HOME", INT, KEY_HOME)
    STD2_CONST("KEY_BACKSPACE", INT, KEY_BACKSPACE)
    STD2_CONST("KEY_F0", INT, KEY_F0)
    STD2_CONST("KEY_F1", INT, KEY_F(1))
    STD2_CONST("KEY_F2", INT, KEY_F(2))
    STD2_CONST("KEY_F3", INT, KEY_F(3))
    STD2_CONST("KEY_F4", INT, KEY_F(4))
    STD2_CONST("KEY_F5", INT, KEY_F(5))
    STD2_CONST("KEY_F6", INT, KEY_F(6))
    STD2_CONST("KEY_F7", INT, KEY_F(7))
    STD2_CONST("KEY_F8", INT, KEY_F(8))
    STD2_CONST("KEY_F9", INT, KEY_F(9))
    STD2_CONST("KEY_F10", INT, KEY_F(10))
    STD2_CONST("KEY_F11", INT, KEY_F(11))
    STD2_CONST("KEY_F12", INT, KEY_F(12))
    // There's actually 64 of those KEY_F(n) keys...
    STD2_CONST("KEY_DL", INT, KEY_DL)
    STD2_CONST("KEY_IL", INT, KEY_IL)
    STD2_CONST("KEY_DC", INT, KEY_DC)
    STD2_CONST("KEY_IC", INT, KEY_IC)
    STD2_CONST("KEY_EIC", INT, KEY_EIC)
    STD2_CONST("KEY_CLEAR", INT, KEY_CLEAR)
    STD2_CONST("KEY_EOS", INT, KEY_EOS)
    STD2_CONST("KEY_EOL", INT, KEY_EOL)
    STD2_CONST("KEY_SF", INT, KEY_SF)
    STD2_CONST("KEY_SR", INT, KEY_SR)
    STD2_CONST("KEY_NPAGE", INT, KEY_NPAGE)
    STD2_CONST("KEY_PPAGE", INT, KEY_PPAGE)
    STD2_CONST("KEY_STAB", INT, KEY_STAB)
    STD2_CONST("KEY_CTAB", INT, KEY_CTAB)
    STD2_CONST("KEY_CATAB", INT, KEY_CATAB)
    STD2_CONST("KEY_ENTER", INT, KEY_ENTER)
    STD2_CONST("KEY_PRINT", INT, KEY_PRINT)
    STD2_CONST("KEY_LL", INT, KEY_LL)
    STD2_CONST("KEY_A1", INT, KEY_A1)
    STD2_CONST("KEY_A3", INT, KEY_A3)
    STD2_CONST("KEY_B2", INT, KEY_B2)
    STD2_CONST("KEY_C1", INT, KEY_C1)
    STD2_CONST("KEY_C3", INT, KEY_C3)
    STD2_CONST("KEY_BTAB", INT, KEY_BTAB)
    STD2_CONST("KEY_BEG", INT, KEY_BEG)
    STD2_CONST("KEY_CANCEL", INT, KEY_CANCEL)
    STD2_CONST("KEY_CLOSE", INT, KEY_CLOSE)
    STD2_CONST("KEY_COMMAND", INT, KEY_COMMAND)
    STD2_CONST("KEY_COPY", INT, KEY_COPY)
    STD2_CONST("KEY_CREATE", INT, KEY_CREATE)
    STD2_CONST("KEY_END", INT, KEY_END)
    STD2_CONST("KEY_EXIT", INT, KEY_EXIT)
    STD2_CONST("KEY_FIND", INT, KEY_FIND)
    STD2_CONST("KEY_HELP", INT, KEY_HELP)
    STD2_CONST("KEY_MARK", INT, KEY_MARK)
    STD2_CONST("KEY_MESSAGE", INT, KEY_MESSAGE)
    STD2_CONST("KEY_MOVE", INT, KEY_MOVE)
    STD2_CONST("KEY_NEXT", INT, KEY_NEXT)
    STD2_CONST("KEY_OPEN", INT, KEY_OPEN)
    STD2_CONST("KEY_OPTIONS", INT, KEY_OPTIONS)
    STD2_CONST("KEY_PREVIOUS", INT, KEY_PREVIOUS)
    STD2_CONST("KEY_REDO", INT, KEY_REDO)
    STD2_CONST("KEY_REFERENCE", INT, KEY_REFERENCE)
    STD2_CONST("KEY_REFRESH", INT, KEY_REFRESH)
    STD2_CONST("KEY_REPLACE", INT, KEY_REPLACE)
    STD2_CONST("KEY_RESTART", INT, KEY_RESTART)
    STD2_CONST("KEY_RESUME", INT, KEY_RESUME)
    STD2_CONST("KEY_SAVE", INT, KEY_SAVE)
    STD2_CONST("KEY_SBEG", INT, KEY_SBEG)
    STD2_CONST("KEY_SCANCEL", INT, KEY_SCANCEL)
    STD2_CONST("KEY_SCOMMAND", INT, KEY_SCOMMAND)
    STD2_CONST("KEY_SCOPY", INT, KEY_SCOPY)
    STD2_CONST("KEY_SCREATE", INT, KEY_SCREATE)
    STD2_CONST("KEY_SDC", INT, KEY_SDC)
    STD2_CONST("KEY_SDL", INT, KEY_SDL)
    STD2_CONST("KEY_SELECT", INT, KEY_SELECT)
    STD2_CONST("KEY_SEND", INT, KEY_SEND)
    STD2_CONST("KEY_SEOL", INT, KEY_SEOL)
    STD2_CONST("KEY_SEXIT", INT, KEY_SEXIT)
    STD2_CONST("KEY_SFIND", INT, KEY_SFIND)
    STD2_CONST("KEY_SHELP", INT, KEY_SHELP)
    STD2_CONST("KEY_SHOME", INT, KEY_SHOME)
    STD2_CONST("KEY_SIC", INT, KEY_SIC)
    STD2_CONST("KEY_SLEFT", INT, KEY_SLEFT)
    STD2_CONST("KEY_SMESSAGE", INT, KEY_SMESSAGE)
    STD2_CONST("KEY_SMOVE", INT, KEY_SMOVE)
    STD2_CONST("KEY_SNEXT", INT, KEY_SNEXT)
    STD2_CONST("KEY_SOPTIONS", INT, KEY_SOPTIONS)
    STD2_CONST("KEY_SPREVIOUS", INT, KEY_SPREVIOUS)
    STD2_CONST("KEY_SPRINT", INT, KEY_SPRINT)
    STD2_CONST("KEY_SREDO", INT, KEY_SREDO)
    STD2_CONST("KEY_SREPLACE", INT, KEY_SREPLACE)
    STD2_CONST("KEY_SRIGHT", INT, KEY_SRIGHT)
    STD2_CONST("KEY_SRSUME", INT, KEY_SRSUME)
    STD2_CONST("KEY_SSAVE", INT, KEY_SSAVE)
    STD2_CONST("KEY_SSUSPEND", INT, KEY_SSUSPEND)
    STD2_CONST("KEY_SUNDO", INT, KEY_SUNDO)
    STD2_CONST("KEY_SUSPEND", INT, KEY_SUSPEND)
    STD2_CONST("KEY_UNDO", INT, KEY_UNDO)
    STD2_CONST("KEY_MOUSE", INT, KEY_MOUSE)
    STD2_CONST("KEY_RESIZE", INT, KEY_RESIZE)
    STD2_CONST("KEY_EVENT", INT, KEY_EVENT)
    STD2_CONST("KEY_MAX", INT, KEY_MAX)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(ncurses)
    STD2_FUNC("initscr", "WINDOW", "", wrap_initscr)
    STD2_FUNC("raw",     "i",      "", wrap_raw)
    STD2_FUNC("cbreak",  "i",      "", wrap_cbreak)
    STD2_FUNC("keypad",  "i",      "WINDOW i", wrap_keypad)
    STD2_FUNC("noecho",  "i",      "", wrap_noecho)
    STD2_FUNC("refresh", "i",      "", wrap_refresh)
    STD2_FUNC("getch",   "i",      "", wrap_getch)
    STD2_FUNC("endwin",  "i",      "", wrap_endwin)
    STD2_FUNC("printw",  "i",      "cs", wrap_printw)
    STD2_FUNC("addch",   "i",      "i", wrap_addch)
    STD2_FUNC("addstr",   "i",     "cs", wrap_addstr)
    STD2_FUNC("erase",   "i",      "cs", wrap_erase)
    STD2_FUNC("clear",   "i",      "cs", wrap_clear)
    STD2_FUNC("clrtobot","i",      "", wrap_clrtobot)
    STD2_FUNC("clrtoeol","i",      "", wrap_clrtoeol)
    STD2_FUNC("getmaxx", "i",      "", wrap_getmaxx)
    STD2_FUNC("getmaxy", "i",      "", wrap_getmaxy)
    STD2_FUNC("getx",    "i",      "", wrap_getx)
    STD2_FUNC("gety",    "i",      "", wrap_gety)
    STD2_FUNC("move",    "i",      "i i", wrap_move)
STD2_END_FUNC_LIST()

STD2_MODULE(ncurses, 0)
