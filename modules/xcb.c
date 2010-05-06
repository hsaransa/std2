#include "std2priv.h"
#include <xcb/xcb.h>
#include <xcb/xcb_keysyms.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "xcb_enums.h"
//#include "xcb_replys.h"
#define CONN(a) (((struct connection*)(a))->conn)
#define xcb_query_keymap_keys_length(s) 32
#define xcb_query_keymap_keys(s) s->keys
#define xcb_get_keyboard_control_auto_repeats_length(s) 32
#define xcb_get_keyboard_control_auto_repeats(s) s->auto_repeats

static void* copy_struct2(void* p, int size) {
    void* q = malloc(size);
    memcpy(q, p, size);
    return q;
}

#define copy_struct(x) copy_struct2(x, sizeof(*(x)))

struct connection
{
    xcb_connection_t* conn;
    int ref_count;
    int return_id;
};

#include "xcb_generated.h"

static void free_setup(void* ptr)
{

}

static void connection_dec_ref(void* ptr)
{
    struct connection* conn = ptr;
    if (!conn->ref_count--)
    {
        assert(conn->return_id == 0);
        xcb_disconnect(conn->conn);
        free(conn);
    }
}

static void wrap_connect(void* ret, void* const* args)
{
    xcb_connection_t* c;
    const char* display = args[0];
    c = xcb_connect(strlen(display) ? display : 0, 0);

    struct connection* conn = malloc(sizeof(struct connection));
    conn->conn = c;
    conn->ref_count = 1;
    conn->return_id = 0;
    *(void**)ret = conn;
}

static void wrap_connection_has_error(void* ret, void* const* args)
{
    *(int*)ret = xcb_connection_has_error(CONN(args[0]));
}

static void wrap_generate_id(void* ret, void* const* args)
{
    *(int*)ret = xcb_generate_id(CONN(args[0]));
}

static void wrap_get_setup(void* ret, void* const* args)
{
    const xcb_setup_t* s = xcb_get_setup(CONN(args[0]));
    *(void**)ret = s;
}

static void wrap_flush(void* ret, void* const* args)
{
    xcb_flush(CONN(args[0]));
}

static void return_event(int id, void* ret, void* arg0, void* arg1)
{
    *(void**)ret = arg1;
}

static void read_event_cb(int fd, int mask, void* user)
{
    struct connection* conn = user;

    xcb_generic_event_t* ev = xcb_poll_for_event(conn->conn);
    if (ev)
    {
        std2_continue_return(conn->return_id, return_event, ev);
        conn->return_id = 0;
        connection_dec_ref(conn);
        return;
    }

    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ | STD2_CALLBACK_ERROR;
    cb.fd = xcb_get_file_descriptor(conn->conn);
    cb.user = conn;
    cb.func = read_event_cb;
    std2_yield_callback(&cb);
}

static void wrap_wait_for_event(void* ret, void* const* args)
{
    struct connection* conn = args[0];
    if (conn->return_id)
    {
        *(void**)ret = 0;
        return;
    }

    xcb_generic_event_t* ev = xcb_poll_for_event(conn->conn);
    if (ev)
    {
        *(void**)ret = ev;
        return;
    }

    conn->ref_count++;

    struct std2_callback cb;
    cb.flags = STD2_CALLBACK_READ | STD2_CALLBACK_ERROR;
    cb.fd = xcb_get_file_descriptor(conn->conn);
    cb.user = conn;
    cb.func = read_event_cb;
    std2_yield_callback(&cb);

    conn->return_id = std2_delay_return(0, 0);
}

static void new_valueparam32(void* ret, void* const* args)
{
    *(void**)ret = malloc(sizeof(std2_int32) * 32);
    memset(*(void**)ret, 0, sizeof(std2_int32) * 32);
}

static void set_valueparam32(void* ret, void* const* args)
{
    std2_int32* vp = args[0];
    int i = *(int*)args[1];
    int v = *(int*)args[2];
    if (i >= 0 && i < 32)
        vp[i] = v;
}

/*
 * keysyms
 */

static void wrap_key_symbols_alloc(void* ret, void* const* args)
{
    *(void**)ret = xcb_key_symbols_alloc(CONN(args[0]));
}

static void wrap_key_symbols_get_keysym(void* ret, void* const* args)
{
    *(int*)ret = xcb_key_symbols_get_keysym(args[0], *(int*)args[1], *(int*)args[2]);
}

static void wrap_key_symbols_get_keycode(void* ret, void* const* args)
{
    *(const char**)ret = xcb_key_symbols_get_keycode(args[0], *(int*)args[2]);
}

static void wrap_key_press_lookup_keysym(void* ret, void* const* args)
{
    *(int*)ret = xcb_key_press_lookup_keysym(args[0], args[1], *(int*)args[2]);
}

static void wrap_key_release_lookup_keysym(void* ret, void* const* args)
{
    *(int*)ret = xcb_key_release_lookup_keysym(args[0], args[1], *(int*)args[2]);
}

static void wrap_refresh_keyboard_mapping(void* ret, void* const* args)
{
    *(int*)ret = xcb_refresh_keyboard_mapping(args[0], args[1]);
}

static void wrap_is_keypad_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_keypad_key(*(int*)args[0]);
}
static void wrap_is_private_keypad_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_private_keypad_key(*(int*)args[0]);
}
static void wrap_is_cursor_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_cursor_key(*(int*)args[0]);
}
static void wrap_is_pf_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_pf_key(*(int*)args[0]);
}
static void wrap_is_function_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_function_key(*(int*)args[0]);
}
static void wrap_is_misc_function_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_misc_function_key(*(int*)args[0]);
}
static void wrap_is_modifier_key(void* ret, void* const* args) {
    *(int*)ret = xcb_is_modifier_key(*(int*)args[0]);
}

STD2_BEGIN_CLASS_LIST(xcb)
    STD2_CLASS("connection", connection_dec_ref)
    STD2_CLASS("valueparam32", free)
    STD2_CLASS("key_symbols", xcb_key_symbols_free)
    STD2_CLASS("generic_event", free)
    XCB_CLASSES
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(xcb)
    ENUMS_CONSTS
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(xcb)
    STD2_FUNC("connect",              "connection", "cs", wrap_connect)
    STD2_FUNC("connection_has_error", "i", "connection", wrap_connection_has_error)
    STD2_FUNC("generate_id",          "i", "connection", wrap_generate_id)
    STD2_FUNC("get_setup",            "setup", "connection", wrap_get_setup)
    STD2_FUNC("flush",                "", "connection", wrap_flush)
    STD2_FUNC("wait_for_event",       "generic_event", "connection", wrap_wait_for_event)
    STD2_FUNC("new_valueparam32",     "valueparam32", "", new_valueparam32)
    STD2_FUNC("set_valueparam32",     "", "valueparam32 i i", set_valueparam32)
    STD2_FUNC("key_symbols_alloc",    "key_symbols", "connection", wrap_key_symbols_alloc)
    STD2_FUNC("key_symbols_get_keycode", "cs", "key_symbols key_press_event i", wrap_key_press_lookup_keysym)
    STD2_FUNC("key_press_lookup_keysym", "i", "key_symbols key_press_event i", wrap_key_press_lookup_keysym)
    ENUMS_FUNCS
    XCB_FUNCS
STD2_END_FUNC_LIST()

STD2_MODULE(xcb, 0)

