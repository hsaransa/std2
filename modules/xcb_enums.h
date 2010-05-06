/* generated: Tue Apr 13 00:58:56 2010
 * arguments: scripts/gccxml.py /usr/include/xcb/xcb.h -- headerprefix:ENUMS prefix:xcb_ prefix:XCB_ enums
 */
static void gx_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GX_CLEAR:
        s = "GX_CLEAR";
        break;
    case XCB_GX_AND:
        s = "GX_AND";
        break;
    case XCB_GX_AND_REVERSE:
        s = "GX_AND_REVERSE";
        break;
    case XCB_GX_COPY:
        s = "GX_COPY";
        break;
    case XCB_GX_AND_INVERTED:
        s = "GX_AND_INVERTED";
        break;
    case XCB_GX_NOOP:
        s = "GX_NOOP";
        break;
    case XCB_GX_XOR:
        s = "GX_XOR";
        break;
    case XCB_GX_OR:
        s = "GX_OR";
        break;
    case XCB_GX_NOR:
        s = "GX_NOR";
        break;
    case XCB_GX_EQUIV:
        s = "GX_EQUIV";
        break;
    case XCB_GX_INVERT:
        s = "GX_INVERT";
        break;
    case XCB_GX_OR_REVERSE:
        s = "GX_OR_REVERSE";
        break;
    case XCB_GX_COPY_INVERTED:
        s = "GX_COPY_INVERTED";
        break;
    case XCB_GX_OR_INVERTED:
        s = "GX_OR_INVERTED";
        break;
    case XCB_GX_NAND:
        s = "GX_NAND";
        break;
    case XCB_GX_SET:
        s = "GX_SET";
        break;
    }
    *(const char**)ret = s;
}
static void allow_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_ALLOW_ASYNC_POINTER:
        s = "ALLOW_ASYNC_POINTER";
        break;
    case XCB_ALLOW_SYNC_POINTER:
        s = "ALLOW_SYNC_POINTER";
        break;
    case XCB_ALLOW_REPLAY_POINTER:
        s = "ALLOW_REPLAY_POINTER";
        break;
    case XCB_ALLOW_ASYNC_KEYBOARD:
        s = "ALLOW_ASYNC_KEYBOARD";
        break;
    case XCB_ALLOW_SYNC_KEYBOARD:
        s = "ALLOW_SYNC_KEYBOARD";
        break;
    case XCB_ALLOW_REPLAY_KEYBOARD:
        s = "ALLOW_REPLAY_KEYBOARD";
        break;
    case XCB_ALLOW_ASYNC_BOTH:
        s = "ALLOW_ASYNC_BOTH";
        break;
    case XCB_ALLOW_SYNC_BOTH:
        s = "ALLOW_SYNC_BOTH";
        break;
    }
    *(const char**)ret = s;
}
static void mod_mask_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MOD_MASK_SHIFT:
        s = "MOD_MASK_SHIFT";
        break;
    case XCB_MOD_MASK_LOCK:
        s = "MOD_MASK_LOCK";
        break;
    case XCB_MOD_MASK_CONTROL:
        s = "MOD_MASK_CONTROL";
        break;
    case XCB_MOD_MASK_1:
        s = "MOD_MASK_1";
        break;
    case XCB_MOD_MASK_2:
        s = "MOD_MASK_2";
        break;
    case XCB_MOD_MASK_3:
        s = "MOD_MASK_3";
        break;
    case XCB_MOD_MASK_4:
        s = "MOD_MASK_4";
        break;
    case XCB_MOD_MASK_5:
        s = "MOD_MASK_5";
        break;
    case XCB_MOD_MASK_ANY:
        s = "MOD_MASK_ANY";
        break;
    }
    *(const char**)ret = s;
}
static void grab_status_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GRAB_STATUS_SUCCESS:
        s = "GRAB_STATUS_SUCCESS";
        break;
    case XCB_GRAB_STATUS_ALREADY_GRABBED:
        s = "GRAB_STATUS_ALREADY_GRABBED";
        break;
    case XCB_GRAB_STATUS_INVALID_TIME:
        s = "GRAB_STATUS_INVALID_TIME";
        break;
    case XCB_GRAB_STATUS_NOT_VIEWABLE:
        s = "GRAB_STATUS_NOT_VIEWABLE";
        break;
    case XCB_GRAB_STATUS_FROZEN:
        s = "GRAB_STATUS_FROZEN";
        break;
    }
    *(const char**)ret = s;
}
static void close_down_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CLOSE_DOWN_DESTROY_ALL:
        s = "CLOSE_DOWN_DESTROY_ALL";
        break;
    case XCB_CLOSE_DOWN_RETAIN_PERMANENT:
        s = "CLOSE_DOWN_RETAIN_PERMANENT";
        break;
    case XCB_CLOSE_DOWN_RETAIN_TEMPORARY:
        s = "CLOSE_DOWN_RETAIN_TEMPORARY";
        break;
    }
    *(const char**)ret = s;
}
static void mapping_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MAPPING_MODIFIER:
        s = "MAPPING_MODIFIER";
        break;
    case XCB_MAPPING_KEYBOARD:
        s = "MAPPING_KEYBOARD";
        break;
    case XCB_MAPPING_POINTER:
        s = "MAPPING_POINTER";
        break;
    }
    *(const char**)ret = s;
}
static void subwindow_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_SUBWINDOW_MODE_CLIP_BY_CHILDREN:
        s = "SUBWINDOW_MODE_CLIP_BY_CHILDREN";
        break;
    case XCB_SUBWINDOW_MODE_INCLUDE_INFERIORS:
        s = "SUBWINDOW_MODE_INCLUDE_INFERIORS";
        break;
    }
    *(const char**)ret = s;
}
static void arc_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_ARC_MODE_CHORD:
        s = "ARC_MODE_CHORD";
        break;
    case XCB_ARC_MODE_PIE_SLICE:
        s = "ARC_MODE_PIE_SLICE";
        break;
    }
    *(const char**)ret = s;
}
static void map_index_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MAP_INDEX_SHIFT:
        s = "MAP_INDEX_SHIFT";
        break;
    case XCB_MAP_INDEX_LOCK:
        s = "MAP_INDEX_LOCK";
        break;
    case XCB_MAP_INDEX_CONTROL:
        s = "MAP_INDEX_CONTROL";
        break;
    case XCB_MAP_INDEX_1:
        s = "MAP_INDEX_1";
        break;
    case XCB_MAP_INDEX_2:
        s = "MAP_INDEX_2";
        break;
    case XCB_MAP_INDEX_3:
        s = "MAP_INDEX_3";
        break;
    case XCB_MAP_INDEX_4:
        s = "MAP_INDEX_4";
        break;
    case XCB_MAP_INDEX_5:
        s = "MAP_INDEX_5";
        break;
    }
    *(const char**)ret = s;
}
static void get_property_type_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GET_PROPERTY_TYPE_ANY:
        s = "GET_PROPERTY_TYPE_ANY";
        break;
    }
    *(const char**)ret = s;
}
static void circulate_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CIRCULATE_RAISE_LOWEST:
        s = "CIRCULATE_RAISE_LOWEST";
        break;
    case XCB_CIRCULATE_LOWER_HIGHEST:
        s = "CIRCULATE_LOWER_HIGHEST";
        break;
    }
    *(const char**)ret = s;
}
static void window_class_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_WINDOW_CLASS_COPY_FROM_PARENT:
        s = "WINDOW_CLASS_COPY_FROM_PARENT";
        break;
    case XCB_WINDOW_CLASS_INPUT_OUTPUT:
        s = "WINDOW_CLASS_INPUT_OUTPUT";
        break;
    case XCB_WINDOW_CLASS_INPUT_ONLY:
        s = "WINDOW_CLASS_INPUT_ONLY";
        break;
    }
    *(const char**)ret = s;
}
static void place_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_PLACE_ON_TOP:
        s = "PLACE_ON_TOP";
        break;
    case XCB_PLACE_ON_BOTTOM:
        s = "PLACE_ON_BOTTOM";
        break;
    }
    *(const char**)ret = s;
}
static void cursor_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CURSOR_NONE:
        s = "CURSOR_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void stack_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_STACK_MODE_ABOVE:
        s = "STACK_MODE_ABOVE";
        break;
    case XCB_STACK_MODE_BELOW:
        s = "STACK_MODE_BELOW";
        break;
    case XCB_STACK_MODE_TOP_IF:
        s = "STACK_MODE_TOP_IF";
        break;
    case XCB_STACK_MODE_BOTTOM_IF:
        s = "STACK_MODE_BOTTOM_IF";
        break;
    case XCB_STACK_MODE_OPPOSITE:
        s = "STACK_MODE_OPPOSITE";
        break;
    }
    *(const char**)ret = s;
}
static void kb_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_KB_KEY_CLICK_PERCENT:
        s = "KB_KEY_CLICK_PERCENT";
        break;
    case XCB_KB_BELL_PERCENT:
        s = "KB_BELL_PERCENT";
        break;
    case XCB_KB_BELL_PITCH:
        s = "KB_BELL_PITCH";
        break;
    case XCB_KB_BELL_DURATION:
        s = "KB_BELL_DURATION";
        break;
    case XCB_KB_LED:
        s = "KB_LED";
        break;
    case XCB_KB_LED_MODE:
        s = "KB_LED_MODE";
        break;
    case XCB_KB_KEY:
        s = "KB_KEY";
        break;
    case XCB_KB_AUTO_REPEAT_MODE:
        s = "KB_AUTO_REPEAT_MODE";
        break;
    }
    *(const char**)ret = s;
}
static void back_pixmap_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_BACK_PIXMAP_NONE:
        s = "BACK_PIXMAP_NONE";
        break;
    case XCB_BACK_PIXMAP_PARENT_RELATIVE:
        s = "BACK_PIXMAP_PARENT_RELATIVE";
        break;
    }
    *(const char**)ret = s;
}
static void notify_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_NOTIFY_MODE_NORMAL:
        s = "NOTIFY_MODE_NORMAL";
        break;
    case XCB_NOTIFY_MODE_GRAB:
        s = "NOTIFY_MODE_GRAB";
        break;
    case XCB_NOTIFY_MODE_UNGRAB:
        s = "NOTIFY_MODE_UNGRAB";
        break;
    case XCB_NOTIFY_MODE_WHILE_GRABBED:
        s = "NOTIFY_MODE_WHILE_GRABBED";
        break;
    }
    *(const char**)ret = s;
}
static void set_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_SET_MODE_INSERT:
        s = "SET_MODE_INSERT";
        break;
    case XCB_SET_MODE_DELETE:
        s = "SET_MODE_DELETE";
        break;
    }
    *(const char**)ret = s;
}
static void auto_repeat_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_AUTO_REPEAT_MODE_OFF:
        s = "AUTO_REPEAT_MODE_OFF";
        break;
    case XCB_AUTO_REPEAT_MODE_ON:
        s = "AUTO_REPEAT_MODE_ON";
        break;
    case XCB_AUTO_REPEAT_MODE_DEFAULT:
        s = "AUTO_REPEAT_MODE_DEFAULT";
        break;
    }
    *(const char**)ret = s;
}
static void backing_store_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_BACKING_STORE_NOT_USEFUL:
        s = "BACKING_STORE_NOT_USEFUL";
        break;
    case XCB_BACKING_STORE_WHEN_MAPPED:
        s = "BACKING_STORE_WHEN_MAPPED";
        break;
    case XCB_BACKING_STORE_ALWAYS:
        s = "BACKING_STORE_ALWAYS";
        break;
    }
    *(const char**)ret = s;
}
static void prop_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_PROP_MODE_REPLACE:
        s = "PROP_MODE_REPLACE";
        break;
    case XCB_PROP_MODE_PREPEND:
        s = "PROP_MODE_PREPEND";
        break;
    case XCB_PROP_MODE_APPEND:
        s = "PROP_MODE_APPEND";
        break;
    }
    *(const char**)ret = s;
}
static void atom_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_ATOM_NONE:
        s = "ATOM_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void visual_class_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_VISUAL_CLASS_STATIC_GRAY:
        s = "VISUAL_CLASS_STATIC_GRAY";
        break;
    case XCB_VISUAL_CLASS_GRAY_SCALE:
        s = "VISUAL_CLASS_GRAY_SCALE";
        break;
    case XCB_VISUAL_CLASS_STATIC_COLOR:
        s = "VISUAL_CLASS_STATIC_COLOR";
        break;
    case XCB_VISUAL_CLASS_PSEUDO_COLOR:
        s = "VISUAL_CLASS_PSEUDO_COLOR";
        break;
    case XCB_VISUAL_CLASS_TRUE_COLOR:
        s = "VISUAL_CLASS_TRUE_COLOR";
        break;
    case XCB_VISUAL_CLASS_DIRECT_COLOR:
        s = "VISUAL_CLASS_DIRECT_COLOR";
        break;
    }
    *(const char**)ret = s;
}
static void cw_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CW_BACK_PIXMAP:
        s = "CW_BACK_PIXMAP";
        break;
    case XCB_CW_BACK_PIXEL:
        s = "CW_BACK_PIXEL";
        break;
    case XCB_CW_BORDER_PIXMAP:
        s = "CW_BORDER_PIXMAP";
        break;
    case XCB_CW_BORDER_PIXEL:
        s = "CW_BORDER_PIXEL";
        break;
    case XCB_CW_BIT_GRAVITY:
        s = "CW_BIT_GRAVITY";
        break;
    case XCB_CW_WIN_GRAVITY:
        s = "CW_WIN_GRAVITY";
        break;
    case XCB_CW_BACKING_STORE:
        s = "CW_BACKING_STORE";
        break;
    case XCB_CW_BACKING_PLANES:
        s = "CW_BACKING_PLANES";
        break;
    case XCB_CW_BACKING_PIXEL:
        s = "CW_BACKING_PIXEL";
        break;
    case XCB_CW_OVERRIDE_REDIRECT:
        s = "CW_OVERRIDE_REDIRECT";
        break;
    case XCB_CW_SAVE_UNDER:
        s = "CW_SAVE_UNDER";
        break;
    case XCB_CW_EVENT_MASK:
        s = "CW_EVENT_MASK";
        break;
    case XCB_CW_DONT_PROPAGATE:
        s = "CW_DONT_PROPAGATE";
        break;
    case XCB_CW_COLORMAP:
        s = "CW_COLORMAP";
        break;
    case XCB_CW_CURSOR:
        s = "CW_CURSOR";
        break;
    }
    *(const char**)ret = s;
}
static void input_focus_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_INPUT_FOCUS_NONE:
        s = "INPUT_FOCUS_NONE";
        break;
    case XCB_INPUT_FOCUS_POINTER_ROOT:
        s = "INPUT_FOCUS_POINTER_ROOT";
        break;
    case XCB_INPUT_FOCUS_PARENT:
        s = "INPUT_FOCUS_PARENT";
        break;
    case XCB_INPUT_FOCUS_FOLLOW_KEYBOARD:
        s = "INPUT_FOCUS_FOLLOW_KEYBOARD";
        break;
    }
    *(const char**)ret = s;
}
static void kill_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_KILL_ALL_TEMPORARY:
        s = "KILL_ALL_TEMPORARY";
        break;
    }
    *(const char**)ret = s;
}
static void send_event_dest_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_SEND_EVENT_DEST_POINTER_WINDOW:
        s = "SEND_EVENT_DEST_POINTER_WINDOW";
        break;
    case XCB_SEND_EVENT_DEST_ITEM_FOCUS:
        s = "SEND_EVENT_DEST_ITEM_FOCUS";
        break;
    }
    *(const char**)ret = s;
}
static void coord_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_COORD_MODE_ORIGIN:
        s = "COORD_MODE_ORIGIN";
        break;
    case XCB_COORD_MODE_PREVIOUS:
        s = "COORD_MODE_PREVIOUS";
        break;
    }
    *(const char**)ret = s;
}
static void access_control_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_ACCESS_CONTROL_DISABLE:
        s = "ACCESS_CONTROL_DISABLE";
        break;
    case XCB_ACCESS_CONTROL_ENABLE:
        s = "ACCESS_CONTROL_ENABLE";
        break;
    }
    *(const char**)ret = s;
}
static void property_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_PROPERTY_NEW_VALUE:
        s = "PROPERTY_NEW_VALUE";
        break;
    case XCB_PROPERTY_DELETE:
        s = "PROPERTY_DELETE";
        break;
    }
    *(const char**)ret = s;
}
static void fill_style_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_FILL_STYLE_SOLID:
        s = "FILL_STYLE_SOLID";
        break;
    case XCB_FILL_STYLE_TILED:
        s = "FILL_STYLE_TILED";
        break;
    case XCB_FILL_STYLE_STIPPLED:
        s = "FILL_STYLE_STIPPLED";
        break;
    case XCB_FILL_STYLE_OPAQUE_STIPPLED:
        s = "FILL_STYLE_OPAQUE_STIPPLED";
        break;
    }
    *(const char**)ret = s;
}
static void query_shape_of_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_QUERY_SHAPE_OF_LARGEST_CURSOR:
        s = "QUERY_SHAPE_OF_LARGEST_CURSOR";
        break;
    case XCB_QUERY_SHAPE_OF_FASTEST_TILE:
        s = "QUERY_SHAPE_OF_FASTEST_TILE";
        break;
    case XCB_QUERY_SHAPE_OF_FASTEST_STIPPLE:
        s = "QUERY_SHAPE_OF_FASTEST_STIPPLE";
        break;
    }
    *(const char**)ret = s;
}
static void pixmap_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_PIXMAP_NONE:
        s = "PIXMAP_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void map_state_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MAP_STATE_UNMAPPED:
        s = "MAP_STATE_UNMAPPED";
        break;
    case XCB_MAP_STATE_UNVIEWABLE:
        s = "MAP_STATE_UNVIEWABLE";
        break;
    case XCB_MAP_STATE_VIEWABLE:
        s = "MAP_STATE_VIEWABLE";
        break;
    }
    *(const char**)ret = s;
}
static void event_mask_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_EVENT_MASK_NO_EVENT:
        s = "EVENT_MASK_NO_EVENT";
        break;
    case XCB_EVENT_MASK_KEY_PRESS:
        s = "EVENT_MASK_KEY_PRESS";
        break;
    case XCB_EVENT_MASK_KEY_RELEASE:
        s = "EVENT_MASK_KEY_RELEASE";
        break;
    case XCB_EVENT_MASK_BUTTON_PRESS:
        s = "EVENT_MASK_BUTTON_PRESS";
        break;
    case XCB_EVENT_MASK_BUTTON_RELEASE:
        s = "EVENT_MASK_BUTTON_RELEASE";
        break;
    case XCB_EVENT_MASK_ENTER_WINDOW:
        s = "EVENT_MASK_ENTER_WINDOW";
        break;
    case XCB_EVENT_MASK_LEAVE_WINDOW:
        s = "EVENT_MASK_LEAVE_WINDOW";
        break;
    case XCB_EVENT_MASK_POINTER_MOTION:
        s = "EVENT_MASK_POINTER_MOTION";
        break;
    case XCB_EVENT_MASK_POINTER_MOTION_HINT:
        s = "EVENT_MASK_POINTER_MOTION_HINT";
        break;
    case XCB_EVENT_MASK_BUTTON_1_MOTION:
        s = "EVENT_MASK_BUTTON_1_MOTION";
        break;
    case XCB_EVENT_MASK_BUTTON_2_MOTION:
        s = "EVENT_MASK_BUTTON_2_MOTION";
        break;
    case XCB_EVENT_MASK_BUTTON_3_MOTION:
        s = "EVENT_MASK_BUTTON_3_MOTION";
        break;
    case XCB_EVENT_MASK_BUTTON_4_MOTION:
        s = "EVENT_MASK_BUTTON_4_MOTION";
        break;
    case XCB_EVENT_MASK_BUTTON_5_MOTION:
        s = "EVENT_MASK_BUTTON_5_MOTION";
        break;
    case XCB_EVENT_MASK_BUTTON_MOTION:
        s = "EVENT_MASK_BUTTON_MOTION";
        break;
    case XCB_EVENT_MASK_KEYMAP_STATE:
        s = "EVENT_MASK_KEYMAP_STATE";
        break;
    case XCB_EVENT_MASK_EXPOSURE:
        s = "EVENT_MASK_EXPOSURE";
        break;
    case XCB_EVENT_MASK_VISIBILITY_CHANGE:
        s = "EVENT_MASK_VISIBILITY_CHANGE";
        break;
    case XCB_EVENT_MASK_STRUCTURE_NOTIFY:
        s = "EVENT_MASK_STRUCTURE_NOTIFY";
        break;
    case XCB_EVENT_MASK_RESIZE_REDIRECT:
        s = "EVENT_MASK_RESIZE_REDIRECT";
        break;
    case XCB_EVENT_MASK_SUBSTRUCTURE_NOTIFY:
        s = "EVENT_MASK_SUBSTRUCTURE_NOTIFY";
        break;
    case XCB_EVENT_MASK_SUBSTRUCTURE_REDIRECT:
        s = "EVENT_MASK_SUBSTRUCTURE_REDIRECT";
        break;
    case XCB_EVENT_MASK_FOCUS_CHANGE:
        s = "EVENT_MASK_FOCUS_CHANGE";
        break;
    case XCB_EVENT_MASK_PROPERTY_CHANGE:
        s = "EVENT_MASK_PROPERTY_CHANGE";
        break;
    case XCB_EVENT_MASK_COLOR_MAP_CHANGE:
        s = "EVENT_MASK_COLOR_MAP_CHANGE";
        break;
    case XCB_EVENT_MASK_OWNER_GRAB_BUTTON:
        s = "EVENT_MASK_OWNER_GRAB_BUTTON";
        break;
    }
    *(const char**)ret = s;
}
static void font_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_FONT_NONE:
        s = "FONT_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void family_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_FAMILY_INTERNET:
        s = "FAMILY_INTERNET";
        break;
    case XCB_FAMILY_DECNET:
        s = "FAMILY_DECNET";
        break;
    case XCB_FAMILY_CHAOS:
        s = "FAMILY_CHAOS";
        break;
    case XCB_FAMILY_SERVER_INTERPRETED:
        s = "FAMILY_SERVER_INTERPRETED";
        break;
    case XCB_FAMILY_INTERNET_6:
        s = "FAMILY_INTERNET_6";
        break;
    }
    *(const char**)ret = s;
}
static void colormap_state_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_COLORMAP_STATE_UNINSTALLED:
        s = "COLORMAP_STATE_UNINSTALLED";
        break;
    case XCB_COLORMAP_STATE_INSTALLED:
        s = "COLORMAP_STATE_INSTALLED";
        break;
    }
    *(const char**)ret = s;
}
static void blanking_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_BLANKING_NOT_PREFERRED:
        s = "BLANKING_NOT_PREFERRED";
        break;
    case XCB_BLANKING_PREFERRED:
        s = "BLANKING_PREFERRED";
        break;
    case XCB_BLANKING_DEFAULT:
        s = "BLANKING_DEFAULT";
        break;
    }
    *(const char**)ret = s;
}
static void colormap_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_COLORMAP_NONE:
        s = "COLORMAP_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void time_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_TIME_CURRENT_TIME:
        s = "TIME_CURRENT_TIME";
        break;
    }
    *(const char**)ret = s;
}
static void gc_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GC_FUNCTION:
        s = "GC_FUNCTION";
        break;
    case XCB_GC_PLANE_MASK:
        s = "GC_PLANE_MASK";
        break;
    case XCB_GC_FOREGROUND:
        s = "GC_FOREGROUND";
        break;
    case XCB_GC_BACKGROUND:
        s = "GC_BACKGROUND";
        break;
    case XCB_GC_LINE_WIDTH:
        s = "GC_LINE_WIDTH";
        break;
    case XCB_GC_LINE_STYLE:
        s = "GC_LINE_STYLE";
        break;
    case XCB_GC_CAP_STYLE:
        s = "GC_CAP_STYLE";
        break;
    case XCB_GC_JOIN_STYLE:
        s = "GC_JOIN_STYLE";
        break;
    case XCB_GC_FILL_STYLE:
        s = "GC_FILL_STYLE";
        break;
    case XCB_GC_FILL_RULE:
        s = "GC_FILL_RULE";
        break;
    case XCB_GC_TILE:
        s = "GC_TILE";
        break;
    case XCB_GC_STIPPLE:
        s = "GC_STIPPLE";
        break;
    case XCB_GC_TILE_STIPPLE_ORIGIN_X:
        s = "GC_TILE_STIPPLE_ORIGIN_X";
        break;
    case XCB_GC_TILE_STIPPLE_ORIGIN_Y:
        s = "GC_TILE_STIPPLE_ORIGIN_Y";
        break;
    case XCB_GC_FONT:
        s = "GC_FONT";
        break;
    case XCB_GC_SUBWINDOW_MODE:
        s = "GC_SUBWINDOW_MODE";
        break;
    case XCB_GC_GRAPHICS_EXPOSURES:
        s = "GC_GRAPHICS_EXPOSURES";
        break;
    case XCB_GC_CLIP_ORIGIN_X:
        s = "GC_CLIP_ORIGIN_X";
        break;
    case XCB_GC_CLIP_ORIGIN_Y:
        s = "GC_CLIP_ORIGIN_Y";
        break;
    case XCB_GC_CLIP_MASK:
        s = "GC_CLIP_MASK";
        break;
    case XCB_GC_DASH_OFFSET:
        s = "GC_DASH_OFFSET";
        break;
    case XCB_GC_DASH_LIST:
        s = "GC_DASH_LIST";
        break;
    case XCB_GC_ARC_MODE:
        s = "GC_ARC_MODE";
        break;
    }
    *(const char**)ret = s;
}
static void screen_saver_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_SCREEN_SAVER_RESET:
        s = "SCREEN_SAVER_RESET";
        break;
    case XCB_SCREEN_SAVER_ACTIVE:
        s = "SCREEN_SAVER_ACTIVE";
        break;
    }
    *(const char**)ret = s;
}
static void led_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_LED_MODE_OFF:
        s = "LED_MODE_OFF";
        break;
    case XCB_LED_MODE_ON:
        s = "LED_MODE_ON";
        break;
    }
    *(const char**)ret = s;
}
static void font_draw_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_FONT_DRAW_LEFT_TO_RIGHT:
        s = "FONT_DRAW_LEFT_TO_RIGHT";
        break;
    case XCB_FONT_DRAW_RIGHT_TO_LEFT:
        s = "FONT_DRAW_RIGHT_TO_LEFT";
        break;
    }
    *(const char**)ret = s;
}
static void cap_style_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CAP_STYLE_NOT_LAST:
        s = "CAP_STYLE_NOT_LAST";
        break;
    case XCB_CAP_STYLE_BUTT:
        s = "CAP_STYLE_BUTT";
        break;
    case XCB_CAP_STYLE_ROUND:
        s = "CAP_STYLE_ROUND";
        break;
    case XCB_CAP_STYLE_PROJECTING:
        s = "CAP_STYLE_PROJECTING";
        break;
    }
    *(const char**)ret = s;
}
static void fill_rule_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_FILL_RULE_EVEN_ODD:
        s = "FILL_RULE_EVEN_ODD";
        break;
    case XCB_FILL_RULE_WINDING:
        s = "FILL_RULE_WINDING";
        break;
    }
    *(const char**)ret = s;
}
static void image_order_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_IMAGE_ORDER_LSB_FIRST:
        s = "IMAGE_ORDER_LSB_FIRST";
        break;
    case XCB_IMAGE_ORDER_MSB_FIRST:
        s = "IMAGE_ORDER_MSB_FIRST";
        break;
    }
    *(const char**)ret = s;
}
static void poly_shape_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_POLY_SHAPE_COMPLEX:
        s = "POLY_SHAPE_COMPLEX";
        break;
    case XCB_POLY_SHAPE_NONCONVEX:
        s = "POLY_SHAPE_NONCONVEX";
        break;
    case XCB_POLY_SHAPE_CONVEX:
        s = "POLY_SHAPE_CONVEX";
        break;
    }
    *(const char**)ret = s;
}
static void visibility_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_VISIBILITY_UNOBSCURED:
        s = "VISIBILITY_UNOBSCURED";
        break;
    case XCB_VISIBILITY_PARTIALLY_OBSCURED:
        s = "VISIBILITY_PARTIALLY_OBSCURED";
        break;
    case XCB_VISIBILITY_FULLY_OBSCURED:
        s = "VISIBILITY_FULLY_OBSCURED";
        break;
    }
    *(const char**)ret = s;
}
static void button_index_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_BUTTON_INDEX_ANY:
        s = "BUTTON_INDEX_ANY";
        break;
    case XCB_BUTTON_INDEX_1:
        s = "BUTTON_INDEX_1";
        break;
    case XCB_BUTTON_INDEX_2:
        s = "BUTTON_INDEX_2";
        break;
    case XCB_BUTTON_INDEX_3:
        s = "BUTTON_INDEX_3";
        break;
    case XCB_BUTTON_INDEX_4:
        s = "BUTTON_INDEX_4";
        break;
    case XCB_BUTTON_INDEX_5:
        s = "BUTTON_INDEX_5";
        break;
    }
    *(const char**)ret = s;
}
static void key_but_mask_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_KEY_BUT_MASK_SHIFT:
        s = "KEY_BUT_MASK_SHIFT";
        break;
    case XCB_KEY_BUT_MASK_LOCK:
        s = "KEY_BUT_MASK_LOCK";
        break;
    case XCB_KEY_BUT_MASK_CONTROL:
        s = "KEY_BUT_MASK_CONTROL";
        break;
    case XCB_KEY_BUT_MASK_MOD_1:
        s = "KEY_BUT_MASK_MOD_1";
        break;
    case XCB_KEY_BUT_MASK_MOD_2:
        s = "KEY_BUT_MASK_MOD_2";
        break;
    case XCB_KEY_BUT_MASK_MOD_3:
        s = "KEY_BUT_MASK_MOD_3";
        break;
    case XCB_KEY_BUT_MASK_MOD_4:
        s = "KEY_BUT_MASK_MOD_4";
        break;
    case XCB_KEY_BUT_MASK_MOD_5:
        s = "KEY_BUT_MASK_MOD_5";
        break;
    case XCB_KEY_BUT_MASK_BUTTON_1:
        s = "KEY_BUT_MASK_BUTTON_1";
        break;
    case XCB_KEY_BUT_MASK_BUTTON_2:
        s = "KEY_BUT_MASK_BUTTON_2";
        break;
    case XCB_KEY_BUT_MASK_BUTTON_3:
        s = "KEY_BUT_MASK_BUTTON_3";
        break;
    case XCB_KEY_BUT_MASK_BUTTON_4:
        s = "KEY_BUT_MASK_BUTTON_4";
        break;
    case XCB_KEY_BUT_MASK_BUTTON_5:
        s = "KEY_BUT_MASK_BUTTON_5";
        break;
    }
    *(const char**)ret = s;
}
static void grab_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GRAB_ANY:
        s = "GRAB_ANY";
        break;
    }
    *(const char**)ret = s;
}
static void mapping_status_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MAPPING_STATUS_SUCCESS:
        s = "MAPPING_STATUS_SUCCESS";
        break;
    case XCB_MAPPING_STATUS_BUSY:
        s = "MAPPING_STATUS_BUSY";
        break;
    case XCB_MAPPING_STATUS_FAILURE:
        s = "MAPPING_STATUS_FAILURE";
        break;
    }
    *(const char**)ret = s;
}
static void config_window_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CONFIG_WINDOW_X:
        s = "CONFIG_WINDOW_X";
        break;
    case XCB_CONFIG_WINDOW_Y:
        s = "CONFIG_WINDOW_Y";
        break;
    case XCB_CONFIG_WINDOW_WIDTH:
        s = "CONFIG_WINDOW_WIDTH";
        break;
    case XCB_CONFIG_WINDOW_HEIGHT:
        s = "CONFIG_WINDOW_HEIGHT";
        break;
    case XCB_CONFIG_WINDOW_BORDER_WIDTH:
        s = "CONFIG_WINDOW_BORDER_WIDTH";
        break;
    case XCB_CONFIG_WINDOW_SIBLING:
        s = "CONFIG_WINDOW_SIBLING";
        break;
    case XCB_CONFIG_WINDOW_STACK_MODE:
        s = "CONFIG_WINDOW_STACK_MODE";
        break;
    }
    *(const char**)ret = s;
}
static void host_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_HOST_MODE_INSERT:
        s = "HOST_MODE_INSERT";
        break;
    case XCB_HOST_MODE_DELETE:
        s = "HOST_MODE_DELETE";
        break;
    }
    *(const char**)ret = s;
}
static void gravity_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GRAVITY_BIT_FORGET:
        s = "GRAVITY_BIT_FORGET";
        break;
    case XCB_GRAVITY_NORTH_WEST:
        s = "GRAVITY_NORTH_WEST";
        break;
    case XCB_GRAVITY_NORTH:
        s = "GRAVITY_NORTH";
        break;
    case XCB_GRAVITY_NORTH_EAST:
        s = "GRAVITY_NORTH_EAST";
        break;
    case XCB_GRAVITY_WEST:
        s = "GRAVITY_WEST";
        break;
    case XCB_GRAVITY_CENTER:
        s = "GRAVITY_CENTER";
        break;
    case XCB_GRAVITY_EAST:
        s = "GRAVITY_EAST";
        break;
    case XCB_GRAVITY_SOUTH_WEST:
        s = "GRAVITY_SOUTH_WEST";
        break;
    case XCB_GRAVITY_SOUTH:
        s = "GRAVITY_SOUTH";
        break;
    case XCB_GRAVITY_SOUTH_EAST:
        s = "GRAVITY_SOUTH_EAST";
        break;
    case XCB_GRAVITY_STATIC:
        s = "GRAVITY_STATIC";
        break;
    }
    *(const char**)ret = s;
}
static void window_enum_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_WINDOW_NONE:
        s = "WINDOW_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void notify_detail_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_NOTIFY_DETAIL_ANCESTOR:
        s = "NOTIFY_DETAIL_ANCESTOR";
        break;
    case XCB_NOTIFY_DETAIL_VIRTUAL:
        s = "NOTIFY_DETAIL_VIRTUAL";
        break;
    case XCB_NOTIFY_DETAIL_INFERIOR:
        s = "NOTIFY_DETAIL_INFERIOR";
        break;
    case XCB_NOTIFY_DETAIL_NONLINEAR:
        s = "NOTIFY_DETAIL_NONLINEAR";
        break;
    case XCB_NOTIFY_DETAIL_NONLINEAR_VIRTUAL:
        s = "NOTIFY_DETAIL_NONLINEAR_VIRTUAL";
        break;
    case XCB_NOTIFY_DETAIL_POINTER:
        s = "NOTIFY_DETAIL_POINTER";
        break;
    case XCB_NOTIFY_DETAIL_POINTER_ROOT:
        s = "NOTIFY_DETAIL_POINTER_ROOT";
        break;
    case XCB_NOTIFY_DETAIL_NONE:
        s = "NOTIFY_DETAIL_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void colormap_alloc_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_COLORMAP_ALLOC_NONE:
        s = "COLORMAP_ALLOC_NONE";
        break;
    case XCB_COLORMAP_ALLOC_ALL:
        s = "COLORMAP_ALLOC_ALL";
        break;
    }
    *(const char**)ret = s;
}
static void motion_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_MOTION_NORMAL:
        s = "MOTION_NORMAL";
        break;
    case XCB_MOTION_HINT:
        s = "MOTION_HINT";
        break;
    }
    *(const char**)ret = s;
}
static void line_style_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_LINE_STYLE_SOLID:
        s = "LINE_STYLE_SOLID";
        break;
    case XCB_LINE_STYLE_ON_OFF_DASH:
        s = "LINE_STYLE_ON_OFF_DASH";
        break;
    case XCB_LINE_STYLE_DOUBLE_DASH:
        s = "LINE_STYLE_DOUBLE_DASH";
        break;
    }
    *(const char**)ret = s;
}
static void grab_mode_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_GRAB_MODE_SYNC:
        s = "GRAB_MODE_SYNC";
        break;
    case XCB_GRAB_MODE_ASYNC:
        s = "GRAB_MODE_ASYNC";
        break;
    }
    *(const char**)ret = s;
}
static void image_format_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_IMAGE_FORMAT_XY_BITMAP:
        s = "IMAGE_FORMAT_XY_BITMAP";
        break;
    case XCB_IMAGE_FORMAT_XY_PIXMAP:
        s = "IMAGE_FORMAT_XY_PIXMAP";
        break;
    case XCB_IMAGE_FORMAT_Z_PIXMAP:
        s = "IMAGE_FORMAT_Z_PIXMAP";
        break;
    }
    *(const char**)ret = s;
}
static void button_mask_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_BUTTON_MASK_1:
        s = "BUTTON_MASK_1";
        break;
    case XCB_BUTTON_MASK_2:
        s = "BUTTON_MASK_2";
        break;
    case XCB_BUTTON_MASK_3:
        s = "BUTTON_MASK_3";
        break;
    case XCB_BUTTON_MASK_4:
        s = "BUTTON_MASK_4";
        break;
    case XCB_BUTTON_MASK_5:
        s = "BUTTON_MASK_5";
        break;
    case XCB_BUTTON_MASK_ANY:
        s = "BUTTON_MASK_ANY";
        break;
    }
    *(const char**)ret = s;
}
static void clip_ordering_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_CLIP_ORDERING_UNSORTED:
        s = "CLIP_ORDERING_UNSORTED";
        break;
    case XCB_CLIP_ORDERING_Y_SORTED:
        s = "CLIP_ORDERING_Y_SORTED";
        break;
    case XCB_CLIP_ORDERING_YX_SORTED:
        s = "CLIP_ORDERING_YX_SORTED";
        break;
    case XCB_CLIP_ORDERING_YX_BANDED:
        s = "CLIP_ORDERING_YX_BANDED";
        break;
    }
    *(const char**)ret = s;
}
static void exposures_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_EXPOSURES_NOT_ALLOWED:
        s = "EXPOSURES_NOT_ALLOWED";
        break;
    case XCB_EXPOSURES_ALLOWED:
        s = "EXPOSURES_ALLOWED";
        break;
    case XCB_EXPOSURES_DEFAULT:
        s = "EXPOSURES_DEFAULT";
        break;
    }
    *(const char**)ret = s;
}
static void join_style_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_JOIN_STYLE_MITER:
        s = "JOIN_STYLE_MITER";
        break;
    case XCB_JOIN_STYLE_ROUND:
        s = "JOIN_STYLE_ROUND";
        break;
    case XCB_JOIN_STYLE_BEVEL:
        s = "JOIN_STYLE_BEVEL";
        break;
    }
    *(const char**)ret = s;
}
static void color_flag_t_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case XCB_COLOR_FLAG_RED:
        s = "COLOR_FLAG_RED";
        break;
    case XCB_COLOR_FLAG_GREEN:
        s = "COLOR_FLAG_GREEN";
        break;
    case XCB_COLOR_FLAG_BLUE:
        s = "COLOR_FLAG_BLUE";
        break;
    }
    *(const char**)ret = s;
}

