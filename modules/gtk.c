#include <std2priv.h>
#include <gtk/gtk.h>
#include "gtk_enums.h"
#include "gtk_funcs.h"

static void wrap_gtk_init(void* ret, void* const* args)
{
    (void)ret;
    (void)args;
    gtk_init(0, 0);
}

#define WIDGET_CASTER(x, y) \
static void wrap_GTK_##x(void* ret, void* const* args) \
{ \
    *(void**)ret = GTK_##x((GtkWidget*)args[0]); \
} \
static void wrap_##x##_TO_WIDGET(void* ret, void* const* args) \
{ \
    *(void**)ret = GTK_WIDGET((Gtk##y*)args[0]); \
}

WIDGET_CASTER(WINDOW, Window)
WIDGET_CASTER(CONTAINER, Container)
WIDGET_CASTER(TOOLBAR, Toolbar)
WIDGET_CASTER(TOOL_ITEM, ToolItem)
WIDGET_CASTER(BOX, Box)

STD2_BEGIN_CLASS_LIST(gtk)
    FUNCS_CLASSES
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(gtk)
    ENUMS_CONSTS
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(gtk)
    STD2_FUNC("init", "", "", wrap_gtk_init)

#define PLOP(x, y) \
    STD2_FUNC(#x, #y, "Widget", wrap_GTK_##x) \
    STD2_FUNC(#x "_TO_WIDGET", "Widget", #y, wrap_##x##_TO_WIDGET)
PLOP(WINDOW, Window)
PLOP(CONTAINER, Container)
PLOP(TOOLBAR, Toolbar)
PLOP(TOOL_ITEM, ToolItem)
PLOP(BOX, Box)

    ENUMS_FUNCS
    FUNCS_FUNCS
STD2_END_FUNC_LIST()

STD2_MODULE(gtk, STD2_MODULE_BLOCKS | STD2_MODULE_MUST_FORK)