#define ENUMS_CONSTS \
STD2_CONST("GX_CLEAR", INT, XCB_GX_CLEAR) \
STD2_CONST("GX_AND", INT, XCB_GX_AND) \
STD2_CONST("GX_AND_REVERSE", INT, XCB_GX_AND_REVERSE) \
STD2_CONST("GX_COPY", INT, XCB_GX_COPY) \
STD2_CONST("GX_AND_INVERTED", INT, XCB_GX_AND_INVERTED) \
STD2_CONST("GX_NOOP", INT, XCB_GX_NOOP) \
STD2_CONST("GX_XOR", INT, XCB_GX_XOR) \
STD2_CONST("GX_OR", INT, XCB_GX_OR) \
STD2_CONST("GX_NOR", INT, XCB_GX_NOR) \
STD2_CONST("GX_EQUIV", INT, XCB_GX_EQUIV) \
STD2_CONST("GX_INVERT", INT, XCB_GX_INVERT) \
STD2_CONST("GX_OR_REVERSE", INT, XCB_GX_OR_REVERSE) \
STD2_CONST("GX_COPY_INVERTED", INT, XCB_GX_COPY_INVERTED) \
STD2_CONST("GX_OR_INVERTED", INT, XCB_GX_OR_INVERTED) \
STD2_CONST("GX_NAND", INT, XCB_GX_NAND) \
STD2_CONST("GX_SET", INT, XCB_GX_SET) \
STD2_CONST("ALLOW_ASYNC_POINTER", INT, XCB_ALLOW_ASYNC_POINTER) \
STD2_CONST("ALLOW_SYNC_POINTER", INT, XCB_ALLOW_SYNC_POINTER) \
STD2_CONST("ALLOW_REPLAY_POINTER", INT, XCB_ALLOW_REPLAY_POINTER) \
STD2_CONST("ALLOW_ASYNC_KEYBOARD", INT, XCB_ALLOW_ASYNC_KEYBOARD) \
STD2_CONST("ALLOW_SYNC_KEYBOARD", INT, XCB_ALLOW_SYNC_KEYBOARD) \
STD2_CONST("ALLOW_REPLAY_KEYBOARD", INT, XCB_ALLOW_REPLAY_KEYBOARD) \
STD2_CONST("ALLOW_ASYNC_BOTH", INT, XCB_ALLOW_ASYNC_BOTH) \
STD2_CONST("ALLOW_SYNC_BOTH", INT, XCB_ALLOW_SYNC_BOTH) \
STD2_CONST("MOD_MASK_SHIFT", INT, XCB_MOD_MASK_SHIFT) \
STD2_CONST("MOD_MASK_LOCK", INT, XCB_MOD_MASK_LOCK) \
STD2_CONST("MOD_MASK_CONTROL", INT, XCB_MOD_MASK_CONTROL) \
STD2_CONST("MOD_MASK_1", INT, XCB_MOD_MASK_1) \
STD2_CONST("MOD_MASK_2", INT, XCB_MOD_MASK_2) \
STD2_CONST("MOD_MASK_3", INT, XCB_MOD_MASK_3) \
STD2_CONST("MOD_MASK_4", INT, XCB_MOD_MASK_4) \
STD2_CONST("MOD_MASK_5", INT, XCB_MOD_MASK_5) \
STD2_CONST("MOD_MASK_ANY", INT, XCB_MOD_MASK_ANY) \
STD2_CONST("GRAB_STATUS_SUCCESS", INT, XCB_GRAB_STATUS_SUCCESS) \
STD2_CONST("GRAB_STATUS_ALREADY_GRABBED", INT, XCB_GRAB_STATUS_ALREADY_GRABBED) \
STD2_CONST("GRAB_STATUS_INVALID_TIME", INT, XCB_GRAB_STATUS_INVALID_TIME) \
STD2_CONST("GRAB_STATUS_NOT_VIEWABLE", INT, XCB_GRAB_STATUS_NOT_VIEWABLE) \
STD2_CONST("GRAB_STATUS_FROZEN", INT, XCB_GRAB_STATUS_FROZEN) \
STD2_CONST("CLOSE_DOWN_DESTROY_ALL", INT, XCB_CLOSE_DOWN_DESTROY_ALL) \
STD2_CONST("CLOSE_DOWN_RETAIN_PERMANENT", INT, XCB_CLOSE_DOWN_RETAIN_PERMANENT) \
STD2_CONST("CLOSE_DOWN_RETAIN_TEMPORARY", INT, XCB_CLOSE_DOWN_RETAIN_TEMPORARY) \
STD2_CONST("MAPPING_MODIFIER", INT, XCB_MAPPING_MODIFIER) \
STD2_CONST("MAPPING_KEYBOARD", INT, XCB_MAPPING_KEYBOARD) \
STD2_CONST("MAPPING_POINTER", INT, XCB_MAPPING_POINTER) \
STD2_CONST("SUBWINDOW_MODE_CLIP_BY_CHILDREN", INT, XCB_SUBWINDOW_MODE_CLIP_BY_CHILDREN) \
STD2_CONST("SUBWINDOW_MODE_INCLUDE_INFERIORS", INT, XCB_SUBWINDOW_MODE_INCLUDE_INFERIORS) \
STD2_CONST("ARC_MODE_CHORD", INT, XCB_ARC_MODE_CHORD) \
STD2_CONST("ARC_MODE_PIE_SLICE", INT, XCB_ARC_MODE_PIE_SLICE) \
STD2_CONST("MAP_INDEX_SHIFT", INT, XCB_MAP_INDEX_SHIFT) \
STD2_CONST("MAP_INDEX_LOCK", INT, XCB_MAP_INDEX_LOCK) \
STD2_CONST("MAP_INDEX_CONTROL", INT, XCB_MAP_INDEX_CONTROL) \
STD2_CONST("MAP_INDEX_1", INT, XCB_MAP_INDEX_1) \
STD2_CONST("MAP_INDEX_2", INT, XCB_MAP_INDEX_2) \
STD2_CONST("MAP_INDEX_3", INT, XCB_MAP_INDEX_3) \
STD2_CONST("MAP_INDEX_4", INT, XCB_MAP_INDEX_4) \
STD2_CONST("MAP_INDEX_5", INT, XCB_MAP_INDEX_5) \
STD2_CONST("GET_PROPERTY_TYPE_ANY", INT, XCB_GET_PROPERTY_TYPE_ANY) \
STD2_CONST("CIRCULATE_RAISE_LOWEST", INT, XCB_CIRCULATE_RAISE_LOWEST) \
STD2_CONST("CIRCULATE_LOWER_HIGHEST", INT, XCB_CIRCULATE_LOWER_HIGHEST) \
STD2_CONST("WINDOW_CLASS_COPY_FROM_PARENT", INT, XCB_WINDOW_CLASS_COPY_FROM_PARENT) \
STD2_CONST("WINDOW_CLASS_INPUT_OUTPUT", INT, XCB_WINDOW_CLASS_INPUT_OUTPUT) \
STD2_CONST("WINDOW_CLASS_INPUT_ONLY", INT, XCB_WINDOW_CLASS_INPUT_ONLY) \
STD2_CONST("PLACE_ON_TOP", INT, XCB_PLACE_ON_TOP) \
STD2_CONST("PLACE_ON_BOTTOM", INT, XCB_PLACE_ON_BOTTOM) \
STD2_CONST("CURSOR_NONE", INT, XCB_CURSOR_NONE) \
STD2_CONST("STACK_MODE_ABOVE", INT, XCB_STACK_MODE_ABOVE) \
STD2_CONST("STACK_MODE_BELOW", INT, XCB_STACK_MODE_BELOW) \
STD2_CONST("STACK_MODE_TOP_IF", INT, XCB_STACK_MODE_TOP_IF) \
STD2_CONST("STACK_MODE_BOTTOM_IF", INT, XCB_STACK_MODE_BOTTOM_IF) \
STD2_CONST("STACK_MODE_OPPOSITE", INT, XCB_STACK_MODE_OPPOSITE) \
STD2_CONST("KB_KEY_CLICK_PERCENT", INT, XCB_KB_KEY_CLICK_PERCENT) \
STD2_CONST("KB_BELL_PERCENT", INT, XCB_KB_BELL_PERCENT) \
STD2_CONST("KB_BELL_PITCH", INT, XCB_KB_BELL_PITCH) \
STD2_CONST("KB_BELL_DURATION", INT, XCB_KB_BELL_DURATION) \
STD2_CONST("KB_LED", INT, XCB_KB_LED) \
STD2_CONST("KB_LED_MODE", INT, XCB_KB_LED_MODE) \
STD2_CONST("KB_KEY", INT, XCB_KB_KEY) \
STD2_CONST("KB_AUTO_REPEAT_MODE", INT, XCB_KB_AUTO_REPEAT_MODE) \
STD2_CONST("BACK_PIXMAP_NONE", INT, XCB_BACK_PIXMAP_NONE) \
STD2_CONST("BACK_PIXMAP_PARENT_RELATIVE", INT, XCB_BACK_PIXMAP_PARENT_RELATIVE) \
STD2_CONST("NOTIFY_MODE_NORMAL", INT, XCB_NOTIFY_MODE_NORMAL) \
STD2_CONST("NOTIFY_MODE_GRAB", INT, XCB_NOTIFY_MODE_GRAB) \
STD2_CONST("NOTIFY_MODE_UNGRAB", INT, XCB_NOTIFY_MODE_UNGRAB) \
STD2_CONST("NOTIFY_MODE_WHILE_GRABBED", INT, XCB_NOTIFY_MODE_WHILE_GRABBED) \
STD2_CONST("SET_MODE_INSERT", INT, XCB_SET_MODE_INSERT) \
STD2_CONST("SET_MODE_DELETE", INT, XCB_SET_MODE_DELETE) \
STD2_CONST("AUTO_REPEAT_MODE_OFF", INT, XCB_AUTO_REPEAT_MODE_OFF) \
STD2_CONST("AUTO_REPEAT_MODE_ON", INT, XCB_AUTO_REPEAT_MODE_ON) \
STD2_CONST("AUTO_REPEAT_MODE_DEFAULT", INT, XCB_AUTO_REPEAT_MODE_DEFAULT) \
STD2_CONST("BACKING_STORE_NOT_USEFUL", INT, XCB_BACKING_STORE_NOT_USEFUL) \
STD2_CONST("BACKING_STORE_WHEN_MAPPED", INT, XCB_BACKING_STORE_WHEN_MAPPED) \
STD2_CONST("BACKING_STORE_ALWAYS", INT, XCB_BACKING_STORE_ALWAYS) \
STD2_CONST("PROP_MODE_REPLACE", INT, XCB_PROP_MODE_REPLACE) \
STD2_CONST("PROP_MODE_PREPEND", INT, XCB_PROP_MODE_PREPEND) \
STD2_CONST("PROP_MODE_APPEND", INT, XCB_PROP_MODE_APPEND) \
STD2_CONST("ATOM_NONE", INT, XCB_ATOM_NONE) \
STD2_CONST("VISUAL_CLASS_STATIC_GRAY", INT, XCB_VISUAL_CLASS_STATIC_GRAY) \
STD2_CONST("VISUAL_CLASS_GRAY_SCALE", INT, XCB_VISUAL_CLASS_GRAY_SCALE) \
STD2_CONST("VISUAL_CLASS_STATIC_COLOR", INT, XCB_VISUAL_CLASS_STATIC_COLOR) \
STD2_CONST("VISUAL_CLASS_PSEUDO_COLOR", INT, XCB_VISUAL_CLASS_PSEUDO_COLOR) \
STD2_CONST("VISUAL_CLASS_TRUE_COLOR", INT, XCB_VISUAL_CLASS_TRUE_COLOR) \
STD2_CONST("VISUAL_CLASS_DIRECT_COLOR", INT, XCB_VISUAL_CLASS_DIRECT_COLOR) \
STD2_CONST("CW_BACK_PIXMAP", INT, XCB_CW_BACK_PIXMAP) \
STD2_CONST("CW_BACK_PIXEL", INT, XCB_CW_BACK_PIXEL) \
STD2_CONST("CW_BORDER_PIXMAP", INT, XCB_CW_BORDER_PIXMAP) \
STD2_CONST("CW_BORDER_PIXEL", INT, XCB_CW_BORDER_PIXEL) \
STD2_CONST("CW_BIT_GRAVITY", INT, XCB_CW_BIT_GRAVITY) \
STD2_CONST("CW_WIN_GRAVITY", INT, XCB_CW_WIN_GRAVITY) \
STD2_CONST("CW_BACKING_STORE", INT, XCB_CW_BACKING_STORE) \
STD2_CONST("CW_BACKING_PLANES", INT, XCB_CW_BACKING_PLANES) \
STD2_CONST("CW_BACKING_PIXEL", INT, XCB_CW_BACKING_PIXEL) \
STD2_CONST("CW_OVERRIDE_REDIRECT", INT, XCB_CW_OVERRIDE_REDIRECT) \
STD2_CONST("CW_SAVE_UNDER", INT, XCB_CW_SAVE_UNDER) \
STD2_CONST("CW_EVENT_MASK", INT, XCB_CW_EVENT_MASK) \
STD2_CONST("CW_DONT_PROPAGATE", INT, XCB_CW_DONT_PROPAGATE) \
STD2_CONST("CW_COLORMAP", INT, XCB_CW_COLORMAP) \
STD2_CONST("CW_CURSOR", INT, XCB_CW_CURSOR) \
STD2_CONST("INPUT_FOCUS_NONE", INT, XCB_INPUT_FOCUS_NONE) \
STD2_CONST("INPUT_FOCUS_POINTER_ROOT", INT, XCB_INPUT_FOCUS_POINTER_ROOT) \
STD2_CONST("INPUT_FOCUS_PARENT", INT, XCB_INPUT_FOCUS_PARENT) \
STD2_CONST("INPUT_FOCUS_FOLLOW_KEYBOARD", INT, XCB_INPUT_FOCUS_FOLLOW_KEYBOARD) \
STD2_CONST("KILL_ALL_TEMPORARY", INT, XCB_KILL_ALL_TEMPORARY) \
STD2_CONST("SEND_EVENT_DEST_POINTER_WINDOW", INT, XCB_SEND_EVENT_DEST_POINTER_WINDOW) \
STD2_CONST("SEND_EVENT_DEST_ITEM_FOCUS", INT, XCB_SEND_EVENT_DEST_ITEM_FOCUS) \
STD2_CONST("COORD_MODE_ORIGIN", INT, XCB_COORD_MODE_ORIGIN) \
STD2_CONST("COORD_MODE_PREVIOUS", INT, XCB_COORD_MODE_PREVIOUS) \
STD2_CONST("ACCESS_CONTROL_DISABLE", INT, XCB_ACCESS_CONTROL_DISABLE) \
STD2_CONST("ACCESS_CONTROL_ENABLE", INT, XCB_ACCESS_CONTROL_ENABLE) \
STD2_CONST("PROPERTY_NEW_VALUE", INT, XCB_PROPERTY_NEW_VALUE) \
STD2_CONST("PROPERTY_DELETE", INT, XCB_PROPERTY_DELETE) \
STD2_CONST("FILL_STYLE_SOLID", INT, XCB_FILL_STYLE_SOLID) \
STD2_CONST("FILL_STYLE_TILED", INT, XCB_FILL_STYLE_TILED) \
STD2_CONST("FILL_STYLE_STIPPLED", INT, XCB_FILL_STYLE_STIPPLED) \
STD2_CONST("FILL_STYLE_OPAQUE_STIPPLED", INT, XCB_FILL_STYLE_OPAQUE_STIPPLED) \
STD2_CONST("QUERY_SHAPE_OF_LARGEST_CURSOR", INT, XCB_QUERY_SHAPE_OF_LARGEST_CURSOR) \
STD2_CONST("QUERY_SHAPE_OF_FASTEST_TILE", INT, XCB_QUERY_SHAPE_OF_FASTEST_TILE) \
STD2_CONST("QUERY_SHAPE_OF_FASTEST_STIPPLE", INT, XCB_QUERY_SHAPE_OF_FASTEST_STIPPLE) \
STD2_CONST("PIXMAP_NONE", INT, XCB_PIXMAP_NONE) \
STD2_CONST("MAP_STATE_UNMAPPED", INT, XCB_MAP_STATE_UNMAPPED) \
STD2_CONST("MAP_STATE_UNVIEWABLE", INT, XCB_MAP_STATE_UNVIEWABLE) \
STD2_CONST("MAP_STATE_VIEWABLE", INT, XCB_MAP_STATE_VIEWABLE) \
STD2_CONST("EVENT_MASK_NO_EVENT", INT, XCB_EVENT_MASK_NO_EVENT) \
STD2_CONST("EVENT_MASK_KEY_PRESS", INT, XCB_EVENT_MASK_KEY_PRESS) \
STD2_CONST("EVENT_MASK_KEY_RELEASE", INT, XCB_EVENT_MASK_KEY_RELEASE) \
STD2_CONST("EVENT_MASK_BUTTON_PRESS", INT, XCB_EVENT_MASK_BUTTON_PRESS) \
STD2_CONST("EVENT_MASK_BUTTON_RELEASE", INT, XCB_EVENT_MASK_BUTTON_RELEASE) \
STD2_CONST("EVENT_MASK_ENTER_WINDOW", INT, XCB_EVENT_MASK_ENTER_WINDOW) \
STD2_CONST("EVENT_MASK_LEAVE_WINDOW", INT, XCB_EVENT_MASK_LEAVE_WINDOW) \
STD2_CONST("EVENT_MASK_POINTER_MOTION", INT, XCB_EVENT_MASK_POINTER_MOTION) \
STD2_CONST("EVENT_MASK_POINTER_MOTION_HINT", INT, XCB_EVENT_MASK_POINTER_MOTION_HINT) \
STD2_CONST("EVENT_MASK_BUTTON_1_MOTION", INT, XCB_EVENT_MASK_BUTTON_1_MOTION) \
STD2_CONST("EVENT_MASK_BUTTON_2_MOTION", INT, XCB_EVENT_MASK_BUTTON_2_MOTION) \
STD2_CONST("EVENT_MASK_BUTTON_3_MOTION", INT, XCB_EVENT_MASK_BUTTON_3_MOTION) \
STD2_CONST("EVENT_MASK_BUTTON_4_MOTION", INT, XCB_EVENT_MASK_BUTTON_4_MOTION) \
STD2_CONST("EVENT_MASK_BUTTON_5_MOTION", INT, XCB_EVENT_MASK_BUTTON_5_MOTION) \
STD2_CONST("EVENT_MASK_BUTTON_MOTION", INT, XCB_EVENT_MASK_BUTTON_MOTION) \
STD2_CONST("EVENT_MASK_KEYMAP_STATE", INT, XCB_EVENT_MASK_KEYMAP_STATE) \
STD2_CONST("EVENT_MASK_EXPOSURE", INT, XCB_EVENT_MASK_EXPOSURE) \
STD2_CONST("EVENT_MASK_VISIBILITY_CHANGE", INT, XCB_EVENT_MASK_VISIBILITY_CHANGE) \
STD2_CONST("EVENT_MASK_STRUCTURE_NOTIFY", INT, XCB_EVENT_MASK_STRUCTURE_NOTIFY) \
STD2_CONST("EVENT_MASK_RESIZE_REDIRECT", INT, XCB_EVENT_MASK_RESIZE_REDIRECT) \
STD2_CONST("EVENT_MASK_SUBSTRUCTURE_NOTIFY", INT, XCB_EVENT_MASK_SUBSTRUCTURE_NOTIFY) \
STD2_CONST("EVENT_MASK_SUBSTRUCTURE_REDIRECT", INT, XCB_EVENT_MASK_SUBSTRUCTURE_REDIRECT) \
STD2_CONST("EVENT_MASK_FOCUS_CHANGE", INT, XCB_EVENT_MASK_FOCUS_CHANGE) \
STD2_CONST("EVENT_MASK_PROPERTY_CHANGE", INT, XCB_EVENT_MASK_PROPERTY_CHANGE) \
STD2_CONST("EVENT_MASK_COLOR_MAP_CHANGE", INT, XCB_EVENT_MASK_COLOR_MAP_CHANGE) \
STD2_CONST("EVENT_MASK_OWNER_GRAB_BUTTON", INT, XCB_EVENT_MASK_OWNER_GRAB_BUTTON) \
STD2_CONST("FONT_NONE", INT, XCB_FONT_NONE) \
STD2_CONST("FAMILY_INTERNET", INT, XCB_FAMILY_INTERNET) \
STD2_CONST("FAMILY_DECNET", INT, XCB_FAMILY_DECNET) \
STD2_CONST("FAMILY_CHAOS", INT, XCB_FAMILY_CHAOS) \
STD2_CONST("FAMILY_SERVER_INTERPRETED", INT, XCB_FAMILY_SERVER_INTERPRETED) \
STD2_CONST("FAMILY_INTERNET_6", INT, XCB_FAMILY_INTERNET_6) \
STD2_CONST("COLORMAP_STATE_UNINSTALLED", INT, XCB_COLORMAP_STATE_UNINSTALLED) \
STD2_CONST("COLORMAP_STATE_INSTALLED", INT, XCB_COLORMAP_STATE_INSTALLED) \
STD2_CONST("BLANKING_NOT_PREFERRED", INT, XCB_BLANKING_NOT_PREFERRED) \
STD2_CONST("BLANKING_PREFERRED", INT, XCB_BLANKING_PREFERRED) \
STD2_CONST("BLANKING_DEFAULT", INT, XCB_BLANKING_DEFAULT) \
STD2_CONST("COLORMAP_NONE", INT, XCB_COLORMAP_NONE) \
STD2_CONST("TIME_CURRENT_TIME", INT, XCB_TIME_CURRENT_TIME) \
STD2_CONST("GC_FUNCTION", INT, XCB_GC_FUNCTION) \
STD2_CONST("GC_PLANE_MASK", INT, XCB_GC_PLANE_MASK) \
STD2_CONST("GC_FOREGROUND", INT, XCB_GC_FOREGROUND) \
STD2_CONST("GC_BACKGROUND", INT, XCB_GC_BACKGROUND) \
STD2_CONST("GC_LINE_WIDTH", INT, XCB_GC_LINE_WIDTH) \
STD2_CONST("GC_LINE_STYLE", INT, XCB_GC_LINE_STYLE) \
STD2_CONST("GC_CAP_STYLE", INT, XCB_GC_CAP_STYLE) \
STD2_CONST("GC_JOIN_STYLE", INT, XCB_GC_JOIN_STYLE) \
STD2_CONST("GC_FILL_STYLE", INT, XCB_GC_FILL_STYLE) \
STD2_CONST("GC_FILL_RULE", INT, XCB_GC_FILL_RULE) \
STD2_CONST("GC_TILE", INT, XCB_GC_TILE) \
STD2_CONST("GC_STIPPLE", INT, XCB_GC_STIPPLE) \
STD2_CONST("GC_TILE_STIPPLE_ORIGIN_X", INT, XCB_GC_TILE_STIPPLE_ORIGIN_X) \
STD2_CONST("GC_TILE_STIPPLE_ORIGIN_Y", INT, XCB_GC_TILE_STIPPLE_ORIGIN_Y) \
STD2_CONST("GC_FONT", INT, XCB_GC_FONT) \
STD2_CONST("GC_SUBWINDOW_MODE", INT, XCB_GC_SUBWINDOW_MODE) \
STD2_CONST("GC_GRAPHICS_EXPOSURES", INT, XCB_GC_GRAPHICS_EXPOSURES) \
STD2_CONST("GC_CLIP_ORIGIN_X", INT, XCB_GC_CLIP_ORIGIN_X) \
STD2_CONST("GC_CLIP_ORIGIN_Y", INT, XCB_GC_CLIP_ORIGIN_Y) \
STD2_CONST("GC_CLIP_MASK", INT, XCB_GC_CLIP_MASK) \
STD2_CONST("GC_DASH_OFFSET", INT, XCB_GC_DASH_OFFSET) \
STD2_CONST("GC_DASH_LIST", INT, XCB_GC_DASH_LIST) \
STD2_CONST("GC_ARC_MODE", INT, XCB_GC_ARC_MODE) \
STD2_CONST("SCREEN_SAVER_RESET", INT, XCB_SCREEN_SAVER_RESET) \
STD2_CONST("SCREEN_SAVER_ACTIVE", INT, XCB_SCREEN_SAVER_ACTIVE) \
STD2_CONST("LED_MODE_OFF", INT, XCB_LED_MODE_OFF) \
STD2_CONST("LED_MODE_ON", INT, XCB_LED_MODE_ON) \
STD2_CONST("FONT_DRAW_LEFT_TO_RIGHT", INT, XCB_FONT_DRAW_LEFT_TO_RIGHT) \
STD2_CONST("FONT_DRAW_RIGHT_TO_LEFT", INT, XCB_FONT_DRAW_RIGHT_TO_LEFT) \
STD2_CONST("CAP_STYLE_NOT_LAST", INT, XCB_CAP_STYLE_NOT_LAST) \
STD2_CONST("CAP_STYLE_BUTT", INT, XCB_CAP_STYLE_BUTT) \
STD2_CONST("CAP_STYLE_ROUND", INT, XCB_CAP_STYLE_ROUND) \
STD2_CONST("CAP_STYLE_PROJECTING", INT, XCB_CAP_STYLE_PROJECTING) \
STD2_CONST("FILL_RULE_EVEN_ODD", INT, XCB_FILL_RULE_EVEN_ODD) \
STD2_CONST("FILL_RULE_WINDING", INT, XCB_FILL_RULE_WINDING) \
STD2_CONST("IMAGE_ORDER_LSB_FIRST", INT, XCB_IMAGE_ORDER_LSB_FIRST) \
STD2_CONST("IMAGE_ORDER_MSB_FIRST", INT, XCB_IMAGE_ORDER_MSB_FIRST) \
STD2_CONST("POLY_SHAPE_COMPLEX", INT, XCB_POLY_SHAPE_COMPLEX) \
STD2_CONST("POLY_SHAPE_NONCONVEX", INT, XCB_POLY_SHAPE_NONCONVEX) \
STD2_CONST("POLY_SHAPE_CONVEX", INT, XCB_POLY_SHAPE_CONVEX) \
STD2_CONST("VISIBILITY_UNOBSCURED", INT, XCB_VISIBILITY_UNOBSCURED) \
STD2_CONST("VISIBILITY_PARTIALLY_OBSCURED", INT, XCB_VISIBILITY_PARTIALLY_OBSCURED) \
STD2_CONST("VISIBILITY_FULLY_OBSCURED", INT, XCB_VISIBILITY_FULLY_OBSCURED) \
STD2_CONST("BUTTON_INDEX_ANY", INT, XCB_BUTTON_INDEX_ANY) \
STD2_CONST("BUTTON_INDEX_1", INT, XCB_BUTTON_INDEX_1) \
STD2_CONST("BUTTON_INDEX_2", INT, XCB_BUTTON_INDEX_2) \
STD2_CONST("BUTTON_INDEX_3", INT, XCB_BUTTON_INDEX_3) \
STD2_CONST("BUTTON_INDEX_4", INT, XCB_BUTTON_INDEX_4) \
STD2_CONST("BUTTON_INDEX_5", INT, XCB_BUTTON_INDEX_5) \
STD2_CONST("KEY_BUT_MASK_SHIFT", INT, XCB_KEY_BUT_MASK_SHIFT) \
STD2_CONST("KEY_BUT_MASK_LOCK", INT, XCB_KEY_BUT_MASK_LOCK) \
STD2_CONST("KEY_BUT_MASK_CONTROL", INT, XCB_KEY_BUT_MASK_CONTROL) \
STD2_CONST("KEY_BUT_MASK_MOD_1", INT, XCB_KEY_BUT_MASK_MOD_1) \
STD2_CONST("KEY_BUT_MASK_MOD_2", INT, XCB_KEY_BUT_MASK_MOD_2) \
STD2_CONST("KEY_BUT_MASK_MOD_3", INT, XCB_KEY_BUT_MASK_MOD_3) \
STD2_CONST("KEY_BUT_MASK_MOD_4", INT, XCB_KEY_BUT_MASK_MOD_4) \
STD2_CONST("KEY_BUT_MASK_MOD_5", INT, XCB_KEY_BUT_MASK_MOD_5) \
STD2_CONST("KEY_BUT_MASK_BUTTON_1", INT, XCB_KEY_BUT_MASK_BUTTON_1) \
STD2_CONST("KEY_BUT_MASK_BUTTON_2", INT, XCB_KEY_BUT_MASK_BUTTON_2) \
STD2_CONST("KEY_BUT_MASK_BUTTON_3", INT, XCB_KEY_BUT_MASK_BUTTON_3) \
STD2_CONST("KEY_BUT_MASK_BUTTON_4", INT, XCB_KEY_BUT_MASK_BUTTON_4) \
STD2_CONST("KEY_BUT_MASK_BUTTON_5", INT, XCB_KEY_BUT_MASK_BUTTON_5) \
STD2_CONST("GRAB_ANY", INT, XCB_GRAB_ANY) \
STD2_CONST("MAPPING_STATUS_SUCCESS", INT, XCB_MAPPING_STATUS_SUCCESS) \
STD2_CONST("MAPPING_STATUS_BUSY", INT, XCB_MAPPING_STATUS_BUSY) \
STD2_CONST("MAPPING_STATUS_FAILURE", INT, XCB_MAPPING_STATUS_FAILURE) \
STD2_CONST("CONFIG_WINDOW_X", INT, XCB_CONFIG_WINDOW_X) \
STD2_CONST("CONFIG_WINDOW_Y", INT, XCB_CONFIG_WINDOW_Y) \
STD2_CONST("CONFIG_WINDOW_WIDTH", INT, XCB_CONFIG_WINDOW_WIDTH) \
STD2_CONST("CONFIG_WINDOW_HEIGHT", INT, XCB_CONFIG_WINDOW_HEIGHT) \
STD2_CONST("CONFIG_WINDOW_BORDER_WIDTH", INT, XCB_CONFIG_WINDOW_BORDER_WIDTH) \
STD2_CONST("CONFIG_WINDOW_SIBLING", INT, XCB_CONFIG_WINDOW_SIBLING) \
STD2_CONST("CONFIG_WINDOW_STACK_MODE", INT, XCB_CONFIG_WINDOW_STACK_MODE) \
STD2_CONST("HOST_MODE_INSERT", INT, XCB_HOST_MODE_INSERT) \
STD2_CONST("HOST_MODE_DELETE", INT, XCB_HOST_MODE_DELETE) \
STD2_CONST("GRAVITY_BIT_FORGET", INT, XCB_GRAVITY_BIT_FORGET) \
STD2_CONST("GRAVITY_WIN_UNMAP", INT, XCB_GRAVITY_WIN_UNMAP) \
STD2_CONST("GRAVITY_NORTH_WEST", INT, XCB_GRAVITY_NORTH_WEST) \
STD2_CONST("GRAVITY_NORTH", INT, XCB_GRAVITY_NORTH) \
STD2_CONST("GRAVITY_NORTH_EAST", INT, XCB_GRAVITY_NORTH_EAST) \
STD2_CONST("GRAVITY_WEST", INT, XCB_GRAVITY_WEST) \
STD2_CONST("GRAVITY_CENTER", INT, XCB_GRAVITY_CENTER) \
STD2_CONST("GRAVITY_EAST", INT, XCB_GRAVITY_EAST) \
STD2_CONST("GRAVITY_SOUTH_WEST", INT, XCB_GRAVITY_SOUTH_WEST) \
STD2_CONST("GRAVITY_SOUTH", INT, XCB_GRAVITY_SOUTH) \
STD2_CONST("GRAVITY_SOUTH_EAST", INT, XCB_GRAVITY_SOUTH_EAST) \
STD2_CONST("GRAVITY_STATIC", INT, XCB_GRAVITY_STATIC) \
STD2_CONST("WINDOW_NONE", INT, XCB_WINDOW_NONE) \
STD2_CONST("NOTIFY_DETAIL_ANCESTOR", INT, XCB_NOTIFY_DETAIL_ANCESTOR) \
STD2_CONST("NOTIFY_DETAIL_VIRTUAL", INT, XCB_NOTIFY_DETAIL_VIRTUAL) \
STD2_CONST("NOTIFY_DETAIL_INFERIOR", INT, XCB_NOTIFY_DETAIL_INFERIOR) \
STD2_CONST("NOTIFY_DETAIL_NONLINEAR", INT, XCB_NOTIFY_DETAIL_NONLINEAR) \
STD2_CONST("NOTIFY_DETAIL_NONLINEAR_VIRTUAL", INT, XCB_NOTIFY_DETAIL_NONLINEAR_VIRTUAL) \
STD2_CONST("NOTIFY_DETAIL_POINTER", INT, XCB_NOTIFY_DETAIL_POINTER) \
STD2_CONST("NOTIFY_DETAIL_POINTER_ROOT", INT, XCB_NOTIFY_DETAIL_POINTER_ROOT) \
STD2_CONST("NOTIFY_DETAIL_NONE", INT, XCB_NOTIFY_DETAIL_NONE) \
STD2_CONST("COLORMAP_ALLOC_NONE", INT, XCB_COLORMAP_ALLOC_NONE) \
STD2_CONST("COLORMAP_ALLOC_ALL", INT, XCB_COLORMAP_ALLOC_ALL) \
STD2_CONST("MOTION_NORMAL", INT, XCB_MOTION_NORMAL) \
STD2_CONST("MOTION_HINT", INT, XCB_MOTION_HINT) \
STD2_CONST("LINE_STYLE_SOLID", INT, XCB_LINE_STYLE_SOLID) \
STD2_CONST("LINE_STYLE_ON_OFF_DASH", INT, XCB_LINE_STYLE_ON_OFF_DASH) \
STD2_CONST("LINE_STYLE_DOUBLE_DASH", INT, XCB_LINE_STYLE_DOUBLE_DASH) \
STD2_CONST("GRAB_MODE_SYNC", INT, XCB_GRAB_MODE_SYNC) \
STD2_CONST("GRAB_MODE_ASYNC", INT, XCB_GRAB_MODE_ASYNC) \
STD2_CONST("IMAGE_FORMAT_XY_BITMAP", INT, XCB_IMAGE_FORMAT_XY_BITMAP) \
STD2_CONST("IMAGE_FORMAT_XY_PIXMAP", INT, XCB_IMAGE_FORMAT_XY_PIXMAP) \
STD2_CONST("IMAGE_FORMAT_Z_PIXMAP", INT, XCB_IMAGE_FORMAT_Z_PIXMAP) \
STD2_CONST("BUTTON_MASK_1", INT, XCB_BUTTON_MASK_1) \
STD2_CONST("BUTTON_MASK_2", INT, XCB_BUTTON_MASK_2) \
STD2_CONST("BUTTON_MASK_3", INT, XCB_BUTTON_MASK_3) \
STD2_CONST("BUTTON_MASK_4", INT, XCB_BUTTON_MASK_4) \
STD2_CONST("BUTTON_MASK_5", INT, XCB_BUTTON_MASK_5) \
STD2_CONST("BUTTON_MASK_ANY", INT, XCB_BUTTON_MASK_ANY) \
STD2_CONST("CLIP_ORDERING_UNSORTED", INT, XCB_CLIP_ORDERING_UNSORTED) \
STD2_CONST("CLIP_ORDERING_Y_SORTED", INT, XCB_CLIP_ORDERING_Y_SORTED) \
STD2_CONST("CLIP_ORDERING_YX_SORTED", INT, XCB_CLIP_ORDERING_YX_SORTED) \
STD2_CONST("CLIP_ORDERING_YX_BANDED", INT, XCB_CLIP_ORDERING_YX_BANDED) \
STD2_CONST("EXPOSURES_NOT_ALLOWED", INT, XCB_EXPOSURES_NOT_ALLOWED) \
STD2_CONST("EXPOSURES_ALLOWED", INT, XCB_EXPOSURES_ALLOWED) \
STD2_CONST("EXPOSURES_DEFAULT", INT, XCB_EXPOSURES_DEFAULT) \
STD2_CONST("JOIN_STYLE_MITER", INT, XCB_JOIN_STYLE_MITER) \
STD2_CONST("JOIN_STYLE_ROUND", INT, XCB_JOIN_STYLE_ROUND) \
STD2_CONST("JOIN_STYLE_BEVEL", INT, XCB_JOIN_STYLE_BEVEL) \
STD2_CONST("COLOR_FLAG_RED", INT, XCB_COLOR_FLAG_RED) \
STD2_CONST("COLOR_FLAG_GREEN", INT, XCB_COLOR_FLAG_GREEN) \
STD2_CONST("COLOR_FLAG_BLUE", INT, XCB_COLOR_FLAG_BLUE) \

#define ENUMS_FUNCS \
STD2_FUNC("gx_t_to_string", "cs", "i", gx_t_to_string) \
STD2_FUNC("allow_t_to_string", "cs", "i", allow_t_to_string) \
STD2_FUNC("mod_mask_t_to_string", "cs", "i", mod_mask_t_to_string) \
STD2_FUNC("grab_status_t_to_string", "cs", "i", grab_status_t_to_string) \
STD2_FUNC("close_down_t_to_string", "cs", "i", close_down_t_to_string) \
STD2_FUNC("mapping_t_to_string", "cs", "i", mapping_t_to_string) \
STD2_FUNC("subwindow_mode_t_to_string", "cs", "i", subwindow_mode_t_to_string) \
STD2_FUNC("arc_mode_t_to_string", "cs", "i", arc_mode_t_to_string) \
STD2_FUNC("map_index_t_to_string", "cs", "i", map_index_t_to_string) \
STD2_FUNC("get_property_type_t_to_string", "cs", "i", get_property_type_t_to_string) \
STD2_FUNC("circulate_t_to_string", "cs", "i", circulate_t_to_string) \
STD2_FUNC("window_class_t_to_string", "cs", "i", window_class_t_to_string) \
STD2_FUNC("place_t_to_string", "cs", "i", place_t_to_string) \
STD2_FUNC("cursor_enum_t_to_string", "cs", "i", cursor_enum_t_to_string) \
STD2_FUNC("stack_mode_t_to_string", "cs", "i", stack_mode_t_to_string) \
STD2_FUNC("kb_t_to_string", "cs", "i", kb_t_to_string) \
STD2_FUNC("back_pixmap_t_to_string", "cs", "i", back_pixmap_t_to_string) \
STD2_FUNC("notify_mode_t_to_string", "cs", "i", notify_mode_t_to_string) \
STD2_FUNC("set_mode_t_to_string", "cs", "i", set_mode_t_to_string) \
STD2_FUNC("auto_repeat_mode_t_to_string", "cs", "i", auto_repeat_mode_t_to_string) \
STD2_FUNC("backing_store_t_to_string", "cs", "i", backing_store_t_to_string) \
STD2_FUNC("prop_mode_t_to_string", "cs", "i", prop_mode_t_to_string) \
STD2_FUNC("atom_enum_t_to_string", "cs", "i", atom_enum_t_to_string) \
STD2_FUNC("visual_class_t_to_string", "cs", "i", visual_class_t_to_string) \
STD2_FUNC("cw_t_to_string", "cs", "i", cw_t_to_string) \
STD2_FUNC("input_focus_t_to_string", "cs", "i", input_focus_t_to_string) \
STD2_FUNC("kill_t_to_string", "cs", "i", kill_t_to_string) \
STD2_FUNC("send_event_dest_t_to_string", "cs", "i", send_event_dest_t_to_string) \
STD2_FUNC("coord_mode_t_to_string", "cs", "i", coord_mode_t_to_string) \
STD2_FUNC("access_control_t_to_string", "cs", "i", access_control_t_to_string) \
STD2_FUNC("property_t_to_string", "cs", "i", property_t_to_string) \
STD2_FUNC("fill_style_t_to_string", "cs", "i", fill_style_t_to_string) \
STD2_FUNC("query_shape_of_t_to_string", "cs", "i", query_shape_of_t_to_string) \
STD2_FUNC("pixmap_enum_t_to_string", "cs", "i", pixmap_enum_t_to_string) \
STD2_FUNC("map_state_t_to_string", "cs", "i", map_state_t_to_string) \
STD2_FUNC("event_mask_t_to_string", "cs", "i", event_mask_t_to_string) \
STD2_FUNC("font_enum_t_to_string", "cs", "i", font_enum_t_to_string) \
STD2_FUNC("family_t_to_string", "cs", "i", family_t_to_string) \
STD2_FUNC("colormap_state_t_to_string", "cs", "i", colormap_state_t_to_string) \
STD2_FUNC("blanking_t_to_string", "cs", "i", blanking_t_to_string) \
STD2_FUNC("colormap_enum_t_to_string", "cs", "i", colormap_enum_t_to_string) \
STD2_FUNC("time_t_to_string", "cs", "i", time_t_to_string) \
STD2_FUNC("gc_t_to_string", "cs", "i", gc_t_to_string) \
STD2_FUNC("screen_saver_t_to_string", "cs", "i", screen_saver_t_to_string) \
STD2_FUNC("led_mode_t_to_string", "cs", "i", led_mode_t_to_string) \
STD2_FUNC("font_draw_t_to_string", "cs", "i", font_draw_t_to_string) \
STD2_FUNC("cap_style_t_to_string", "cs", "i", cap_style_t_to_string) \
STD2_FUNC("fill_rule_t_to_string", "cs", "i", fill_rule_t_to_string) \
STD2_FUNC("image_order_t_to_string", "cs", "i", image_order_t_to_string) \
STD2_FUNC("poly_shape_t_to_string", "cs", "i", poly_shape_t_to_string) \
STD2_FUNC("visibility_t_to_string", "cs", "i", visibility_t_to_string) \
STD2_FUNC("button_index_t_to_string", "cs", "i", button_index_t_to_string) \
STD2_FUNC("key_but_mask_t_to_string", "cs", "i", key_but_mask_t_to_string) \
STD2_FUNC("grab_t_to_string", "cs", "i", grab_t_to_string) \
STD2_FUNC("mapping_status_t_to_string", "cs", "i", mapping_status_t_to_string) \
STD2_FUNC("config_window_t_to_string", "cs", "i", config_window_t_to_string) \
STD2_FUNC("host_mode_t_to_string", "cs", "i", host_mode_t_to_string) \
STD2_FUNC("gravity_t_to_string", "cs", "i", gravity_t_to_string) \
STD2_FUNC("window_enum_t_to_string", "cs", "i", window_enum_t_to_string) \
STD2_FUNC("notify_detail_t_to_string", "cs", "i", notify_detail_t_to_string) \
STD2_FUNC("colormap_alloc_t_to_string", "cs", "i", colormap_alloc_t_to_string) \
STD2_FUNC("motion_t_to_string", "cs", "i", motion_t_to_string) \
STD2_FUNC("line_style_t_to_string", "cs", "i", line_style_t_to_string) \
STD2_FUNC("grab_mode_t_to_string", "cs", "i", grab_mode_t_to_string) \
STD2_FUNC("image_format_t_to_string", "cs", "i", image_format_t_to_string) \
STD2_FUNC("button_mask_t_to_string", "cs", "i", button_mask_t_to_string) \
STD2_FUNC("clip_ordering_t_to_string", "cs", "i", clip_ordering_t_to_string) \
STD2_FUNC("exposures_t_to_string", "cs", "i", exposures_t_to_string) \
STD2_FUNC("join_style_t_to_string", "cs", "i", join_style_t_to_string) \
STD2_FUNC("color_flag_t_to_string", "cs", "i", color_flag_t_to_string) \

