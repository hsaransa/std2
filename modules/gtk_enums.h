/* generated: Thu Apr  1 15:11:54 2010
 * arguments: scripts/gccxml.py -D_REENTRANT -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/directfb -I/usr/include/libpng12 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include /usr/include/gtk-2.0/gtk/gtk.h -- headerprefix:ENUMS match:Gtk* prefix:Gtk prefix:GTK_ enums
 */
static void CTreeExpanderStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CTREE_EXPANDER_NONE:
        s = "CTREE_EXPANDER_NONE";
        break;
    case GTK_CTREE_EXPANDER_SQUARE:
        s = "CTREE_EXPANDER_SQUARE";
        break;
    case GTK_CTREE_EXPANDER_TRIANGLE:
        s = "CTREE_EXPANDER_TRIANGLE";
        break;
    case GTK_CTREE_EXPANDER_CIRCULAR:
        s = "CTREE_EXPANDER_CIRCULAR";
        break;
    }
    *(const char**)ret = s;
}
static void IMPreeditStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_IM_PREEDIT_NOTHING:
        s = "IM_PREEDIT_NOTHING";
        break;
    case GTK_IM_PREEDIT_CALLBACK:
        s = "IM_PREEDIT_CALLBACK";
        break;
    case GTK_IM_PREEDIT_NONE:
        s = "IM_PREEDIT_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void ObjectFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_IN_DESTRUCTION:
        s = "IN_DESTRUCTION";
        break;
    case GTK_FLOATING:
        s = "FLOATING";
        break;
    case GTK_RESERVED_1:
        s = "RESERVED_1";
        break;
    case GTK_RESERVED_2:
        s = "RESERVED_2";
        break;
    }
    *(const char**)ret = s;
}
static void DebugFlag_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DEBUG_MISC:
        s = "DEBUG_MISC";
        break;
    case GTK_DEBUG_PLUGSOCKET:
        s = "DEBUG_PLUGSOCKET";
        break;
    case GTK_DEBUG_TEXT:
        s = "DEBUG_TEXT";
        break;
    case GTK_DEBUG_TREE:
        s = "DEBUG_TREE";
        break;
    case GTK_DEBUG_UPDATES:
        s = "DEBUG_UPDATES";
        break;
    case GTK_DEBUG_KEYBINDINGS:
        s = "DEBUG_KEYBINDINGS";
        break;
    case GTK_DEBUG_MULTIHEAD:
        s = "DEBUG_MULTIHEAD";
        break;
    case GTK_DEBUG_MODULES:
        s = "DEBUG_MODULES";
        break;
    case GTK_DEBUG_GEOMETRY:
        s = "DEBUG_GEOMETRY";
        break;
    case GTK_DEBUG_ICONTHEME:
        s = "DEBUG_ICONTHEME";
        break;
    case GTK_DEBUG_PRINTING:
        s = "DEBUG_PRINTING";
        break;
    case GTK_DEBUG_BUILDER:
        s = "DEBUG_BUILDER";
        break;
    }
    *(const char**)ret = s;
}
static void SizeGroupMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SIZE_GROUP_NONE:
        s = "SIZE_GROUP_NONE";
        break;
    case GTK_SIZE_GROUP_HORIZONTAL:
        s = "SIZE_GROUP_HORIZONTAL";
        break;
    case GTK_SIZE_GROUP_VERTICAL:
        s = "SIZE_GROUP_VERTICAL";
        break;
    case GTK_SIZE_GROUP_BOTH:
        s = "SIZE_GROUP_BOTH";
        break;
    }
    *(const char**)ret = s;
}
static void MatchType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_MATCH_ALL:
        s = "MATCH_ALL";
        break;
    case GTK_MATCH_ALL_TAIL:
        s = "MATCH_ALL_TAIL";
        break;
    case GTK_MATCH_HEAD:
        s = "MATCH_HEAD";
        break;
    case GTK_MATCH_TAIL:
        s = "MATCH_TAIL";
        break;
    case GTK_MATCH_EXACT:
        s = "MATCH_EXACT";
        break;
    case GTK_MATCH_LAST:
        s = "MATCH_LAST";
        break;
    }
    *(const char**)ret = s;
}
static void ExpanderStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_EXPANDER_COLLAPSED:
        s = "EXPANDER_COLLAPSED";
        break;
    case GTK_EXPANDER_SEMI_COLLAPSED:
        s = "EXPANDER_SEMI_COLLAPSED";
        break;
    case GTK_EXPANDER_SEMI_EXPANDED:
        s = "EXPANDER_SEMI_EXPANDED";
        break;
    case GTK_EXPANDER_EXPANDED:
        s = "EXPANDER_EXPANDED";
        break;
    }
    *(const char**)ret = s;
}
static void DirectionType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DIR_TAB_FORWARD:
        s = "DIR_TAB_FORWARD";
        break;
    case GTK_DIR_TAB_BACKWARD:
        s = "DIR_TAB_BACKWARD";
        break;
    case GTK_DIR_UP:
        s = "DIR_UP";
        break;
    case GTK_DIR_DOWN:
        s = "DIR_DOWN";
        break;
    case GTK_DIR_LEFT:
        s = "DIR_LEFT";
        break;
    case GTK_DIR_RIGHT:
        s = "DIR_RIGHT";
        break;
    }
    *(const char**)ret = s;
}
static void WindowType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_WINDOW_TOPLEVEL:
        s = "WINDOW_TOPLEVEL";
        break;
    case GTK_WINDOW_POPUP:
        s = "WINDOW_POPUP";
        break;
    }
    *(const char**)ret = s;
}
static void RecentSortType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RECENT_SORT_NONE:
        s = "RECENT_SORT_NONE";
        break;
    case GTK_RECENT_SORT_MRU:
        s = "RECENT_SORT_MRU";
        break;
    case GTK_RECENT_SORT_LRU:
        s = "RECENT_SORT_LRU";
        break;
    case GTK_RECENT_SORT_CUSTOM:
        s = "RECENT_SORT_CUSTOM";
        break;
    }
    *(const char**)ret = s;
}
static void ArrowPlacement_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ARROWS_BOTH:
        s = "ARROWS_BOTH";
        break;
    case GTK_ARROWS_START:
        s = "ARROWS_START";
        break;
    case GTK_ARROWS_END:
        s = "ARROWS_END";
        break;
    }
    *(const char**)ret = s;
}
static void TextBufferTargetInfo_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS:
        s = "TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS";
        break;
    case GTK_TEXT_BUFFER_TARGET_INFO_RICH_TEXT:
        s = "TEXT_BUFFER_TARGET_INFO_RICH_TEXT";
        break;
    case GTK_TEXT_BUFFER_TARGET_INFO_TEXT:
        s = "TEXT_BUFFER_TARGET_INFO_TEXT";
        break;
    }
    *(const char**)ret = s;
}
static void DestDefaults_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DEST_DEFAULT_MOTION:
        s = "DEST_DEFAULT_MOTION";
        break;
    case GTK_DEST_DEFAULT_HIGHLIGHT:
        s = "DEST_DEFAULT_HIGHLIGHT";
        break;
    case GTK_DEST_DEFAULT_DROP:
        s = "DEST_DEFAULT_DROP";
        break;
    case GTK_DEST_DEFAULT_ALL:
        s = "DEST_DEFAULT_ALL";
        break;
    }
    *(const char**)ret = s;
}
static void CellRendererAccelMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CELL_RENDERER_ACCEL_MODE_GTK:
        s = "CELL_RENDERER_ACCEL_MODE_GTK";
        break;
    case GTK_CELL_RENDERER_ACCEL_MODE_OTHER:
        s = "CELL_RENDERER_ACCEL_MODE_OTHER";
        break;
    }
    *(const char**)ret = s;
}
static void FileChooserAction_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_FILE_CHOOSER_ACTION_OPEN:
        s = "FILE_CHOOSER_ACTION_OPEN";
        break;
    case GTK_FILE_CHOOSER_ACTION_SAVE:
        s = "FILE_CHOOSER_ACTION_SAVE";
        break;
    case GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER:
        s = "FILE_CHOOSER_ACTION_SELECT_FOLDER";
        break;
    case GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER:
        s = "FILE_CHOOSER_ACTION_CREATE_FOLDER";
        break;
    }
    *(const char**)ret = s;
}
static void IMStatusStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_IM_STATUS_NOTHING:
        s = "IM_STATUS_NOTHING";
        break;
    case GTK_IM_STATUS_CALLBACK:
        s = "IM_STATUS_CALLBACK";
        break;
    case GTK_IM_STATUS_NONE:
        s = "IM_STATUS_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void TargetFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TARGET_SAME_APP:
        s = "TARGET_SAME_APP";
        break;
    case GTK_TARGET_SAME_WIDGET:
        s = "TARGET_SAME_WIDGET";
        break;
    case GTK_TARGET_OTHER_APP:
        s = "TARGET_OTHER_APP";
        break;
    case GTK_TARGET_OTHER_WIDGET:
        s = "TARGET_OTHER_WIDGET";
        break;
    }
    *(const char**)ret = s;
}
static void PrintOperationResult_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_OPERATION_RESULT_ERROR:
        s = "PRINT_OPERATION_RESULT_ERROR";
        break;
    case GTK_PRINT_OPERATION_RESULT_APPLY:
        s = "PRINT_OPERATION_RESULT_APPLY";
        break;
    case GTK_PRINT_OPERATION_RESULT_CANCEL:
        s = "PRINT_OPERATION_RESULT_CANCEL";
        break;
    case GTK_PRINT_OPERATION_RESULT_IN_PROGRESS:
        s = "PRINT_OPERATION_RESULT_IN_PROGRESS";
        break;
    }
    *(const char**)ret = s;
}
static void TreeViewGridLines_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TREE_VIEW_GRID_LINES_NONE:
        s = "TREE_VIEW_GRID_LINES_NONE";
        break;
    case GTK_TREE_VIEW_GRID_LINES_HORIZONTAL:
        s = "TREE_VIEW_GRID_LINES_HORIZONTAL";
        break;
    case GTK_TREE_VIEW_GRID_LINES_VERTICAL:
        s = "TREE_VIEW_GRID_LINES_VERTICAL";
        break;
    case GTK_TREE_VIEW_GRID_LINES_BOTH:
        s = "TREE_VIEW_GRID_LINES_BOTH";
        break;
    }
    *(const char**)ret = s;
}
static void RcTokenType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RC_TOKEN_INVALID:
        s = "RC_TOKEN_INVALID";
        break;
    case GTK_RC_TOKEN_INCLUDE:
        s = "RC_TOKEN_INCLUDE";
        break;
    case GTK_RC_TOKEN_NORMAL:
        s = "RC_TOKEN_NORMAL";
        break;
    case GTK_RC_TOKEN_ACTIVE:
        s = "RC_TOKEN_ACTIVE";
        break;
    case GTK_RC_TOKEN_PRELIGHT:
        s = "RC_TOKEN_PRELIGHT";
        break;
    case GTK_RC_TOKEN_SELECTED:
        s = "RC_TOKEN_SELECTED";
        break;
    case GTK_RC_TOKEN_INSENSITIVE:
        s = "RC_TOKEN_INSENSITIVE";
        break;
    case GTK_RC_TOKEN_FG:
        s = "RC_TOKEN_FG";
        break;
    case GTK_RC_TOKEN_BG:
        s = "RC_TOKEN_BG";
        break;
    case GTK_RC_TOKEN_TEXT:
        s = "RC_TOKEN_TEXT";
        break;
    case GTK_RC_TOKEN_BASE:
        s = "RC_TOKEN_BASE";
        break;
    case GTK_RC_TOKEN_XTHICKNESS:
        s = "RC_TOKEN_XTHICKNESS";
        break;
    case GTK_RC_TOKEN_YTHICKNESS:
        s = "RC_TOKEN_YTHICKNESS";
        break;
    case GTK_RC_TOKEN_FONT:
        s = "RC_TOKEN_FONT";
        break;
    case GTK_RC_TOKEN_FONTSET:
        s = "RC_TOKEN_FONTSET";
        break;
    case GTK_RC_TOKEN_FONT_NAME:
        s = "RC_TOKEN_FONT_NAME";
        break;
    case GTK_RC_TOKEN_BG_PIXMAP:
        s = "RC_TOKEN_BG_PIXMAP";
        break;
    case GTK_RC_TOKEN_PIXMAP_PATH:
        s = "RC_TOKEN_PIXMAP_PATH";
        break;
    case GTK_RC_TOKEN_STYLE:
        s = "RC_TOKEN_STYLE";
        break;
    case GTK_RC_TOKEN_BINDING:
        s = "RC_TOKEN_BINDING";
        break;
    case GTK_RC_TOKEN_BIND:
        s = "RC_TOKEN_BIND";
        break;
    case GTK_RC_TOKEN_WIDGET:
        s = "RC_TOKEN_WIDGET";
        break;
    case GTK_RC_TOKEN_WIDGET_CLASS:
        s = "RC_TOKEN_WIDGET_CLASS";
        break;
    case GTK_RC_TOKEN_CLASS:
        s = "RC_TOKEN_CLASS";
        break;
    case GTK_RC_TOKEN_LOWEST:
        s = "RC_TOKEN_LOWEST";
        break;
    case GTK_RC_TOKEN_GTK:
        s = "RC_TOKEN_GTK";
        break;
    case GTK_RC_TOKEN_APPLICATION:
        s = "RC_TOKEN_APPLICATION";
        break;
    case GTK_RC_TOKEN_THEME:
        s = "RC_TOKEN_THEME";
        break;
    case GTK_RC_TOKEN_RC:
        s = "RC_TOKEN_RC";
        break;
    case GTK_RC_TOKEN_HIGHEST:
        s = "RC_TOKEN_HIGHEST";
        break;
    case GTK_RC_TOKEN_ENGINE:
        s = "RC_TOKEN_ENGINE";
        break;
    case GTK_RC_TOKEN_MODULE_PATH:
        s = "RC_TOKEN_MODULE_PATH";
        break;
    case GTK_RC_TOKEN_IM_MODULE_PATH:
        s = "RC_TOKEN_IM_MODULE_PATH";
        break;
    case GTK_RC_TOKEN_IM_MODULE_FILE:
        s = "RC_TOKEN_IM_MODULE_FILE";
        break;
    case GTK_RC_TOKEN_STOCK:
        s = "RC_TOKEN_STOCK";
        break;
    case GTK_RC_TOKEN_LTR:
        s = "RC_TOKEN_LTR";
        break;
    case GTK_RC_TOKEN_RTL:
        s = "RC_TOKEN_RTL";
        break;
    case GTK_RC_TOKEN_COLOR:
        s = "RC_TOKEN_COLOR";
        break;
    case GTK_RC_TOKEN_UNBIND:
        s = "RC_TOKEN_UNBIND";
        break;
    case GTK_RC_TOKEN_LAST:
        s = "RC_TOKEN_LAST";
        break;
    }
    *(const char**)ret = s;
}
static void MenuDirectionType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_MENU_DIR_PARENT:
        s = "MENU_DIR_PARENT";
        break;
    case GTK_MENU_DIR_CHILD:
        s = "MENU_DIR_CHILD";
        break;
    case GTK_MENU_DIR_NEXT:
        s = "MENU_DIR_NEXT";
        break;
    case GTK_MENU_DIR_PREV:
        s = "MENU_DIR_PREV";
        break;
    }
    *(const char**)ret = s;
}
static void TreeViewColumnSizing_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TREE_VIEW_COLUMN_GROW_ONLY:
        s = "TREE_VIEW_COLUMN_GROW_ONLY";
        break;
    case GTK_TREE_VIEW_COLUMN_AUTOSIZE:
        s = "TREE_VIEW_COLUMN_AUTOSIZE";
        break;
    case GTK_TREE_VIEW_COLUMN_FIXED:
        s = "TREE_VIEW_COLUMN_FIXED";
        break;
    }
    *(const char**)ret = s;
}
static void IconLookupFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ICON_LOOKUP_NO_SVG:
        s = "ICON_LOOKUP_NO_SVG";
        break;
    case GTK_ICON_LOOKUP_FORCE_SVG:
        s = "ICON_LOOKUP_FORCE_SVG";
        break;
    case GTK_ICON_LOOKUP_USE_BUILTIN:
        s = "ICON_LOOKUP_USE_BUILTIN";
        break;
    case GTK_ICON_LOOKUP_GENERIC_FALLBACK:
        s = "ICON_LOOKUP_GENERIC_FALLBACK";
        break;
    case GTK_ICON_LOOKUP_FORCE_SIZE:
        s = "ICON_LOOKUP_FORCE_SIZE";
        break;
    }
    *(const char**)ret = s;
}
static void SignalRunType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RUN_FIRST:
        s = "RUN_FIRST";
        break;
    case GTK_RUN_LAST:
        s = "RUN_LAST";
        break;
    case GTK_RUN_BOTH:
        s = "RUN_BOTH";
        break;
    case GTK_RUN_NO_RECURSE:
        s = "RUN_NO_RECURSE";
        break;
    case GTK_RUN_ACTION:
        s = "RUN_ACTION";
        break;
    case GTK_RUN_NO_HOOKS:
        s = "RUN_NO_HOOKS";
        break;
    }
    *(const char**)ret = s;
}
static void UIManagerItemType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_UI_MANAGER_AUTO:
        s = "UI_MANAGER_AUTO";
        break;
    case GTK_UI_MANAGER_MENUBAR:
        s = "UI_MANAGER_MENUBAR";
        break;
    case GTK_UI_MANAGER_MENU:
        s = "UI_MANAGER_MENU";
        break;
    case GTK_UI_MANAGER_TOOLBAR:
        s = "UI_MANAGER_TOOLBAR";
        break;
    case GTK_UI_MANAGER_PLACEHOLDER:
        s = "UI_MANAGER_PLACEHOLDER";
        break;
    case GTK_UI_MANAGER_POPUP:
        s = "UI_MANAGER_POPUP";
        break;
    case GTK_UI_MANAGER_MENUITEM:
        s = "UI_MANAGER_MENUITEM";
        break;
    case GTK_UI_MANAGER_TOOLITEM:
        s = "UI_MANAGER_TOOLITEM";
        break;
    case GTK_UI_MANAGER_SEPARATOR:
        s = "UI_MANAGER_SEPARATOR";
        break;
    case GTK_UI_MANAGER_ACCELERATOR:
        s = "UI_MANAGER_ACCELERATOR";
        break;
    case GTK_UI_MANAGER_POPUP_WITH_ACCELS:
        s = "UI_MANAGER_POPUP_WITH_ACCELS";
        break;
    }
    *(const char**)ret = s;
}
static void PreviewType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PREVIEW_COLOR:
        s = "PREVIEW_COLOR";
        break;
    case GTK_PREVIEW_GRAYSCALE:
        s = "PREVIEW_GRAYSCALE";
        break;
    }
    *(const char**)ret = s;
}
static void ReliefStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RELIEF_NORMAL:
        s = "RELIEF_NORMAL";
        break;
    case GTK_RELIEF_HALF:
        s = "RELIEF_HALF";
        break;
    case GTK_RELIEF_NONE:
        s = "RELIEF_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void Justification_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_JUSTIFY_LEFT:
        s = "JUSTIFY_LEFT";
        break;
    case GTK_JUSTIFY_RIGHT:
        s = "JUSTIFY_RIGHT";
        break;
    case GTK_JUSTIFY_CENTER:
        s = "JUSTIFY_CENTER";
        break;
    case GTK_JUSTIFY_FILL:
        s = "JUSTIFY_FILL";
        break;
    }
    *(const char**)ret = s;
}
static void ButtonsType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_BUTTONS_NONE:
        s = "BUTTONS_NONE";
        break;
    case GTK_BUTTONS_OK:
        s = "BUTTONS_OK";
        break;
    case GTK_BUTTONS_CLOSE:
        s = "BUTTONS_CLOSE";
        break;
    case GTK_BUTTONS_CANCEL:
        s = "BUTTONS_CANCEL";
        break;
    case GTK_BUTTONS_YES_NO:
        s = "BUTTONS_YES_NO";
        break;
    case GTK_BUTTONS_OK_CANCEL:
        s = "BUTTONS_OK_CANCEL";
        break;
    }
    *(const char**)ret = s;
}
static void ProgressBarStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PROGRESS_CONTINUOUS:
        s = "PROGRESS_CONTINUOUS";
        break;
    case GTK_PROGRESS_DISCRETE:
        s = "PROGRESS_DISCRETE";
        break;
    }
    *(const char**)ret = s;
}
static void MessageType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_MESSAGE_INFO:
        s = "MESSAGE_INFO";
        break;
    case GTK_MESSAGE_WARNING:
        s = "MESSAGE_WARNING";
        break;
    case GTK_MESSAGE_QUESTION:
        s = "MESSAGE_QUESTION";
        break;
    case GTK_MESSAGE_ERROR:
        s = "MESSAGE_ERROR";
        break;
    case GTK_MESSAGE_OTHER:
        s = "MESSAGE_OTHER";
        break;
    }
    *(const char**)ret = s;
}
static void SpinButtonUpdatePolicy_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_UPDATE_ALWAYS:
        s = "UPDATE_ALWAYS";
        break;
    case GTK_UPDATE_IF_VALID:
        s = "UPDATE_IF_VALID";
        break;
    }
    *(const char**)ret = s;
}
static void ToolbarStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TOOLBAR_ICONS:
        s = "TOOLBAR_ICONS";
        break;
    case GTK_TOOLBAR_TEXT:
        s = "TOOLBAR_TEXT";
        break;
    case GTK_TOOLBAR_BOTH:
        s = "TOOLBAR_BOTH";
        break;
    case GTK_TOOLBAR_BOTH_HORIZ:
        s = "TOOLBAR_BOTH_HORIZ";
        break;
    }
    *(const char**)ret = s;
}
static void CellRendererState_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CELL_RENDERER_SELECTED:
        s = "CELL_RENDERER_SELECTED";
        break;
    case GTK_CELL_RENDERER_PRELIT:
        s = "CELL_RENDERER_PRELIT";
        break;
    case GTK_CELL_RENDERER_INSENSITIVE:
        s = "CELL_RENDERER_INSENSITIVE";
        break;
    case GTK_CELL_RENDERER_SORTED:
        s = "CELL_RENDERER_SORTED";
        break;
    case GTK_CELL_RENDERER_FOCUSED:
        s = "CELL_RENDERER_FOCUSED";
        break;
    }
    *(const char**)ret = s;
}
static void AnchorType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ANCHOR_CENTER:
        s = "ANCHOR_CENTER";
        break;
    case GTK_ANCHOR_NORTH:
        s = "ANCHOR_NORTH";
        break;
    case GTK_ANCHOR_NORTH_WEST:
        s = "ANCHOR_NORTH_WEST";
        break;
    case GTK_ANCHOR_NORTH_EAST:
        s = "ANCHOR_NORTH_EAST";
        break;
    case GTK_ANCHOR_SOUTH:
        s = "ANCHOR_SOUTH";
        break;
    case GTK_ANCHOR_SOUTH_WEST:
        s = "ANCHOR_SOUTH_WEST";
        break;
    case GTK_ANCHOR_SOUTH_EAST:
        s = "ANCHOR_SOUTH_EAST";
        break;
    case GTK_ANCHOR_WEST:
        s = "ANCHOR_WEST";
        break;
    case GTK_ANCHOR_EAST:
        s = "ANCHOR_EAST";
        break;
    }
    *(const char**)ret = s;
}
static void PrintQuality_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_QUALITY_LOW:
        s = "PRINT_QUALITY_LOW";
        break;
    case GTK_PRINT_QUALITY_NORMAL:
        s = "PRINT_QUALITY_NORMAL";
        break;
    case GTK_PRINT_QUALITY_HIGH:
        s = "PRINT_QUALITY_HIGH";
        break;
    case GTK_PRINT_QUALITY_DRAFT:
        s = "PRINT_QUALITY_DRAFT";
        break;
    }
    *(const char**)ret = s;
}
static void SortType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SORT_ASCENDING:
        s = "SORT_ASCENDING";
        break;
    case GTK_SORT_DESCENDING:
        s = "SORT_DESCENDING";
        break;
    }
    *(const char**)ret = s;
}
static void NotebookTab_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_NOTEBOOK_TAB_FIRST:
        s = "NOTEBOOK_TAB_FIRST";
        break;
    case GTK_NOTEBOOK_TAB_LAST:
        s = "NOTEBOOK_TAB_LAST";
        break;
    }
    *(const char**)ret = s;
}
static void SideType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SIDE_TOP:
        s = "SIDE_TOP";
        break;
    case GTK_SIDE_BOTTOM:
        s = "SIDE_BOTTOM";
        break;
    case GTK_SIDE_LEFT:
        s = "SIDE_LEFT";
        break;
    case GTK_SIDE_RIGHT:
        s = "SIDE_RIGHT";
        break;
    }
    *(const char**)ret = s;
}
static void SpinType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SPIN_STEP_FORWARD:
        s = "SPIN_STEP_FORWARD";
        break;
    case GTK_SPIN_STEP_BACKWARD:
        s = "SPIN_STEP_BACKWARD";
        break;
    case GTK_SPIN_PAGE_FORWARD:
        s = "SPIN_PAGE_FORWARD";
        break;
    case GTK_SPIN_PAGE_BACKWARD:
        s = "SPIN_PAGE_BACKWARD";
        break;
    case GTK_SPIN_HOME:
        s = "SPIN_HOME";
        break;
    case GTK_SPIN_END:
        s = "SPIN_END";
        break;
    case GTK_SPIN_USER_DEFINED:
        s = "SPIN_USER_DEFINED";
        break;
    }
    *(const char**)ret = s;
}
static void PolicyType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_POLICY_ALWAYS:
        s = "POLICY_ALWAYS";
        break;
    case GTK_POLICY_AUTOMATIC:
        s = "POLICY_AUTOMATIC";
        break;
    case GTK_POLICY_NEVER:
        s = "POLICY_NEVER";
        break;
    }
    *(const char**)ret = s;
}
static void ArrowType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ARROW_UP:
        s = "ARROW_UP";
        break;
    case GTK_ARROW_DOWN:
        s = "ARROW_DOWN";
        break;
    case GTK_ARROW_LEFT:
        s = "ARROW_LEFT";
        break;
    case GTK_ARROW_RIGHT:
        s = "ARROW_RIGHT";
        break;
    case GTK_ARROW_NONE:
        s = "ARROW_NONE";
        break;
    }
    *(const char**)ret = s;
}
static void TextDirection_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TEXT_DIR_NONE:
        s = "TEXT_DIR_NONE";
        break;
    case GTK_TEXT_DIR_LTR:
        s = "TEXT_DIR_LTR";
        break;
    case GTK_TEXT_DIR_RTL:
        s = "TEXT_DIR_RTL";
        break;
    }
    *(const char**)ret = s;
}
static void MovementStep_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_MOVEMENT_LOGICAL_POSITIONS:
        s = "MOVEMENT_LOGICAL_POSITIONS";
        break;
    case GTK_MOVEMENT_VISUAL_POSITIONS:
        s = "MOVEMENT_VISUAL_POSITIONS";
        break;
    case GTK_MOVEMENT_WORDS:
        s = "MOVEMENT_WORDS";
        break;
    case GTK_MOVEMENT_DISPLAY_LINES:
        s = "MOVEMENT_DISPLAY_LINES";
        break;
    case GTK_MOVEMENT_DISPLAY_LINE_ENDS:
        s = "MOVEMENT_DISPLAY_LINE_ENDS";
        break;
    case GTK_MOVEMENT_PARAGRAPHS:
        s = "MOVEMENT_PARAGRAPHS";
        break;
    case GTK_MOVEMENT_PARAGRAPH_ENDS:
        s = "MOVEMENT_PARAGRAPH_ENDS";
        break;
    case GTK_MOVEMENT_PAGES:
        s = "MOVEMENT_PAGES";
        break;
    case GTK_MOVEMENT_BUFFER_ENDS:
        s = "MOVEMENT_BUFFER_ENDS";
        break;
    case GTK_MOVEMENT_HORIZONTAL_PAGES:
        s = "MOVEMENT_HORIZONTAL_PAGES";
        break;
    }
    *(const char**)ret = s;
}
static void ScrollStep_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SCROLL_STEPS:
        s = "SCROLL_STEPS";
        break;
    case GTK_SCROLL_PAGES:
        s = "SCROLL_PAGES";
        break;
    case GTK_SCROLL_ENDS:
        s = "SCROLL_ENDS";
        break;
    case GTK_SCROLL_HORIZONTAL_STEPS:
        s = "SCROLL_HORIZONTAL_STEPS";
        break;
    case GTK_SCROLL_HORIZONTAL_PAGES:
        s = "SCROLL_HORIZONTAL_PAGES";
        break;
    case GTK_SCROLL_HORIZONTAL_ENDS:
        s = "SCROLL_HORIZONTAL_ENDS";
        break;
    }
    *(const char**)ret = s;
}
static void Orientation_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ORIENTATION_HORIZONTAL:
        s = "ORIENTATION_HORIZONTAL";
        break;
    case GTK_ORIENTATION_VERTICAL:
        s = "ORIENTATION_VERTICAL";
        break;
    }
    *(const char**)ret = s;
}
static void CornerType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CORNER_TOP_LEFT:
        s = "CORNER_TOP_LEFT";
        break;
    case GTK_CORNER_BOTTOM_LEFT:
        s = "CORNER_BOTTOM_LEFT";
        break;
    case GTK_CORNER_TOP_RIGHT:
        s = "CORNER_TOP_RIGHT";
        break;
    case GTK_CORNER_BOTTOM_RIGHT:
        s = "CORNER_BOTTOM_RIGHT";
        break;
    }
    *(const char**)ret = s;
}
static void PackType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PACK_START:
        s = "PACK_START";
        break;
    case GTK_PACK_END:
        s = "PACK_END";
        break;
    }
    *(const char**)ret = s;
}
static void PositionType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_POS_LEFT:
        s = "POS_LEFT";
        break;
    case GTK_POS_RIGHT:
        s = "POS_RIGHT";
        break;
    case GTK_POS_TOP:
        s = "POS_TOP";
        break;
    case GTK_POS_BOTTOM:
        s = "POS_BOTTOM";
        break;
    }
    *(const char**)ret = s;
}
static void ScrollType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SCROLL_NONE:
        s = "SCROLL_NONE";
        break;
    case GTK_SCROLL_JUMP:
        s = "SCROLL_JUMP";
        break;
    case GTK_SCROLL_STEP_BACKWARD:
        s = "SCROLL_STEP_BACKWARD";
        break;
    case GTK_SCROLL_STEP_FORWARD:
        s = "SCROLL_STEP_FORWARD";
        break;
    case GTK_SCROLL_PAGE_BACKWARD:
        s = "SCROLL_PAGE_BACKWARD";
        break;
    case GTK_SCROLL_PAGE_FORWARD:
        s = "SCROLL_PAGE_FORWARD";
        break;
    case GTK_SCROLL_STEP_UP:
        s = "SCROLL_STEP_UP";
        break;
    case GTK_SCROLL_STEP_DOWN:
        s = "SCROLL_STEP_DOWN";
        break;
    case GTK_SCROLL_PAGE_UP:
        s = "SCROLL_PAGE_UP";
        break;
    case GTK_SCROLL_PAGE_DOWN:
        s = "SCROLL_PAGE_DOWN";
        break;
    case GTK_SCROLL_STEP_LEFT:
        s = "SCROLL_STEP_LEFT";
        break;
    case GTK_SCROLL_STEP_RIGHT:
        s = "SCROLL_STEP_RIGHT";
        break;
    case GTK_SCROLL_PAGE_LEFT:
        s = "SCROLL_PAGE_LEFT";
        break;
    case GTK_SCROLL_PAGE_RIGHT:
        s = "SCROLL_PAGE_RIGHT";
        break;
    case GTK_SCROLL_START:
        s = "SCROLL_START";
        break;
    case GTK_SCROLL_END:
        s = "SCROLL_END";
        break;
    }
    *(const char**)ret = s;
}
static void ImageType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_IMAGE_EMPTY:
        s = "IMAGE_EMPTY";
        break;
    case GTK_IMAGE_PIXMAP:
        s = "IMAGE_PIXMAP";
        break;
    case GTK_IMAGE_IMAGE:
        s = "IMAGE_IMAGE";
        break;
    case GTK_IMAGE_PIXBUF:
        s = "IMAGE_PIXBUF";
        break;
    case GTK_IMAGE_STOCK:
        s = "IMAGE_STOCK";
        break;
    case GTK_IMAGE_ICON_SET:
        s = "IMAGE_ICON_SET";
        break;
    case GTK_IMAGE_ANIMATION:
        s = "IMAGE_ANIMATION";
        break;
    case GTK_IMAGE_ICON_NAME:
        s = "IMAGE_ICON_NAME";
        break;
    case GTK_IMAGE_GICON:
        s = "IMAGE_GICON";
        break;
    }
    *(const char**)ret = s;
}
static void PrintStatus_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_STATUS_INITIAL:
        s = "PRINT_STATUS_INITIAL";
        break;
    case GTK_PRINT_STATUS_PREPARING:
        s = "PRINT_STATUS_PREPARING";
        break;
    case GTK_PRINT_STATUS_GENERATING_DATA:
        s = "PRINT_STATUS_GENERATING_DATA";
        break;
    case GTK_PRINT_STATUS_SENDING_DATA:
        s = "PRINT_STATUS_SENDING_DATA";
        break;
    case GTK_PRINT_STATUS_PENDING:
        s = "PRINT_STATUS_PENDING";
        break;
    case GTK_PRINT_STATUS_PENDING_ISSUE:
        s = "PRINT_STATUS_PENDING_ISSUE";
        break;
    case GTK_PRINT_STATUS_PRINTING:
        s = "PRINT_STATUS_PRINTING";
        break;
    case GTK_PRINT_STATUS_FINISHED:
        s = "PRINT_STATUS_FINISHED";
        break;
    case GTK_PRINT_STATUS_FINISHED_ABORTED:
        s = "PRINT_STATUS_FINISHED_ABORTED";
        break;
    }
    *(const char**)ret = s;
}
static void RecentFilterFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RECENT_FILTER_URI:
        s = "RECENT_FILTER_URI";
        break;
    case GTK_RECENT_FILTER_DISPLAY_NAME:
        s = "RECENT_FILTER_DISPLAY_NAME";
        break;
    case GTK_RECENT_FILTER_MIME_TYPE:
        s = "RECENT_FILTER_MIME_TYPE";
        break;
    case GTK_RECENT_FILTER_APPLICATION:
        s = "RECENT_FILTER_APPLICATION";
        break;
    case GTK_RECENT_FILTER_GROUP:
        s = "RECENT_FILTER_GROUP";
        break;
    case GTK_RECENT_FILTER_AGE:
        s = "RECENT_FILTER_AGE";
        break;
    }
    *(const char**)ret = s;
}
static void StateType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_STATE_NORMAL:
        s = "STATE_NORMAL";
        break;
    case GTK_STATE_ACTIVE:
        s = "STATE_ACTIVE";
        break;
    case GTK_STATE_PRELIGHT:
        s = "STATE_PRELIGHT";
        break;
    case GTK_STATE_SELECTED:
        s = "STATE_SELECTED";
        break;
    case GTK_STATE_INSENSITIVE:
        s = "STATE_INSENSITIVE";
        break;
    }
    *(const char**)ret = s;
}
static void UpdateType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_UPDATE_CONTINUOUS:
        s = "UPDATE_CONTINUOUS";
        break;
    case GTK_UPDATE_DISCONTINUOUS:
        s = "UPDATE_DISCONTINUOUS";
        break;
    case GTK_UPDATE_DELAYED:
        s = "UPDATE_DELAYED";
        break;
    }
    *(const char**)ret = s;
}
static void SubmenuDirection_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DIRECTION_LEFT:
        s = "DIRECTION_LEFT";
        break;
    case GTK_DIRECTION_RIGHT:
        s = "DIRECTION_RIGHT";
        break;
    }
    *(const char**)ret = s;
}
static void AttachOptions_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_EXPAND:
        s = "EXPAND";
        break;
    case GTK_SHRINK:
        s = "SHRINK";
        break;
    case GTK_FILL:
        s = "FILL";
        break;
    }
    *(const char**)ret = s;
}
static void TextWindowType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TEXT_WINDOW_PRIVATE:
        s = "TEXT_WINDOW_PRIVATE";
        break;
    case GTK_TEXT_WINDOW_WIDGET:
        s = "TEXT_WINDOW_WIDGET";
        break;
    case GTK_TEXT_WINDOW_TEXT:
        s = "TEXT_WINDOW_TEXT";
        break;
    case GTK_TEXT_WINDOW_LEFT:
        s = "TEXT_WINDOW_LEFT";
        break;
    case GTK_TEXT_WINDOW_RIGHT:
        s = "TEXT_WINDOW_RIGHT";
        break;
    case GTK_TEXT_WINDOW_TOP:
        s = "TEXT_WINDOW_TOP";
        break;
    case GTK_TEXT_WINDOW_BOTTOM:
        s = "TEXT_WINDOW_BOTTOM";
        break;
    }
    *(const char**)ret = s;
}
static void ButtonAction_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_BUTTON_IGNORED:
        s = "BUTTON_IGNORED";
        break;
    case GTK_BUTTON_SELECTS:
        s = "BUTTON_SELECTS";
        break;
    case GTK_BUTTON_DRAGS:
        s = "BUTTON_DRAGS";
        break;
    case GTK_BUTTON_EXPANDS:
        s = "BUTTON_EXPANDS";
        break;
    }
    *(const char**)ret = s;
}
static void DragResult_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DRAG_RESULT_SUCCESS:
        s = "DRAG_RESULT_SUCCESS";
        break;
    case GTK_DRAG_RESULT_NO_TARGET:
        s = "DRAG_RESULT_NO_TARGET";
        break;
    case GTK_DRAG_RESULT_USER_CANCELLED:
        s = "DRAG_RESULT_USER_CANCELLED";
        break;
    case GTK_DRAG_RESULT_TIMEOUT_EXPIRED:
        s = "DRAG_RESULT_TIMEOUT_EXPIRED";
        break;
    case GTK_DRAG_RESULT_GRAB_BROKEN:
        s = "DRAG_RESULT_GRAB_BROKEN";
        break;
    case GTK_DRAG_RESULT_ERROR:
        s = "DRAG_RESULT_ERROR";
        break;
    }
    *(const char**)ret = s;
}
static void ArgFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ARG_READABLE:
        s = "ARG_READABLE";
        break;
    case GTK_ARG_WRITABLE:
        s = "ARG_WRITABLE";
        break;
    case GTK_ARG_CONSTRUCT:
        s = "ARG_CONSTRUCT";
        break;
    case GTK_ARG_CONSTRUCT_ONLY:
        s = "ARG_CONSTRUCT_ONLY";
        break;
    case GTK_ARG_CHILD_ARG:
        s = "ARG_CHILD_ARG";
        break;
    }
    *(const char**)ret = s;
}
static void RcFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RC_FG:
        s = "RC_FG";
        break;
    case GTK_RC_BG:
        s = "RC_BG";
        break;
    case GTK_RC_TEXT:
        s = "RC_TEXT";
        break;
    case GTK_RC_BASE:
        s = "RC_BASE";
        break;
    }
    *(const char**)ret = s;
}
static void PackDirection_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PACK_DIRECTION_LTR:
        s = "PACK_DIRECTION_LTR";
        break;
    case GTK_PACK_DIRECTION_RTL:
        s = "PACK_DIRECTION_RTL";
        break;
    case GTK_PACK_DIRECTION_TTB:
        s = "PACK_DIRECTION_TTB";
        break;
    case GTK_PACK_DIRECTION_BTT:
        s = "PACK_DIRECTION_BTT";
        break;
    }
    *(const char**)ret = s;
}
static void BuilderError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION:
        s = "BUILDER_ERROR_INVALID_TYPE_FUNCTION";
        break;
    case GTK_BUILDER_ERROR_UNHANDLED_TAG:
        s = "BUILDER_ERROR_UNHANDLED_TAG";
        break;
    case GTK_BUILDER_ERROR_MISSING_ATTRIBUTE:
        s = "BUILDER_ERROR_MISSING_ATTRIBUTE";
        break;
    case GTK_BUILDER_ERROR_INVALID_ATTRIBUTE:
        s = "BUILDER_ERROR_INVALID_ATTRIBUTE";
        break;
    case GTK_BUILDER_ERROR_INVALID_TAG:
        s = "BUILDER_ERROR_INVALID_TAG";
        break;
    case GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE:
        s = "BUILDER_ERROR_MISSING_PROPERTY_VALUE";
        break;
    case GTK_BUILDER_ERROR_INVALID_VALUE:
        s = "BUILDER_ERROR_INVALID_VALUE";
        break;
    case GTK_BUILDER_ERROR_VERSION_MISMATCH:
        s = "BUILDER_ERROR_VERSION_MISMATCH";
        break;
    case GTK_BUILDER_ERROR_DUPLICATE_ID:
        s = "BUILDER_ERROR_DUPLICATE_ID";
        break;
    }
    *(const char**)ret = s;
}
static void PageSet_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PAGE_SET_ALL:
        s = "PAGE_SET_ALL";
        break;
    case GTK_PAGE_SET_EVEN:
        s = "PAGE_SET_EVEN";
        break;
    case GTK_PAGE_SET_ODD:
        s = "PAGE_SET_ODD";
        break;
    }
    *(const char**)ret = s;
}
static void TreeModelFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TREE_MODEL_ITERS_PERSIST:
        s = "TREE_MODEL_ITERS_PERSIST";
        break;
    case GTK_TREE_MODEL_LIST_ONLY:
        s = "TREE_MODEL_LIST_ONLY";
        break;
    }
    *(const char**)ret = s;
}
static void CalendarDisplayOptions_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CALENDAR_SHOW_HEADING:
        s = "CALENDAR_SHOW_HEADING";
        break;
    case GTK_CALENDAR_SHOW_DAY_NAMES:
        s = "CALENDAR_SHOW_DAY_NAMES";
        break;
    case GTK_CALENDAR_NO_MONTH_CHANGE:
        s = "CALENDAR_NO_MONTH_CHANGE";
        break;
    case GTK_CALENDAR_SHOW_WEEK_NUMBERS:
        s = "CALENDAR_SHOW_WEEK_NUMBERS";
        break;
    case GTK_CALENDAR_WEEK_START_MONDAY:
        s = "CALENDAR_WEEK_START_MONDAY";
        break;
    case GTK_CALENDAR_SHOW_DETAILS:
        s = "CALENDAR_SHOW_DETAILS";
        break;
    }
    *(const char**)ret = s;
}
static void PrintPages_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_PAGES_ALL:
        s = "PRINT_PAGES_ALL";
        break;
    case GTK_PRINT_PAGES_CURRENT:
        s = "PRINT_PAGES_CURRENT";
        break;
    case GTK_PRINT_PAGES_RANGES:
        s = "PRINT_PAGES_RANGES";
        break;
    case GTK_PRINT_PAGES_SELECTION:
        s = "PRINT_PAGES_SELECTION";
        break;
    }
    *(const char**)ret = s;
}
static void TextSearchFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TEXT_SEARCH_VISIBLE_ONLY:
        s = "TEXT_SEARCH_VISIBLE_ONLY";
        break;
    case GTK_TEXT_SEARCH_TEXT_ONLY:
        s = "TEXT_SEARCH_TEXT_ONLY";
        break;
    }
    *(const char**)ret = s;
}
static void IconViewDropPosition_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ICON_VIEW_NO_DROP:
        s = "ICON_VIEW_NO_DROP";
        break;
    case GTK_ICON_VIEW_DROP_INTO:
        s = "ICON_VIEW_DROP_INTO";
        break;
    case GTK_ICON_VIEW_DROP_LEFT:
        s = "ICON_VIEW_DROP_LEFT";
        break;
    case GTK_ICON_VIEW_DROP_RIGHT:
        s = "ICON_VIEW_DROP_RIGHT";
        break;
    case GTK_ICON_VIEW_DROP_ABOVE:
        s = "ICON_VIEW_DROP_ABOVE";
        break;
    case GTK_ICON_VIEW_DROP_BELOW:
        s = "ICON_VIEW_DROP_BELOW";
        break;
    }
    *(const char**)ret = s;
}
static void RecentChooserError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RECENT_CHOOSER_ERROR_NOT_FOUND:
        s = "RECENT_CHOOSER_ERROR_NOT_FOUND";
        break;
    case GTK_RECENT_CHOOSER_ERROR_INVALID_URI:
        s = "RECENT_CHOOSER_ERROR_INVALID_URI";
        break;
    }
    *(const char**)ret = s;
}
static void CTreeExpansionType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CTREE_EXPANSION_EXPAND:
        s = "CTREE_EXPANSION_EXPAND";
        break;
    case GTK_CTREE_EXPANSION_EXPAND_RECURSIVE:
        s = "CTREE_EXPANSION_EXPAND_RECURSIVE";
        break;
    case GTK_CTREE_EXPANSION_COLLAPSE:
        s = "CTREE_EXPANSION_COLLAPSE";
        break;
    case GTK_CTREE_EXPANSION_COLLAPSE_RECURSIVE:
        s = "CTREE_EXPANSION_COLLAPSE_RECURSIVE";
        break;
    case GTK_CTREE_EXPANSION_TOGGLE:
        s = "CTREE_EXPANSION_TOGGLE";
        break;
    case GTK_CTREE_EXPANSION_TOGGLE_RECURSIVE:
        s = "CTREE_EXPANSION_TOGGLE_RECURSIVE";
        break;
    }
    *(const char**)ret = s;
}
static void CListDragPos_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CLIST_DRAG_NONE:
        s = "CLIST_DRAG_NONE";
        break;
    case GTK_CLIST_DRAG_BEFORE:
        s = "CLIST_DRAG_BEFORE";
        break;
    case GTK_CLIST_DRAG_INTO:
        s = "CLIST_DRAG_INTO";
        break;
    case GTK_CLIST_DRAG_AFTER:
        s = "CLIST_DRAG_AFTER";
        break;
    }
    *(const char**)ret = s;
}
static void FileFilterFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_FILE_FILTER_FILENAME:
        s = "FILE_FILTER_FILENAME";
        break;
    case GTK_FILE_FILTER_URI:
        s = "FILE_FILTER_URI";
        break;
    case GTK_FILE_FILTER_DISPLAY_NAME:
        s = "FILE_FILTER_DISPLAY_NAME";
        break;
    case GTK_FILE_FILTER_MIME_TYPE:
        s = "FILE_FILTER_MIME_TYPE";
        break;
    }
    *(const char**)ret = s;
}
static void WidgetFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TOPLEVEL:
        s = "TOPLEVEL";
        break;
    case GTK_NO_WINDOW:
        s = "NO_WINDOW";
        break;
    case GTK_REALIZED:
        s = "REALIZED";
        break;
    case GTK_MAPPED:
        s = "MAPPED";
        break;
    case GTK_VISIBLE:
        s = "VISIBLE";
        break;
    case GTK_SENSITIVE:
        s = "SENSITIVE";
        break;
    case GTK_PARENT_SENSITIVE:
        s = "PARENT_SENSITIVE";
        break;
    case GTK_CAN_FOCUS:
        s = "CAN_FOCUS";
        break;
    case GTK_HAS_FOCUS:
        s = "HAS_FOCUS";
        break;
    case GTK_CAN_DEFAULT:
        s = "CAN_DEFAULT";
        break;
    case GTK_HAS_DEFAULT:
        s = "HAS_DEFAULT";
        break;
    case GTK_HAS_GRAB:
        s = "HAS_GRAB";
        break;
    case GTK_RC_STYLE:
        s = "RC_STYLE";
        break;
    case GTK_COMPOSITE_CHILD:
        s = "COMPOSITE_CHILD";
        break;
    case GTK_NO_REPARENT:
        s = "NO_REPARENT";
        break;
    case GTK_APP_PAINTABLE:
        s = "APP_PAINTABLE";
        break;
    case GTK_RECEIVES_DEFAULT:
        s = "RECEIVES_DEFAULT";
        break;
    case GTK_DOUBLE_BUFFERED:
        s = "DOUBLE_BUFFERED";
        break;
    case GTK_NO_SHOW_ALL:
        s = "NO_SHOW_ALL";
        break;
    }
    *(const char**)ret = s;
}
static void CellRendererMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CELL_RENDERER_MODE_INERT:
        s = "CELL_RENDERER_MODE_INERT";
        break;
    case GTK_CELL_RENDERER_MODE_ACTIVATABLE:
        s = "CELL_RENDERER_MODE_ACTIVATABLE";
        break;
    case GTK_CELL_RENDERER_MODE_EDITABLE:
        s = "CELL_RENDERER_MODE_EDITABLE";
        break;
    }
    *(const char**)ret = s;
}
static void PrintError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_ERROR_GENERAL:
        s = "PRINT_ERROR_GENERAL";
        break;
    case GTK_PRINT_ERROR_INTERNAL_ERROR:
        s = "PRINT_ERROR_INTERNAL_ERROR";
        break;
    case GTK_PRINT_ERROR_NOMEM:
        s = "PRINT_ERROR_NOMEM";
        break;
    case GTK_PRINT_ERROR_INVALID_FILE:
        s = "PRINT_ERROR_INVALID_FILE";
        break;
    }
    *(const char**)ret = s;
}
static void ProgressBarOrientation_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PROGRESS_LEFT_TO_RIGHT:
        s = "PROGRESS_LEFT_TO_RIGHT";
        break;
    case GTK_PROGRESS_RIGHT_TO_LEFT:
        s = "PROGRESS_RIGHT_TO_LEFT";
        break;
    case GTK_PROGRESS_BOTTOM_TO_TOP:
        s = "PROGRESS_BOTTOM_TO_TOP";
        break;
    case GTK_PROGRESS_TOP_TO_BOTTOM:
        s = "PROGRESS_TOP_TO_BOTTOM";
        break;
    }
    *(const char**)ret = s;
}
static void RecentManagerError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RECENT_MANAGER_ERROR_NOT_FOUND:
        s = "RECENT_MANAGER_ERROR_NOT_FOUND";
        break;
    case GTK_RECENT_MANAGER_ERROR_INVALID_URI:
        s = "RECENT_MANAGER_ERROR_INVALID_URI";
        break;
    case GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING:
        s = "RECENT_MANAGER_ERROR_INVALID_ENCODING";
        break;
    case GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED:
        s = "RECENT_MANAGER_ERROR_NOT_REGISTERED";
        break;
    case GTK_RECENT_MANAGER_ERROR_READ:
        s = "RECENT_MANAGER_ERROR_READ";
        break;
    case GTK_RECENT_MANAGER_ERROR_WRITE:
        s = "RECENT_MANAGER_ERROR_WRITE";
        break;
    case GTK_RECENT_MANAGER_ERROR_UNKNOWN:
        s = "RECENT_MANAGER_ERROR_UNKNOWN";
        break;
    }
    *(const char**)ret = s;
}
static void EntryIconPosition_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ENTRY_ICON_PRIMARY:
        s = "ENTRY_ICON_PRIMARY";
        break;
    case GTK_ENTRY_ICON_SECONDARY:
        s = "ENTRY_ICON_SECONDARY";
        break;
    }
    *(const char**)ret = s;
}
static void WidgetHelpType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_WIDGET_HELP_TOOLTIP:
        s = "WIDGET_HELP_TOOLTIP";
        break;
    case GTK_WIDGET_HELP_WHATS_THIS:
        s = "WIDGET_HELP_WHATS_THIS";
        break;
    }
    *(const char**)ret = s;
}
static void CTreeLineStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CTREE_LINES_NONE:
        s = "CTREE_LINES_NONE";
        break;
    case GTK_CTREE_LINES_SOLID:
        s = "CTREE_LINES_SOLID";
        break;
    case GTK_CTREE_LINES_DOTTED:
        s = "CTREE_LINES_DOTTED";
        break;
    case GTK_CTREE_LINES_TABBED:
        s = "CTREE_LINES_TABBED";
        break;
    }
    *(const char**)ret = s;
}
static void ToolbarChildType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TOOLBAR_CHILD_SPACE:
        s = "TOOLBAR_CHILD_SPACE";
        break;
    case GTK_TOOLBAR_CHILD_BUTTON:
        s = "TOOLBAR_CHILD_BUTTON";
        break;
    case GTK_TOOLBAR_CHILD_TOGGLEBUTTON:
        s = "TOOLBAR_CHILD_TOGGLEBUTTON";
        break;
    case GTK_TOOLBAR_CHILD_RADIOBUTTON:
        s = "TOOLBAR_CHILD_RADIOBUTTON";
        break;
    case GTK_TOOLBAR_CHILD_WIDGET:
        s = "TOOLBAR_CHILD_WIDGET";
        break;
    }
    *(const char**)ret = s;
}
static void Unit_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_UNIT_PIXEL:
        s = "UNIT_PIXEL";
        break;
    case GTK_UNIT_POINTS:
        s = "UNIT_POINTS";
        break;
    case GTK_UNIT_INCH:
        s = "UNIT_INCH";
        break;
    case GTK_UNIT_MM:
        s = "UNIT_MM";
        break;
    }
    *(const char**)ret = s;
}
static void PrintOperationAction_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG:
        s = "PRINT_OPERATION_ACTION_PRINT_DIALOG";
        break;
    case GTK_PRINT_OPERATION_ACTION_PRINT:
        s = "PRINT_OPERATION_ACTION_PRINT";
        break;
    case GTK_PRINT_OPERATION_ACTION_PREVIEW:
        s = "PRINT_OPERATION_ACTION_PREVIEW";
        break;
    case GTK_PRINT_OPERATION_ACTION_EXPORT:
        s = "PRINT_OPERATION_ACTION_EXPORT";
        break;
    }
    *(const char**)ret = s;
}
static void PrintDuplex_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PRINT_DUPLEX_SIMPLEX:
        s = "PRINT_DUPLEX_SIMPLEX";
        break;
    case GTK_PRINT_DUPLEX_HORIZONTAL:
        s = "PRINT_DUPLEX_HORIZONTAL";
        break;
    case GTK_PRINT_DUPLEX_VERTICAL:
        s = "PRINT_DUPLEX_VERTICAL";
        break;
    }
    *(const char**)ret = s;
}
static void AccelFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ACCEL_VISIBLE:
        s = "ACCEL_VISIBLE";
        break;
    case GTK_ACCEL_LOCKED:
        s = "ACCEL_LOCKED";
        break;
    case GTK_ACCEL_MASK:
        s = "ACCEL_MASK";
        break;
    }
    *(const char**)ret = s;
}
static void ToolbarSpaceStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TOOLBAR_SPACE_EMPTY:
        s = "TOOLBAR_SPACE_EMPTY";
        break;
    case GTK_TOOLBAR_SPACE_LINE:
        s = "TOOLBAR_SPACE_LINE";
        break;
    }
    *(const char**)ret = s;
}
static void TreeViewDropPosition_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TREE_VIEW_DROP_BEFORE:
        s = "TREE_VIEW_DROP_BEFORE";
        break;
    case GTK_TREE_VIEW_DROP_AFTER:
        s = "TREE_VIEW_DROP_AFTER";
        break;
    case GTK_TREE_VIEW_DROP_INTO_OR_BEFORE:
        s = "TREE_VIEW_DROP_INTO_OR_BEFORE";
        break;
    case GTK_TREE_VIEW_DROP_INTO_OR_AFTER:
        s = "TREE_VIEW_DROP_INTO_OR_AFTER";
        break;
    }
    *(const char**)ret = s;
}
static void WindowPosition_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_WIN_POS_NONE:
        s = "WIN_POS_NONE";
        break;
    case GTK_WIN_POS_CENTER:
        s = "WIN_POS_CENTER";
        break;
    case GTK_WIN_POS_MOUSE:
        s = "WIN_POS_MOUSE";
        break;
    case GTK_WIN_POS_CENTER_ALWAYS:
        s = "WIN_POS_CENTER_ALWAYS";
        break;
    case GTK_WIN_POS_CENTER_ON_PARENT:
        s = "WIN_POS_CENTER_ON_PARENT";
        break;
    }
    *(const char**)ret = s;
}
static void FileChooserConfirmation_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM:
        s = "FILE_CHOOSER_CONFIRMATION_CONFIRM";
        break;
    case GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME:
        s = "FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME";
        break;
    case GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN:
        s = "FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN";
        break;
    }
    *(const char**)ret = s;
}
static void Visibility_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_VISIBILITY_NONE:
        s = "VISIBILITY_NONE";
        break;
    case GTK_VISIBILITY_PARTIAL:
        s = "VISIBILITY_PARTIAL";
        break;
    case GTK_VISIBILITY_FULL:
        s = "VISIBILITY_FULL";
        break;
    }
    *(const char**)ret = s;
}
static void ButtonBoxStyle_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_BUTTONBOX_DEFAULT_STYLE:
        s = "BUTTONBOX_DEFAULT_STYLE";
        break;
    case GTK_BUTTONBOX_SPREAD:
        s = "BUTTONBOX_SPREAD";
        break;
    case GTK_BUTTONBOX_EDGE:
        s = "BUTTONBOX_EDGE";
        break;
    case GTK_BUTTONBOX_START:
        s = "BUTTONBOX_START";
        break;
    case GTK_BUTTONBOX_END:
        s = "BUTTONBOX_END";
        break;
    case GTK_BUTTONBOX_CENTER:
        s = "BUTTONBOX_CENTER";
        break;
    }
    *(const char**)ret = s;
}
static void FileChooserError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_FILE_CHOOSER_ERROR_NONEXISTENT:
        s = "FILE_CHOOSER_ERROR_NONEXISTENT";
        break;
    case GTK_FILE_CHOOSER_ERROR_BAD_FILENAME:
        s = "FILE_CHOOSER_ERROR_BAD_FILENAME";
        break;
    case GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS:
        s = "FILE_CHOOSER_ERROR_ALREADY_EXISTS";
        break;
    case GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME:
        s = "FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME";
        break;
    }
    *(const char**)ret = s;
}
static void PathPriorityType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PATH_PRIO_LOWEST:
        s = "PATH_PRIO_LOWEST";
        break;
    case GTK_PATH_PRIO_GTK:
        s = "PATH_PRIO_GTK";
        break;
    case GTK_PATH_PRIO_APPLICATION:
        s = "PATH_PRIO_APPLICATION";
        break;
    case GTK_PATH_PRIO_THEME:
        s = "PATH_PRIO_THEME";
        break;
    case GTK_PATH_PRIO_RC:
        s = "PATH_PRIO_RC";
        break;
    case GTK_PATH_PRIO_HIGHEST:
        s = "PATH_PRIO_HIGHEST";
        break;
    }
    *(const char**)ret = s;
}
static void CellType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CELL_EMPTY:
        s = "CELL_EMPTY";
        break;
    case GTK_CELL_TEXT:
        s = "CELL_TEXT";
        break;
    case GTK_CELL_PIXMAP:
        s = "CELL_PIXMAP";
        break;
    case GTK_CELL_PIXTEXT:
        s = "CELL_PIXTEXT";
        break;
    case GTK_CELL_WIDGET:
        s = "CELL_WIDGET";
        break;
    }
    *(const char**)ret = s;
}
static void CurveType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CURVE_TYPE_LINEAR:
        s = "CURVE_TYPE_LINEAR";
        break;
    case GTK_CURVE_TYPE_SPLINE:
        s = "CURVE_TYPE_SPLINE";
        break;
    case GTK_CURVE_TYPE_FREE:
        s = "CURVE_TYPE_FREE";
        break;
    }
    *(const char**)ret = s;
}
static void DeleteType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DELETE_CHARS:
        s = "DELETE_CHARS";
        break;
    case GTK_DELETE_WORD_ENDS:
        s = "DELETE_WORD_ENDS";
        break;
    case GTK_DELETE_WORDS:
        s = "DELETE_WORDS";
        break;
    case GTK_DELETE_DISPLAY_LINES:
        s = "DELETE_DISPLAY_LINES";
        break;
    case GTK_DELETE_DISPLAY_LINE_ENDS:
        s = "DELETE_DISPLAY_LINE_ENDS";
        break;
    case GTK_DELETE_PARAGRAPH_ENDS:
        s = "DELETE_PARAGRAPH_ENDS";
        break;
    case GTK_DELETE_PARAGRAPHS:
        s = "DELETE_PARAGRAPHS";
        break;
    case GTK_DELETE_WHITESPACE:
        s = "DELETE_WHITESPACE";
        break;
    }
    *(const char**)ret = s;
}
static void IconSize_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ICON_SIZE_INVALID:
        s = "ICON_SIZE_INVALID";
        break;
    case GTK_ICON_SIZE_MENU:
        s = "ICON_SIZE_MENU";
        break;
    case GTK_ICON_SIZE_SMALL_TOOLBAR:
        s = "ICON_SIZE_SMALL_TOOLBAR";
        break;
    case GTK_ICON_SIZE_LARGE_TOOLBAR:
        s = "ICON_SIZE_LARGE_TOOLBAR";
        break;
    case GTK_ICON_SIZE_BUTTON:
        s = "ICON_SIZE_BUTTON";
        break;
    case GTK_ICON_SIZE_DND:
        s = "ICON_SIZE_DND";
        break;
    case GTK_ICON_SIZE_DIALOG:
        s = "ICON_SIZE_DIALOG";
        break;
    }
    *(const char**)ret = s;
}
static void SensitivityType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SENSITIVITY_AUTO:
        s = "SENSITIVITY_AUTO";
        break;
    case GTK_SENSITIVITY_ON:
        s = "SENSITIVITY_ON";
        break;
    case GTK_SENSITIVITY_OFF:
        s = "SENSITIVITY_OFF";
        break;
    }
    *(const char**)ret = s;
}
static void PathType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PATH_WIDGET:
        s = "PATH_WIDGET";
        break;
    case GTK_PATH_WIDGET_CLASS:
        s = "PATH_WIDGET_CLASS";
        break;
    case GTK_PATH_CLASS:
        s = "PATH_CLASS";
        break;
    }
    *(const char**)ret = s;
}
static void ResizeMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RESIZE_PARENT:
        s = "RESIZE_PARENT";
        break;
    case GTK_RESIZE_QUEUE:
        s = "RESIZE_QUEUE";
        break;
    case GTK_RESIZE_IMMEDIATE:
        s = "RESIZE_IMMEDIATE";
        break;
    }
    *(const char**)ret = s;
}
static void SelectionMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SELECTION_NONE:
        s = "SELECTION_NONE";
        break;
    case GTK_SELECTION_SINGLE:
        s = "SELECTION_SINGLE";
        break;
    case GTK_SELECTION_BROWSE:
        s = "SELECTION_BROWSE";
        break;
    case GTK_SELECTION_MULTIPLE:
        s = "SELECTION_MULTIPLE";
        break;
    }
    *(const char**)ret = s;
}
static void SubmenuPlacement_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_TOP_BOTTOM:
        s = "TOP_BOTTOM";
        break;
    case GTK_LEFT_RIGHT:
        s = "LEFT_RIGHT";
        break;
    }
    *(const char**)ret = s;
}
static void WrapMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_WRAP_NONE:
        s = "WRAP_NONE";
        break;
    case GTK_WRAP_CHAR:
        s = "WRAP_CHAR";
        break;
    case GTK_WRAP_WORD:
        s = "WRAP_WORD";
        break;
    case GTK_WRAP_WORD_CHAR:
        s = "WRAP_WORD_CHAR";
        break;
    }
    *(const char**)ret = s;
}
static void NumberUpLayout_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM:
        s = "NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM";
        break;
    case GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP:
        s = "NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP";
        break;
    case GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM:
        s = "NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM";
        break;
    case GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP:
        s = "NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP";
        break;
    case GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT:
        s = "NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT";
        break;
    case GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT:
        s = "NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT";
        break;
    case GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT:
        s = "NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT";
        break;
    case GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT:
        s = "NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT";
        break;
    }
    *(const char**)ret = s;
}
static void PageOrientation_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PAGE_ORIENTATION_PORTRAIT:
        s = "PAGE_ORIENTATION_PORTRAIT";
        break;
    case GTK_PAGE_ORIENTATION_LANDSCAPE:
        s = "PAGE_ORIENTATION_LANDSCAPE";
        break;
    case GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT:
        s = "PAGE_ORIENTATION_REVERSE_PORTRAIT";
        break;
    case GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE:
        s = "PAGE_ORIENTATION_REVERSE_LANDSCAPE";
        break;
    }
    *(const char**)ret = s;
}
static void DialogFlags_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_DIALOG_MODAL:
        s = "DIALOG_MODAL";
        break;
    case GTK_DIALOG_DESTROY_WITH_PARENT:
        s = "DIALOG_DESTROY_WITH_PARENT";
        break;
    case GTK_DIALOG_NO_SEPARATOR:
        s = "DIALOG_NO_SEPARATOR";
        break;
    }
    *(const char**)ret = s;
}
static void ResponseType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_RESPONSE_NONE:
        s = "RESPONSE_NONE";
        break;
    case GTK_RESPONSE_REJECT:
        s = "RESPONSE_REJECT";
        break;
    case GTK_RESPONSE_ACCEPT:
        s = "RESPONSE_ACCEPT";
        break;
    case GTK_RESPONSE_DELETE_EVENT:
        s = "RESPONSE_DELETE_EVENT";
        break;
    case GTK_RESPONSE_OK:
        s = "RESPONSE_OK";
        break;
    case GTK_RESPONSE_CANCEL:
        s = "RESPONSE_CANCEL";
        break;
    case GTK_RESPONSE_CLOSE:
        s = "RESPONSE_CLOSE";
        break;
    case GTK_RESPONSE_YES:
        s = "RESPONSE_YES";
        break;
    case GTK_RESPONSE_NO:
        s = "RESPONSE_NO";
        break;
    case GTK_RESPONSE_APPLY:
        s = "RESPONSE_APPLY";
        break;
    case GTK_RESPONSE_HELP:
        s = "RESPONSE_HELP";
        break;
    }
    *(const char**)ret = s;
}
static void AssistantPageType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ASSISTANT_PAGE_CONTENT:
        s = "ASSISTANT_PAGE_CONTENT";
        break;
    case GTK_ASSISTANT_PAGE_INTRO:
        s = "ASSISTANT_PAGE_INTRO";
        break;
    case GTK_ASSISTANT_PAGE_CONFIRM:
        s = "ASSISTANT_PAGE_CONFIRM";
        break;
    case GTK_ASSISTANT_PAGE_SUMMARY:
        s = "ASSISTANT_PAGE_SUMMARY";
        break;
    case GTK_ASSISTANT_PAGE_PROGRESS:
        s = "ASSISTANT_PAGE_PROGRESS";
        break;
    }
    *(const char**)ret = s;
}
static void IconThemeError_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_ICON_THEME_NOT_FOUND:
        s = "ICON_THEME_NOT_FOUND";
        break;
    case GTK_ICON_THEME_FAILED:
        s = "ICON_THEME_FAILED";
        break;
    }
    *(const char**)ret = s;
}
static void MetricType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_PIXELS:
        s = "PIXELS";
        break;
    case GTK_INCHES:
        s = "INCHES";
        break;
    case GTK_CENTIMETERS:
        s = "CENTIMETERS";
        break;
    }
    *(const char**)ret = s;
}
static void CTreePos_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_CTREE_POS_BEFORE:
        s = "CTREE_POS_BEFORE";
        break;
    case GTK_CTREE_POS_AS_CHILD:
        s = "CTREE_POS_AS_CHILD";
        break;
    case GTK_CTREE_POS_AFTER:
        s = "CTREE_POS_AFTER";
        break;
    }
    *(const char**)ret = s;
}
static void ShadowType_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case GTK_SHADOW_NONE:
        s = "SHADOW_NONE";
        break;
    case GTK_SHADOW_IN:
        s = "SHADOW_IN";
        break;
    case GTK_SHADOW_OUT:
        s = "SHADOW_OUT";
        break;
    case GTK_SHADOW_ETCHED_IN:
        s = "SHADOW_ETCHED_IN";
        break;
    case GTK_SHADOW_ETCHED_OUT:
        s = "SHADOW_ETCHED_OUT";
        break;
    }
    *(const char**)ret = s;
}

#define ENUMS_CONSTS \
STD2_CONST("CTREE_EXPANDER_NONE", INT, GTK_CTREE_EXPANDER_NONE) \
STD2_CONST("CTREE_EXPANDER_SQUARE", INT, GTK_CTREE_EXPANDER_SQUARE) \
STD2_CONST("CTREE_EXPANDER_TRIANGLE", INT, GTK_CTREE_EXPANDER_TRIANGLE) \
STD2_CONST("CTREE_EXPANDER_CIRCULAR", INT, GTK_CTREE_EXPANDER_CIRCULAR) \
STD2_CONST("IM_PREEDIT_NOTHING", INT, GTK_IM_PREEDIT_NOTHING) \
STD2_CONST("IM_PREEDIT_CALLBACK", INT, GTK_IM_PREEDIT_CALLBACK) \
STD2_CONST("IM_PREEDIT_NONE", INT, GTK_IM_PREEDIT_NONE) \
STD2_CONST("IN_DESTRUCTION", INT, GTK_IN_DESTRUCTION) \
STD2_CONST("FLOATING", INT, GTK_FLOATING) \
STD2_CONST("RESERVED_1", INT, GTK_RESERVED_1) \
STD2_CONST("RESERVED_2", INT, GTK_RESERVED_2) \
STD2_CONST("DEBUG_MISC", INT, GTK_DEBUG_MISC) \
STD2_CONST("DEBUG_PLUGSOCKET", INT, GTK_DEBUG_PLUGSOCKET) \
STD2_CONST("DEBUG_TEXT", INT, GTK_DEBUG_TEXT) \
STD2_CONST("DEBUG_TREE", INT, GTK_DEBUG_TREE) \
STD2_CONST("DEBUG_UPDATES", INT, GTK_DEBUG_UPDATES) \
STD2_CONST("DEBUG_KEYBINDINGS", INT, GTK_DEBUG_KEYBINDINGS) \
STD2_CONST("DEBUG_MULTIHEAD", INT, GTK_DEBUG_MULTIHEAD) \
STD2_CONST("DEBUG_MODULES", INT, GTK_DEBUG_MODULES) \
STD2_CONST("DEBUG_GEOMETRY", INT, GTK_DEBUG_GEOMETRY) \
STD2_CONST("DEBUG_ICONTHEME", INT, GTK_DEBUG_ICONTHEME) \
STD2_CONST("DEBUG_PRINTING", INT, GTK_DEBUG_PRINTING) \
STD2_CONST("DEBUG_BUILDER", INT, GTK_DEBUG_BUILDER) \
STD2_CONST("SIZE_GROUP_NONE", INT, GTK_SIZE_GROUP_NONE) \
STD2_CONST("SIZE_GROUP_HORIZONTAL", INT, GTK_SIZE_GROUP_HORIZONTAL) \
STD2_CONST("SIZE_GROUP_VERTICAL", INT, GTK_SIZE_GROUP_VERTICAL) \
STD2_CONST("SIZE_GROUP_BOTH", INT, GTK_SIZE_GROUP_BOTH) \
STD2_CONST("MATCH_ALL", INT, GTK_MATCH_ALL) \
STD2_CONST("MATCH_ALL_TAIL", INT, GTK_MATCH_ALL_TAIL) \
STD2_CONST("MATCH_HEAD", INT, GTK_MATCH_HEAD) \
STD2_CONST("MATCH_TAIL", INT, GTK_MATCH_TAIL) \
STD2_CONST("MATCH_EXACT", INT, GTK_MATCH_EXACT) \
STD2_CONST("MATCH_LAST", INT, GTK_MATCH_LAST) \
STD2_CONST("EXPANDER_COLLAPSED", INT, GTK_EXPANDER_COLLAPSED) \
STD2_CONST("EXPANDER_SEMI_COLLAPSED", INT, GTK_EXPANDER_SEMI_COLLAPSED) \
STD2_CONST("EXPANDER_SEMI_EXPANDED", INT, GTK_EXPANDER_SEMI_EXPANDED) \
STD2_CONST("EXPANDER_EXPANDED", INT, GTK_EXPANDER_EXPANDED) \
STD2_CONST("DIR_TAB_FORWARD", INT, GTK_DIR_TAB_FORWARD) \
STD2_CONST("DIR_TAB_BACKWARD", INT, GTK_DIR_TAB_BACKWARD) \
STD2_CONST("DIR_UP", INT, GTK_DIR_UP) \
STD2_CONST("DIR_DOWN", INT, GTK_DIR_DOWN) \
STD2_CONST("DIR_LEFT", INT, GTK_DIR_LEFT) \
STD2_CONST("DIR_RIGHT", INT, GTK_DIR_RIGHT) \
STD2_CONST("WINDOW_TOPLEVEL", INT, GTK_WINDOW_TOPLEVEL) \
STD2_CONST("WINDOW_POPUP", INT, GTK_WINDOW_POPUP) \
STD2_CONST("RECENT_SORT_NONE", INT, GTK_RECENT_SORT_NONE) \
STD2_CONST("RECENT_SORT_MRU", INT, GTK_RECENT_SORT_MRU) \
STD2_CONST("RECENT_SORT_LRU", INT, GTK_RECENT_SORT_LRU) \
STD2_CONST("RECENT_SORT_CUSTOM", INT, GTK_RECENT_SORT_CUSTOM) \
STD2_CONST("ARROWS_BOTH", INT, GTK_ARROWS_BOTH) \
STD2_CONST("ARROWS_START", INT, GTK_ARROWS_START) \
STD2_CONST("ARROWS_END", INT, GTK_ARROWS_END) \
STD2_CONST("TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS", INT, GTK_TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS) \
STD2_CONST("TEXT_BUFFER_TARGET_INFO_RICH_TEXT", INT, GTK_TEXT_BUFFER_TARGET_INFO_RICH_TEXT) \
STD2_CONST("TEXT_BUFFER_TARGET_INFO_TEXT", INT, GTK_TEXT_BUFFER_TARGET_INFO_TEXT) \
STD2_CONST("DEST_DEFAULT_MOTION", INT, GTK_DEST_DEFAULT_MOTION) \
STD2_CONST("DEST_DEFAULT_HIGHLIGHT", INT, GTK_DEST_DEFAULT_HIGHLIGHT) \
STD2_CONST("DEST_DEFAULT_DROP", INT, GTK_DEST_DEFAULT_DROP) \
STD2_CONST("DEST_DEFAULT_ALL", INT, GTK_DEST_DEFAULT_ALL) \
STD2_CONST("CELL_RENDERER_ACCEL_MODE_GTK", INT, GTK_CELL_RENDERER_ACCEL_MODE_GTK) \
STD2_CONST("CELL_RENDERER_ACCEL_MODE_OTHER", INT, GTK_CELL_RENDERER_ACCEL_MODE_OTHER) \
STD2_CONST("FILE_CHOOSER_ACTION_OPEN", INT, GTK_FILE_CHOOSER_ACTION_OPEN) \
STD2_CONST("FILE_CHOOSER_ACTION_SAVE", INT, GTK_FILE_CHOOSER_ACTION_SAVE) \
STD2_CONST("FILE_CHOOSER_ACTION_SELECT_FOLDER", INT, GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER) \
STD2_CONST("FILE_CHOOSER_ACTION_CREATE_FOLDER", INT, GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER) \
STD2_CONST("IM_STATUS_NOTHING", INT, GTK_IM_STATUS_NOTHING) \
STD2_CONST("IM_STATUS_CALLBACK", INT, GTK_IM_STATUS_CALLBACK) \
STD2_CONST("IM_STATUS_NONE", INT, GTK_IM_STATUS_NONE) \
STD2_CONST("TARGET_SAME_APP", INT, GTK_TARGET_SAME_APP) \
STD2_CONST("TARGET_SAME_WIDGET", INT, GTK_TARGET_SAME_WIDGET) \
STD2_CONST("TARGET_OTHER_APP", INT, GTK_TARGET_OTHER_APP) \
STD2_CONST("TARGET_OTHER_WIDGET", INT, GTK_TARGET_OTHER_WIDGET) \
STD2_CONST("PRINT_OPERATION_RESULT_ERROR", INT, GTK_PRINT_OPERATION_RESULT_ERROR) \
STD2_CONST("PRINT_OPERATION_RESULT_APPLY", INT, GTK_PRINT_OPERATION_RESULT_APPLY) \
STD2_CONST("PRINT_OPERATION_RESULT_CANCEL", INT, GTK_PRINT_OPERATION_RESULT_CANCEL) \
STD2_CONST("PRINT_OPERATION_RESULT_IN_PROGRESS", INT, GTK_PRINT_OPERATION_RESULT_IN_PROGRESS) \
STD2_CONST("TREE_VIEW_GRID_LINES_NONE", INT, GTK_TREE_VIEW_GRID_LINES_NONE) \
STD2_CONST("TREE_VIEW_GRID_LINES_HORIZONTAL", INT, GTK_TREE_VIEW_GRID_LINES_HORIZONTAL) \
STD2_CONST("TREE_VIEW_GRID_LINES_VERTICAL", INT, GTK_TREE_VIEW_GRID_LINES_VERTICAL) \
STD2_CONST("TREE_VIEW_GRID_LINES_BOTH", INT, GTK_TREE_VIEW_GRID_LINES_BOTH) \
STD2_CONST("RC_TOKEN_INVALID", INT, GTK_RC_TOKEN_INVALID) \
STD2_CONST("RC_TOKEN_INCLUDE", INT, GTK_RC_TOKEN_INCLUDE) \
STD2_CONST("RC_TOKEN_NORMAL", INT, GTK_RC_TOKEN_NORMAL) \
STD2_CONST("RC_TOKEN_ACTIVE", INT, GTK_RC_TOKEN_ACTIVE) \
STD2_CONST("RC_TOKEN_PRELIGHT", INT, GTK_RC_TOKEN_PRELIGHT) \
STD2_CONST("RC_TOKEN_SELECTED", INT, GTK_RC_TOKEN_SELECTED) \
STD2_CONST("RC_TOKEN_INSENSITIVE", INT, GTK_RC_TOKEN_INSENSITIVE) \
STD2_CONST("RC_TOKEN_FG", INT, GTK_RC_TOKEN_FG) \
STD2_CONST("RC_TOKEN_BG", INT, GTK_RC_TOKEN_BG) \
STD2_CONST("RC_TOKEN_TEXT", INT, GTK_RC_TOKEN_TEXT) \
STD2_CONST("RC_TOKEN_BASE", INT, GTK_RC_TOKEN_BASE) \
STD2_CONST("RC_TOKEN_XTHICKNESS", INT, GTK_RC_TOKEN_XTHICKNESS) \
STD2_CONST("RC_TOKEN_YTHICKNESS", INT, GTK_RC_TOKEN_YTHICKNESS) \
STD2_CONST("RC_TOKEN_FONT", INT, GTK_RC_TOKEN_FONT) \
STD2_CONST("RC_TOKEN_FONTSET", INT, GTK_RC_TOKEN_FONTSET) \
STD2_CONST("RC_TOKEN_FONT_NAME", INT, GTK_RC_TOKEN_FONT_NAME) \
STD2_CONST("RC_TOKEN_BG_PIXMAP", INT, GTK_RC_TOKEN_BG_PIXMAP) \
STD2_CONST("RC_TOKEN_PIXMAP_PATH", INT, GTK_RC_TOKEN_PIXMAP_PATH) \
STD2_CONST("RC_TOKEN_STYLE", INT, GTK_RC_TOKEN_STYLE) \
STD2_CONST("RC_TOKEN_BINDING", INT, GTK_RC_TOKEN_BINDING) \
STD2_CONST("RC_TOKEN_BIND", INT, GTK_RC_TOKEN_BIND) \
STD2_CONST("RC_TOKEN_WIDGET", INT, GTK_RC_TOKEN_WIDGET) \
STD2_CONST("RC_TOKEN_WIDGET_CLASS", INT, GTK_RC_TOKEN_WIDGET_CLASS) \
STD2_CONST("RC_TOKEN_CLASS", INT, GTK_RC_TOKEN_CLASS) \
STD2_CONST("RC_TOKEN_LOWEST", INT, GTK_RC_TOKEN_LOWEST) \
STD2_CONST("RC_TOKEN_GTK", INT, GTK_RC_TOKEN_GTK) \
STD2_CONST("RC_TOKEN_APPLICATION", INT, GTK_RC_TOKEN_APPLICATION) \
STD2_CONST("RC_TOKEN_THEME", INT, GTK_RC_TOKEN_THEME) \
STD2_CONST("RC_TOKEN_RC", INT, GTK_RC_TOKEN_RC) \
STD2_CONST("RC_TOKEN_HIGHEST", INT, GTK_RC_TOKEN_HIGHEST) \
STD2_CONST("RC_TOKEN_ENGINE", INT, GTK_RC_TOKEN_ENGINE) \
STD2_CONST("RC_TOKEN_MODULE_PATH", INT, GTK_RC_TOKEN_MODULE_PATH) \
STD2_CONST("RC_TOKEN_IM_MODULE_PATH", INT, GTK_RC_TOKEN_IM_MODULE_PATH) \
STD2_CONST("RC_TOKEN_IM_MODULE_FILE", INT, GTK_RC_TOKEN_IM_MODULE_FILE) \
STD2_CONST("RC_TOKEN_STOCK", INT, GTK_RC_TOKEN_STOCK) \
STD2_CONST("RC_TOKEN_LTR", INT, GTK_RC_TOKEN_LTR) \
STD2_CONST("RC_TOKEN_RTL", INT, GTK_RC_TOKEN_RTL) \
STD2_CONST("RC_TOKEN_COLOR", INT, GTK_RC_TOKEN_COLOR) \
STD2_CONST("RC_TOKEN_UNBIND", INT, GTK_RC_TOKEN_UNBIND) \
STD2_CONST("RC_TOKEN_LAST", INT, GTK_RC_TOKEN_LAST) \
STD2_CONST("MENU_DIR_PARENT", INT, GTK_MENU_DIR_PARENT) \
STD2_CONST("MENU_DIR_CHILD", INT, GTK_MENU_DIR_CHILD) \
STD2_CONST("MENU_DIR_NEXT", INT, GTK_MENU_DIR_NEXT) \
STD2_CONST("MENU_DIR_PREV", INT, GTK_MENU_DIR_PREV) \
STD2_CONST("TREE_VIEW_COLUMN_GROW_ONLY", INT, GTK_TREE_VIEW_COLUMN_GROW_ONLY) \
STD2_CONST("TREE_VIEW_COLUMN_AUTOSIZE", INT, GTK_TREE_VIEW_COLUMN_AUTOSIZE) \
STD2_CONST("TREE_VIEW_COLUMN_FIXED", INT, GTK_TREE_VIEW_COLUMN_FIXED) \
STD2_CONST("ICON_LOOKUP_NO_SVG", INT, GTK_ICON_LOOKUP_NO_SVG) \
STD2_CONST("ICON_LOOKUP_FORCE_SVG", INT, GTK_ICON_LOOKUP_FORCE_SVG) \
STD2_CONST("ICON_LOOKUP_USE_BUILTIN", INT, GTK_ICON_LOOKUP_USE_BUILTIN) \
STD2_CONST("ICON_LOOKUP_GENERIC_FALLBACK", INT, GTK_ICON_LOOKUP_GENERIC_FALLBACK) \
STD2_CONST("ICON_LOOKUP_FORCE_SIZE", INT, GTK_ICON_LOOKUP_FORCE_SIZE) \
STD2_CONST("RUN_FIRST", INT, GTK_RUN_FIRST) \
STD2_CONST("RUN_LAST", INT, GTK_RUN_LAST) \
STD2_CONST("RUN_BOTH", INT, GTK_RUN_BOTH) \
STD2_CONST("RUN_NO_RECURSE", INT, GTK_RUN_NO_RECURSE) \
STD2_CONST("RUN_ACTION", INT, GTK_RUN_ACTION) \
STD2_CONST("RUN_NO_HOOKS", INT, GTK_RUN_NO_HOOKS) \
STD2_CONST("UI_MANAGER_AUTO", INT, GTK_UI_MANAGER_AUTO) \
STD2_CONST("UI_MANAGER_MENUBAR", INT, GTK_UI_MANAGER_MENUBAR) \
STD2_CONST("UI_MANAGER_MENU", INT, GTK_UI_MANAGER_MENU) \
STD2_CONST("UI_MANAGER_TOOLBAR", INT, GTK_UI_MANAGER_TOOLBAR) \
STD2_CONST("UI_MANAGER_PLACEHOLDER", INT, GTK_UI_MANAGER_PLACEHOLDER) \
STD2_CONST("UI_MANAGER_POPUP", INT, GTK_UI_MANAGER_POPUP) \
STD2_CONST("UI_MANAGER_MENUITEM", INT, GTK_UI_MANAGER_MENUITEM) \
STD2_CONST("UI_MANAGER_TOOLITEM", INT, GTK_UI_MANAGER_TOOLITEM) \
STD2_CONST("UI_MANAGER_SEPARATOR", INT, GTK_UI_MANAGER_SEPARATOR) \
STD2_CONST("UI_MANAGER_ACCELERATOR", INT, GTK_UI_MANAGER_ACCELERATOR) \
STD2_CONST("UI_MANAGER_POPUP_WITH_ACCELS", INT, GTK_UI_MANAGER_POPUP_WITH_ACCELS) \
STD2_CONST("PREVIEW_COLOR", INT, GTK_PREVIEW_COLOR) \
STD2_CONST("PREVIEW_GRAYSCALE", INT, GTK_PREVIEW_GRAYSCALE) \
STD2_CONST("RELIEF_NORMAL", INT, GTK_RELIEF_NORMAL) \
STD2_CONST("RELIEF_HALF", INT, GTK_RELIEF_HALF) \
STD2_CONST("RELIEF_NONE", INT, GTK_RELIEF_NONE) \
STD2_CONST("JUSTIFY_LEFT", INT, GTK_JUSTIFY_LEFT) \
STD2_CONST("JUSTIFY_RIGHT", INT, GTK_JUSTIFY_RIGHT) \
STD2_CONST("JUSTIFY_CENTER", INT, GTK_JUSTIFY_CENTER) \
STD2_CONST("JUSTIFY_FILL", INT, GTK_JUSTIFY_FILL) \
STD2_CONST("BUTTONS_NONE", INT, GTK_BUTTONS_NONE) \
STD2_CONST("BUTTONS_OK", INT, GTK_BUTTONS_OK) \
STD2_CONST("BUTTONS_CLOSE", INT, GTK_BUTTONS_CLOSE) \
STD2_CONST("BUTTONS_CANCEL", INT, GTK_BUTTONS_CANCEL) \
STD2_CONST("BUTTONS_YES_NO", INT, GTK_BUTTONS_YES_NO) \
STD2_CONST("BUTTONS_OK_CANCEL", INT, GTK_BUTTONS_OK_CANCEL) \
STD2_CONST("PROGRESS_CONTINUOUS", INT, GTK_PROGRESS_CONTINUOUS) \
STD2_CONST("PROGRESS_DISCRETE", INT, GTK_PROGRESS_DISCRETE) \
STD2_CONST("MESSAGE_INFO", INT, GTK_MESSAGE_INFO) \
STD2_CONST("MESSAGE_WARNING", INT, GTK_MESSAGE_WARNING) \
STD2_CONST("MESSAGE_QUESTION", INT, GTK_MESSAGE_QUESTION) \
STD2_CONST("MESSAGE_ERROR", INT, GTK_MESSAGE_ERROR) \
STD2_CONST("MESSAGE_OTHER", INT, GTK_MESSAGE_OTHER) \
STD2_CONST("UPDATE_ALWAYS", INT, GTK_UPDATE_ALWAYS) \
STD2_CONST("UPDATE_IF_VALID", INT, GTK_UPDATE_IF_VALID) \
STD2_CONST("TOOLBAR_ICONS", INT, GTK_TOOLBAR_ICONS) \
STD2_CONST("TOOLBAR_TEXT", INT, GTK_TOOLBAR_TEXT) \
STD2_CONST("TOOLBAR_BOTH", INT, GTK_TOOLBAR_BOTH) \
STD2_CONST("TOOLBAR_BOTH_HORIZ", INT, GTK_TOOLBAR_BOTH_HORIZ) \
STD2_CONST("CELL_RENDERER_SELECTED", INT, GTK_CELL_RENDERER_SELECTED) \
STD2_CONST("CELL_RENDERER_PRELIT", INT, GTK_CELL_RENDERER_PRELIT) \
STD2_CONST("CELL_RENDERER_INSENSITIVE", INT, GTK_CELL_RENDERER_INSENSITIVE) \
STD2_CONST("CELL_RENDERER_SORTED", INT, GTK_CELL_RENDERER_SORTED) \
STD2_CONST("CELL_RENDERER_FOCUSED", INT, GTK_CELL_RENDERER_FOCUSED) \
STD2_CONST("ANCHOR_CENTER", INT, GTK_ANCHOR_CENTER) \
STD2_CONST("ANCHOR_NORTH", INT, GTK_ANCHOR_NORTH) \
STD2_CONST("ANCHOR_NORTH_WEST", INT, GTK_ANCHOR_NORTH_WEST) \
STD2_CONST("ANCHOR_NORTH_EAST", INT, GTK_ANCHOR_NORTH_EAST) \
STD2_CONST("ANCHOR_SOUTH", INT, GTK_ANCHOR_SOUTH) \
STD2_CONST("ANCHOR_SOUTH_WEST", INT, GTK_ANCHOR_SOUTH_WEST) \
STD2_CONST("ANCHOR_SOUTH_EAST", INT, GTK_ANCHOR_SOUTH_EAST) \
STD2_CONST("ANCHOR_WEST", INT, GTK_ANCHOR_WEST) \
STD2_CONST("ANCHOR_EAST", INT, GTK_ANCHOR_EAST) \
STD2_CONST("ANCHOR_N", INT, GTK_ANCHOR_N) \
STD2_CONST("ANCHOR_NW", INT, GTK_ANCHOR_NW) \
STD2_CONST("ANCHOR_NE", INT, GTK_ANCHOR_NE) \
STD2_CONST("ANCHOR_S", INT, GTK_ANCHOR_S) \
STD2_CONST("ANCHOR_SW", INT, GTK_ANCHOR_SW) \
STD2_CONST("ANCHOR_SE", INT, GTK_ANCHOR_SE) \
STD2_CONST("ANCHOR_W", INT, GTK_ANCHOR_W) \
STD2_CONST("ANCHOR_E", INT, GTK_ANCHOR_E) \
STD2_CONST("PRINT_QUALITY_LOW", INT, GTK_PRINT_QUALITY_LOW) \
STD2_CONST("PRINT_QUALITY_NORMAL", INT, GTK_PRINT_QUALITY_NORMAL) \
STD2_CONST("PRINT_QUALITY_HIGH", INT, GTK_PRINT_QUALITY_HIGH) \
STD2_CONST("PRINT_QUALITY_DRAFT", INT, GTK_PRINT_QUALITY_DRAFT) \
STD2_CONST("SORT_ASCENDING", INT, GTK_SORT_ASCENDING) \
STD2_CONST("SORT_DESCENDING", INT, GTK_SORT_DESCENDING) \
STD2_CONST("NOTEBOOK_TAB_FIRST", INT, GTK_NOTEBOOK_TAB_FIRST) \
STD2_CONST("NOTEBOOK_TAB_LAST", INT, GTK_NOTEBOOK_TAB_LAST) \
STD2_CONST("SIDE_TOP", INT, GTK_SIDE_TOP) \
STD2_CONST("SIDE_BOTTOM", INT, GTK_SIDE_BOTTOM) \
STD2_CONST("SIDE_LEFT", INT, GTK_SIDE_LEFT) \
STD2_CONST("SIDE_RIGHT", INT, GTK_SIDE_RIGHT) \
STD2_CONST("SPIN_STEP_FORWARD", INT, GTK_SPIN_STEP_FORWARD) \
STD2_CONST("SPIN_STEP_BACKWARD", INT, GTK_SPIN_STEP_BACKWARD) \
STD2_CONST("SPIN_PAGE_FORWARD", INT, GTK_SPIN_PAGE_FORWARD) \
STD2_CONST("SPIN_PAGE_BACKWARD", INT, GTK_SPIN_PAGE_BACKWARD) \
STD2_CONST("SPIN_HOME", INT, GTK_SPIN_HOME) \
STD2_CONST("SPIN_END", INT, GTK_SPIN_END) \
STD2_CONST("SPIN_USER_DEFINED", INT, GTK_SPIN_USER_DEFINED) \
STD2_CONST("POLICY_ALWAYS", INT, GTK_POLICY_ALWAYS) \
STD2_CONST("POLICY_AUTOMATIC", INT, GTK_POLICY_AUTOMATIC) \
STD2_CONST("POLICY_NEVER", INT, GTK_POLICY_NEVER) \
STD2_CONST("ARROW_UP", INT, GTK_ARROW_UP) \
STD2_CONST("ARROW_DOWN", INT, GTK_ARROW_DOWN) \
STD2_CONST("ARROW_LEFT", INT, GTK_ARROW_LEFT) \
STD2_CONST("ARROW_RIGHT", INT, GTK_ARROW_RIGHT) \
STD2_CONST("ARROW_NONE", INT, GTK_ARROW_NONE) \
STD2_CONST("TEXT_DIR_NONE", INT, GTK_TEXT_DIR_NONE) \
STD2_CONST("TEXT_DIR_LTR", INT, GTK_TEXT_DIR_LTR) \
STD2_CONST("TEXT_DIR_RTL", INT, GTK_TEXT_DIR_RTL) \
STD2_CONST("MOVEMENT_LOGICAL_POSITIONS", INT, GTK_MOVEMENT_LOGICAL_POSITIONS) \
STD2_CONST("MOVEMENT_VISUAL_POSITIONS", INT, GTK_MOVEMENT_VISUAL_POSITIONS) \
STD2_CONST("MOVEMENT_WORDS", INT, GTK_MOVEMENT_WORDS) \
STD2_CONST("MOVEMENT_DISPLAY_LINES", INT, GTK_MOVEMENT_DISPLAY_LINES) \
STD2_CONST("MOVEMENT_DISPLAY_LINE_ENDS", INT, GTK_MOVEMENT_DISPLAY_LINE_ENDS) \
STD2_CONST("MOVEMENT_PARAGRAPHS", INT, GTK_MOVEMENT_PARAGRAPHS) \
STD2_CONST("MOVEMENT_PARAGRAPH_ENDS", INT, GTK_MOVEMENT_PARAGRAPH_ENDS) \
STD2_CONST("MOVEMENT_PAGES", INT, GTK_MOVEMENT_PAGES) \
STD2_CONST("MOVEMENT_BUFFER_ENDS", INT, GTK_MOVEMENT_BUFFER_ENDS) \
STD2_CONST("MOVEMENT_HORIZONTAL_PAGES", INT, GTK_MOVEMENT_HORIZONTAL_PAGES) \
STD2_CONST("SCROLL_STEPS", INT, GTK_SCROLL_STEPS) \
STD2_CONST("SCROLL_PAGES", INT, GTK_SCROLL_PAGES) \
STD2_CONST("SCROLL_ENDS", INT, GTK_SCROLL_ENDS) \
STD2_CONST("SCROLL_HORIZONTAL_STEPS", INT, GTK_SCROLL_HORIZONTAL_STEPS) \
STD2_CONST("SCROLL_HORIZONTAL_PAGES", INT, GTK_SCROLL_HORIZONTAL_PAGES) \
STD2_CONST("SCROLL_HORIZONTAL_ENDS", INT, GTK_SCROLL_HORIZONTAL_ENDS) \
STD2_CONST("ORIENTATION_HORIZONTAL", INT, GTK_ORIENTATION_HORIZONTAL) \
STD2_CONST("ORIENTATION_VERTICAL", INT, GTK_ORIENTATION_VERTICAL) \
STD2_CONST("CORNER_TOP_LEFT", INT, GTK_CORNER_TOP_LEFT) \
STD2_CONST("CORNER_BOTTOM_LEFT", INT, GTK_CORNER_BOTTOM_LEFT) \
STD2_CONST("CORNER_TOP_RIGHT", INT, GTK_CORNER_TOP_RIGHT) \
STD2_CONST("CORNER_BOTTOM_RIGHT", INT, GTK_CORNER_BOTTOM_RIGHT) \
STD2_CONST("PACK_START", INT, GTK_PACK_START) \
STD2_CONST("PACK_END", INT, GTK_PACK_END) \
STD2_CONST("POS_LEFT", INT, GTK_POS_LEFT) \
STD2_CONST("POS_RIGHT", INT, GTK_POS_RIGHT) \
STD2_CONST("POS_TOP", INT, GTK_POS_TOP) \
STD2_CONST("POS_BOTTOM", INT, GTK_POS_BOTTOM) \
STD2_CONST("SCROLL_NONE", INT, GTK_SCROLL_NONE) \
STD2_CONST("SCROLL_JUMP", INT, GTK_SCROLL_JUMP) \
STD2_CONST("SCROLL_STEP_BACKWARD", INT, GTK_SCROLL_STEP_BACKWARD) \
STD2_CONST("SCROLL_STEP_FORWARD", INT, GTK_SCROLL_STEP_FORWARD) \
STD2_CONST("SCROLL_PAGE_BACKWARD", INT, GTK_SCROLL_PAGE_BACKWARD) \
STD2_CONST("SCROLL_PAGE_FORWARD", INT, GTK_SCROLL_PAGE_FORWARD) \
STD2_CONST("SCROLL_STEP_UP", INT, GTK_SCROLL_STEP_UP) \
STD2_CONST("SCROLL_STEP_DOWN", INT, GTK_SCROLL_STEP_DOWN) \
STD2_CONST("SCROLL_PAGE_UP", INT, GTK_SCROLL_PAGE_UP) \
STD2_CONST("SCROLL_PAGE_DOWN", INT, GTK_SCROLL_PAGE_DOWN) \
STD2_CONST("SCROLL_STEP_LEFT", INT, GTK_SCROLL_STEP_LEFT) \
STD2_CONST("SCROLL_STEP_RIGHT", INT, GTK_SCROLL_STEP_RIGHT) \
STD2_CONST("SCROLL_PAGE_LEFT", INT, GTK_SCROLL_PAGE_LEFT) \
STD2_CONST("SCROLL_PAGE_RIGHT", INT, GTK_SCROLL_PAGE_RIGHT) \
STD2_CONST("SCROLL_START", INT, GTK_SCROLL_START) \
STD2_CONST("SCROLL_END", INT, GTK_SCROLL_END) \
STD2_CONST("IMAGE_EMPTY", INT, GTK_IMAGE_EMPTY) \
STD2_CONST("IMAGE_PIXMAP", INT, GTK_IMAGE_PIXMAP) \
STD2_CONST("IMAGE_IMAGE", INT, GTK_IMAGE_IMAGE) \
STD2_CONST("IMAGE_PIXBUF", INT, GTK_IMAGE_PIXBUF) \
STD2_CONST("IMAGE_STOCK", INT, GTK_IMAGE_STOCK) \
STD2_CONST("IMAGE_ICON_SET", INT, GTK_IMAGE_ICON_SET) \
STD2_CONST("IMAGE_ANIMATION", INT, GTK_IMAGE_ANIMATION) \
STD2_CONST("IMAGE_ICON_NAME", INT, GTK_IMAGE_ICON_NAME) \
STD2_CONST("IMAGE_GICON", INT, GTK_IMAGE_GICON) \
STD2_CONST("PRINT_STATUS_INITIAL", INT, GTK_PRINT_STATUS_INITIAL) \
STD2_CONST("PRINT_STATUS_PREPARING", INT, GTK_PRINT_STATUS_PREPARING) \
STD2_CONST("PRINT_STATUS_GENERATING_DATA", INT, GTK_PRINT_STATUS_GENERATING_DATA) \
STD2_CONST("PRINT_STATUS_SENDING_DATA", INT, GTK_PRINT_STATUS_SENDING_DATA) \
STD2_CONST("PRINT_STATUS_PENDING", INT, GTK_PRINT_STATUS_PENDING) \
STD2_CONST("PRINT_STATUS_PENDING_ISSUE", INT, GTK_PRINT_STATUS_PENDING_ISSUE) \
STD2_CONST("PRINT_STATUS_PRINTING", INT, GTK_PRINT_STATUS_PRINTING) \
STD2_CONST("PRINT_STATUS_FINISHED", INT, GTK_PRINT_STATUS_FINISHED) \
STD2_CONST("PRINT_STATUS_FINISHED_ABORTED", INT, GTK_PRINT_STATUS_FINISHED_ABORTED) \
STD2_CONST("RECENT_FILTER_URI", INT, GTK_RECENT_FILTER_URI) \
STD2_CONST("RECENT_FILTER_DISPLAY_NAME", INT, GTK_RECENT_FILTER_DISPLAY_NAME) \
STD2_CONST("RECENT_FILTER_MIME_TYPE", INT, GTK_RECENT_FILTER_MIME_TYPE) \
STD2_CONST("RECENT_FILTER_APPLICATION", INT, GTK_RECENT_FILTER_APPLICATION) \
STD2_CONST("RECENT_FILTER_GROUP", INT, GTK_RECENT_FILTER_GROUP) \
STD2_CONST("RECENT_FILTER_AGE", INT, GTK_RECENT_FILTER_AGE) \
STD2_CONST("STATE_NORMAL", INT, GTK_STATE_NORMAL) \
STD2_CONST("STATE_ACTIVE", INT, GTK_STATE_ACTIVE) \
STD2_CONST("STATE_PRELIGHT", INT, GTK_STATE_PRELIGHT) \
STD2_CONST("STATE_SELECTED", INT, GTK_STATE_SELECTED) \
STD2_CONST("STATE_INSENSITIVE", INT, GTK_STATE_INSENSITIVE) \
STD2_CONST("UPDATE_CONTINUOUS", INT, GTK_UPDATE_CONTINUOUS) \
STD2_CONST("UPDATE_DISCONTINUOUS", INT, GTK_UPDATE_DISCONTINUOUS) \
STD2_CONST("UPDATE_DELAYED", INT, GTK_UPDATE_DELAYED) \
STD2_CONST("DIRECTION_LEFT", INT, GTK_DIRECTION_LEFT) \
STD2_CONST("DIRECTION_RIGHT", INT, GTK_DIRECTION_RIGHT) \
STD2_CONST("EXPAND", INT, GTK_EXPAND) \
STD2_CONST("SHRINK", INT, GTK_SHRINK) \
STD2_CONST("FILL", INT, GTK_FILL) \
STD2_CONST("TEXT_WINDOW_PRIVATE", INT, GTK_TEXT_WINDOW_PRIVATE) \
STD2_CONST("TEXT_WINDOW_WIDGET", INT, GTK_TEXT_WINDOW_WIDGET) \
STD2_CONST("TEXT_WINDOW_TEXT", INT, GTK_TEXT_WINDOW_TEXT) \
STD2_CONST("TEXT_WINDOW_LEFT", INT, GTK_TEXT_WINDOW_LEFT) \
STD2_CONST("TEXT_WINDOW_RIGHT", INT, GTK_TEXT_WINDOW_RIGHT) \
STD2_CONST("TEXT_WINDOW_TOP", INT, GTK_TEXT_WINDOW_TOP) \
STD2_CONST("TEXT_WINDOW_BOTTOM", INT, GTK_TEXT_WINDOW_BOTTOM) \
STD2_CONST("BUTTON_IGNORED", INT, GTK_BUTTON_IGNORED) \
STD2_CONST("BUTTON_SELECTS", INT, GTK_BUTTON_SELECTS) \
STD2_CONST("BUTTON_DRAGS", INT, GTK_BUTTON_DRAGS) \
STD2_CONST("BUTTON_EXPANDS", INT, GTK_BUTTON_EXPANDS) \
STD2_CONST("DRAG_RESULT_SUCCESS", INT, GTK_DRAG_RESULT_SUCCESS) \
STD2_CONST("DRAG_RESULT_NO_TARGET", INT, GTK_DRAG_RESULT_NO_TARGET) \
STD2_CONST("DRAG_RESULT_USER_CANCELLED", INT, GTK_DRAG_RESULT_USER_CANCELLED) \
STD2_CONST("DRAG_RESULT_TIMEOUT_EXPIRED", INT, GTK_DRAG_RESULT_TIMEOUT_EXPIRED) \
STD2_CONST("DRAG_RESULT_GRAB_BROKEN", INT, GTK_DRAG_RESULT_GRAB_BROKEN) \
STD2_CONST("DRAG_RESULT_ERROR", INT, GTK_DRAG_RESULT_ERROR) \
STD2_CONST("ARG_READABLE", INT, GTK_ARG_READABLE) \
STD2_CONST("ARG_WRITABLE", INT, GTK_ARG_WRITABLE) \
STD2_CONST("ARG_CONSTRUCT", INT, GTK_ARG_CONSTRUCT) \
STD2_CONST("ARG_CONSTRUCT_ONLY", INT, GTK_ARG_CONSTRUCT_ONLY) \
STD2_CONST("ARG_CHILD_ARG", INT, GTK_ARG_CHILD_ARG) \
STD2_CONST("RC_FG", INT, GTK_RC_FG) \
STD2_CONST("RC_BG", INT, GTK_RC_BG) \
STD2_CONST("RC_TEXT", INT, GTK_RC_TEXT) \
STD2_CONST("RC_BASE", INT, GTK_RC_BASE) \
STD2_CONST("PACK_DIRECTION_LTR", INT, GTK_PACK_DIRECTION_LTR) \
STD2_CONST("PACK_DIRECTION_RTL", INT, GTK_PACK_DIRECTION_RTL) \
STD2_CONST("PACK_DIRECTION_TTB", INT, GTK_PACK_DIRECTION_TTB) \
STD2_CONST("PACK_DIRECTION_BTT", INT, GTK_PACK_DIRECTION_BTT) \
STD2_CONST("BUILDER_ERROR_INVALID_TYPE_FUNCTION", INT, GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION) \
STD2_CONST("BUILDER_ERROR_UNHANDLED_TAG", INT, GTK_BUILDER_ERROR_UNHANDLED_TAG) \
STD2_CONST("BUILDER_ERROR_MISSING_ATTRIBUTE", INT, GTK_BUILDER_ERROR_MISSING_ATTRIBUTE) \
STD2_CONST("BUILDER_ERROR_INVALID_ATTRIBUTE", INT, GTK_BUILDER_ERROR_INVALID_ATTRIBUTE) \
STD2_CONST("BUILDER_ERROR_INVALID_TAG", INT, GTK_BUILDER_ERROR_INVALID_TAG) \
STD2_CONST("BUILDER_ERROR_MISSING_PROPERTY_VALUE", INT, GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE) \
STD2_CONST("BUILDER_ERROR_INVALID_VALUE", INT, GTK_BUILDER_ERROR_INVALID_VALUE) \
STD2_CONST("BUILDER_ERROR_VERSION_MISMATCH", INT, GTK_BUILDER_ERROR_VERSION_MISMATCH) \
STD2_CONST("BUILDER_ERROR_DUPLICATE_ID", INT, GTK_BUILDER_ERROR_DUPLICATE_ID) \
STD2_CONST("PAGE_SET_ALL", INT, GTK_PAGE_SET_ALL) \
STD2_CONST("PAGE_SET_EVEN", INT, GTK_PAGE_SET_EVEN) \
STD2_CONST("PAGE_SET_ODD", INT, GTK_PAGE_SET_ODD) \
STD2_CONST("TREE_MODEL_ITERS_PERSIST", INT, GTK_TREE_MODEL_ITERS_PERSIST) \
STD2_CONST("TREE_MODEL_LIST_ONLY", INT, GTK_TREE_MODEL_LIST_ONLY) \
STD2_CONST("CALENDAR_SHOW_HEADING", INT, GTK_CALENDAR_SHOW_HEADING) \
STD2_CONST("CALENDAR_SHOW_DAY_NAMES", INT, GTK_CALENDAR_SHOW_DAY_NAMES) \
STD2_CONST("CALENDAR_NO_MONTH_CHANGE", INT, GTK_CALENDAR_NO_MONTH_CHANGE) \
STD2_CONST("CALENDAR_SHOW_WEEK_NUMBERS", INT, GTK_CALENDAR_SHOW_WEEK_NUMBERS) \
STD2_CONST("CALENDAR_WEEK_START_MONDAY", INT, GTK_CALENDAR_WEEK_START_MONDAY) \
STD2_CONST("CALENDAR_SHOW_DETAILS", INT, GTK_CALENDAR_SHOW_DETAILS) \
STD2_CONST("PRINT_PAGES_ALL", INT, GTK_PRINT_PAGES_ALL) \
STD2_CONST("PRINT_PAGES_CURRENT", INT, GTK_PRINT_PAGES_CURRENT) \
STD2_CONST("PRINT_PAGES_RANGES", INT, GTK_PRINT_PAGES_RANGES) \
STD2_CONST("PRINT_PAGES_SELECTION", INT, GTK_PRINT_PAGES_SELECTION) \
STD2_CONST("TEXT_SEARCH_VISIBLE_ONLY", INT, GTK_TEXT_SEARCH_VISIBLE_ONLY) \
STD2_CONST("TEXT_SEARCH_TEXT_ONLY", INT, GTK_TEXT_SEARCH_TEXT_ONLY) \
STD2_CONST("ICON_VIEW_NO_DROP", INT, GTK_ICON_VIEW_NO_DROP) \
STD2_CONST("ICON_VIEW_DROP_INTO", INT, GTK_ICON_VIEW_DROP_INTO) \
STD2_CONST("ICON_VIEW_DROP_LEFT", INT, GTK_ICON_VIEW_DROP_LEFT) \
STD2_CONST("ICON_VIEW_DROP_RIGHT", INT, GTK_ICON_VIEW_DROP_RIGHT) \
STD2_CONST("ICON_VIEW_DROP_ABOVE", INT, GTK_ICON_VIEW_DROP_ABOVE) \
STD2_CONST("ICON_VIEW_DROP_BELOW", INT, GTK_ICON_VIEW_DROP_BELOW) \
STD2_CONST("RECENT_CHOOSER_ERROR_NOT_FOUND", INT, GTK_RECENT_CHOOSER_ERROR_NOT_FOUND) \
STD2_CONST("RECENT_CHOOSER_ERROR_INVALID_URI", INT, GTK_RECENT_CHOOSER_ERROR_INVALID_URI) \
STD2_CONST("CTREE_EXPANSION_EXPAND", INT, GTK_CTREE_EXPANSION_EXPAND) \
STD2_CONST("CTREE_EXPANSION_EXPAND_RECURSIVE", INT, GTK_CTREE_EXPANSION_EXPAND_RECURSIVE) \
STD2_CONST("CTREE_EXPANSION_COLLAPSE", INT, GTK_CTREE_EXPANSION_COLLAPSE) \
STD2_CONST("CTREE_EXPANSION_COLLAPSE_RECURSIVE", INT, GTK_CTREE_EXPANSION_COLLAPSE_RECURSIVE) \
STD2_CONST("CTREE_EXPANSION_TOGGLE", INT, GTK_CTREE_EXPANSION_TOGGLE) \
STD2_CONST("CTREE_EXPANSION_TOGGLE_RECURSIVE", INT, GTK_CTREE_EXPANSION_TOGGLE_RECURSIVE) \
STD2_CONST("CLIST_DRAG_NONE", INT, GTK_CLIST_DRAG_NONE) \
STD2_CONST("CLIST_DRAG_BEFORE", INT, GTK_CLIST_DRAG_BEFORE) \
STD2_CONST("CLIST_DRAG_INTO", INT, GTK_CLIST_DRAG_INTO) \
STD2_CONST("CLIST_DRAG_AFTER", INT, GTK_CLIST_DRAG_AFTER) \
STD2_CONST("FILE_FILTER_FILENAME", INT, GTK_FILE_FILTER_FILENAME) \
STD2_CONST("FILE_FILTER_URI", INT, GTK_FILE_FILTER_URI) \
STD2_CONST("FILE_FILTER_DISPLAY_NAME", INT, GTK_FILE_FILTER_DISPLAY_NAME) \
STD2_CONST("FILE_FILTER_MIME_TYPE", INT, GTK_FILE_FILTER_MIME_TYPE) \
STD2_CONST("TOPLEVEL", INT, GTK_TOPLEVEL) \
STD2_CONST("NO_WINDOW", INT, GTK_NO_WINDOW) \
STD2_CONST("REALIZED", INT, GTK_REALIZED) \
STD2_CONST("MAPPED", INT, GTK_MAPPED) \
STD2_CONST("VISIBLE", INT, GTK_VISIBLE) \
STD2_CONST("SENSITIVE", INT, GTK_SENSITIVE) \
STD2_CONST("PARENT_SENSITIVE", INT, GTK_PARENT_SENSITIVE) \
STD2_CONST("CAN_FOCUS", INT, GTK_CAN_FOCUS) \
STD2_CONST("HAS_FOCUS", INT, GTK_HAS_FOCUS) \
STD2_CONST("CAN_DEFAULT", INT, GTK_CAN_DEFAULT) \
STD2_CONST("HAS_DEFAULT", INT, GTK_HAS_DEFAULT) \
STD2_CONST("HAS_GRAB", INT, GTK_HAS_GRAB) \
STD2_CONST("RC_STYLE", INT, GTK_RC_STYLE) \
STD2_CONST("COMPOSITE_CHILD", INT, GTK_COMPOSITE_CHILD) \
STD2_CONST("NO_REPARENT", INT, GTK_NO_REPARENT) \
STD2_CONST("APP_PAINTABLE", INT, GTK_APP_PAINTABLE) \
STD2_CONST("RECEIVES_DEFAULT", INT, GTK_RECEIVES_DEFAULT) \
STD2_CONST("DOUBLE_BUFFERED", INT, GTK_DOUBLE_BUFFERED) \
STD2_CONST("NO_SHOW_ALL", INT, GTK_NO_SHOW_ALL) \
STD2_CONST("CELL_RENDERER_MODE_INERT", INT, GTK_CELL_RENDERER_MODE_INERT) \
STD2_CONST("CELL_RENDERER_MODE_ACTIVATABLE", INT, GTK_CELL_RENDERER_MODE_ACTIVATABLE) \
STD2_CONST("CELL_RENDERER_MODE_EDITABLE", INT, GTK_CELL_RENDERER_MODE_EDITABLE) \
STD2_CONST("PRINT_ERROR_GENERAL", INT, GTK_PRINT_ERROR_GENERAL) \
STD2_CONST("PRINT_ERROR_INTERNAL_ERROR", INT, GTK_PRINT_ERROR_INTERNAL_ERROR) \
STD2_CONST("PRINT_ERROR_NOMEM", INT, GTK_PRINT_ERROR_NOMEM) \
STD2_CONST("PRINT_ERROR_INVALID_FILE", INT, GTK_PRINT_ERROR_INVALID_FILE) \
STD2_CONST("PROGRESS_LEFT_TO_RIGHT", INT, GTK_PROGRESS_LEFT_TO_RIGHT) \
STD2_CONST("PROGRESS_RIGHT_TO_LEFT", INT, GTK_PROGRESS_RIGHT_TO_LEFT) \
STD2_CONST("PROGRESS_BOTTOM_TO_TOP", INT, GTK_PROGRESS_BOTTOM_TO_TOP) \
STD2_CONST("PROGRESS_TOP_TO_BOTTOM", INT, GTK_PROGRESS_TOP_TO_BOTTOM) \
STD2_CONST("RECENT_MANAGER_ERROR_NOT_FOUND", INT, GTK_RECENT_MANAGER_ERROR_NOT_FOUND) \
STD2_CONST("RECENT_MANAGER_ERROR_INVALID_URI", INT, GTK_RECENT_MANAGER_ERROR_INVALID_URI) \
STD2_CONST("RECENT_MANAGER_ERROR_INVALID_ENCODING", INT, GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING) \
STD2_CONST("RECENT_MANAGER_ERROR_NOT_REGISTERED", INT, GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED) \
STD2_CONST("RECENT_MANAGER_ERROR_READ", INT, GTK_RECENT_MANAGER_ERROR_READ) \
STD2_CONST("RECENT_MANAGER_ERROR_WRITE", INT, GTK_RECENT_MANAGER_ERROR_WRITE) \
STD2_CONST("RECENT_MANAGER_ERROR_UNKNOWN", INT, GTK_RECENT_MANAGER_ERROR_UNKNOWN) \
STD2_CONST("ENTRY_ICON_PRIMARY", INT, GTK_ENTRY_ICON_PRIMARY) \
STD2_CONST("ENTRY_ICON_SECONDARY", INT, GTK_ENTRY_ICON_SECONDARY) \
STD2_CONST("WIDGET_HELP_TOOLTIP", INT, GTK_WIDGET_HELP_TOOLTIP) \
STD2_CONST("WIDGET_HELP_WHATS_THIS", INT, GTK_WIDGET_HELP_WHATS_THIS) \
STD2_CONST("CTREE_LINES_NONE", INT, GTK_CTREE_LINES_NONE) \
STD2_CONST("CTREE_LINES_SOLID", INT, GTK_CTREE_LINES_SOLID) \
STD2_CONST("CTREE_LINES_DOTTED", INT, GTK_CTREE_LINES_DOTTED) \
STD2_CONST("CTREE_LINES_TABBED", INT, GTK_CTREE_LINES_TABBED) \
STD2_CONST("TOOLBAR_CHILD_SPACE", INT, GTK_TOOLBAR_CHILD_SPACE) \
STD2_CONST("TOOLBAR_CHILD_BUTTON", INT, GTK_TOOLBAR_CHILD_BUTTON) \
STD2_CONST("TOOLBAR_CHILD_TOGGLEBUTTON", INT, GTK_TOOLBAR_CHILD_TOGGLEBUTTON) \
STD2_CONST("TOOLBAR_CHILD_RADIOBUTTON", INT, GTK_TOOLBAR_CHILD_RADIOBUTTON) \
STD2_CONST("TOOLBAR_CHILD_WIDGET", INT, GTK_TOOLBAR_CHILD_WIDGET) \
STD2_CONST("UNIT_PIXEL", INT, GTK_UNIT_PIXEL) \
STD2_CONST("UNIT_POINTS", INT, GTK_UNIT_POINTS) \
STD2_CONST("UNIT_INCH", INT, GTK_UNIT_INCH) \
STD2_CONST("UNIT_MM", INT, GTK_UNIT_MM) \
STD2_CONST("PRINT_OPERATION_ACTION_PRINT_DIALOG", INT, GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG) \
STD2_CONST("PRINT_OPERATION_ACTION_PRINT", INT, GTK_PRINT_OPERATION_ACTION_PRINT) \
STD2_CONST("PRINT_OPERATION_ACTION_PREVIEW", INT, GTK_PRINT_OPERATION_ACTION_PREVIEW) \
STD2_CONST("PRINT_OPERATION_ACTION_EXPORT", INT, GTK_PRINT_OPERATION_ACTION_EXPORT) \
STD2_CONST("PRINT_DUPLEX_SIMPLEX", INT, GTK_PRINT_DUPLEX_SIMPLEX) \
STD2_CONST("PRINT_DUPLEX_HORIZONTAL", INT, GTK_PRINT_DUPLEX_HORIZONTAL) \
STD2_CONST("PRINT_DUPLEX_VERTICAL", INT, GTK_PRINT_DUPLEX_VERTICAL) \
STD2_CONST("ACCEL_VISIBLE", INT, GTK_ACCEL_VISIBLE) \
STD2_CONST("ACCEL_LOCKED", INT, GTK_ACCEL_LOCKED) \
STD2_CONST("ACCEL_MASK", INT, GTK_ACCEL_MASK) \
STD2_CONST("TOOLBAR_SPACE_EMPTY", INT, GTK_TOOLBAR_SPACE_EMPTY) \
STD2_CONST("TOOLBAR_SPACE_LINE", INT, GTK_TOOLBAR_SPACE_LINE) \
STD2_CONST("TREE_VIEW_DROP_BEFORE", INT, GTK_TREE_VIEW_DROP_BEFORE) \
STD2_CONST("TREE_VIEW_DROP_AFTER", INT, GTK_TREE_VIEW_DROP_AFTER) \
STD2_CONST("TREE_VIEW_DROP_INTO_OR_BEFORE", INT, GTK_TREE_VIEW_DROP_INTO_OR_BEFORE) \
STD2_CONST("TREE_VIEW_DROP_INTO_OR_AFTER", INT, GTK_TREE_VIEW_DROP_INTO_OR_AFTER) \
STD2_CONST("WIN_POS_NONE", INT, GTK_WIN_POS_NONE) \
STD2_CONST("WIN_POS_CENTER", INT, GTK_WIN_POS_CENTER) \
STD2_CONST("WIN_POS_MOUSE", INT, GTK_WIN_POS_MOUSE) \
STD2_CONST("WIN_POS_CENTER_ALWAYS", INT, GTK_WIN_POS_CENTER_ALWAYS) \
STD2_CONST("WIN_POS_CENTER_ON_PARENT", INT, GTK_WIN_POS_CENTER_ON_PARENT) \
STD2_CONST("FILE_CHOOSER_CONFIRMATION_CONFIRM", INT, GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM) \
STD2_CONST("FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME", INT, GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME) \
STD2_CONST("FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN", INT, GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN) \
STD2_CONST("VISIBILITY_NONE", INT, GTK_VISIBILITY_NONE) \
STD2_CONST("VISIBILITY_PARTIAL", INT, GTK_VISIBILITY_PARTIAL) \
STD2_CONST("VISIBILITY_FULL", INT, GTK_VISIBILITY_FULL) \
STD2_CONST("BUTTONBOX_DEFAULT_STYLE", INT, GTK_BUTTONBOX_DEFAULT_STYLE) \
STD2_CONST("BUTTONBOX_SPREAD", INT, GTK_BUTTONBOX_SPREAD) \
STD2_CONST("BUTTONBOX_EDGE", INT, GTK_BUTTONBOX_EDGE) \
STD2_CONST("BUTTONBOX_START", INT, GTK_BUTTONBOX_START) \
STD2_CONST("BUTTONBOX_END", INT, GTK_BUTTONBOX_END) \
STD2_CONST("BUTTONBOX_CENTER", INT, GTK_BUTTONBOX_CENTER) \
STD2_CONST("FILE_CHOOSER_ERROR_NONEXISTENT", INT, GTK_FILE_CHOOSER_ERROR_NONEXISTENT) \
STD2_CONST("FILE_CHOOSER_ERROR_BAD_FILENAME", INT, GTK_FILE_CHOOSER_ERROR_BAD_FILENAME) \
STD2_CONST("FILE_CHOOSER_ERROR_ALREADY_EXISTS", INT, GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS) \
STD2_CONST("FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME", INT, GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME) \
STD2_CONST("PATH_PRIO_LOWEST", INT, GTK_PATH_PRIO_LOWEST) \
STD2_CONST("PATH_PRIO_GTK", INT, GTK_PATH_PRIO_GTK) \
STD2_CONST("PATH_PRIO_APPLICATION", INT, GTK_PATH_PRIO_APPLICATION) \
STD2_CONST("PATH_PRIO_THEME", INT, GTK_PATH_PRIO_THEME) \
STD2_CONST("PATH_PRIO_RC", INT, GTK_PATH_PRIO_RC) \
STD2_CONST("PATH_PRIO_HIGHEST", INT, GTK_PATH_PRIO_HIGHEST) \
STD2_CONST("CELL_EMPTY", INT, GTK_CELL_EMPTY) \
STD2_CONST("CELL_TEXT", INT, GTK_CELL_TEXT) \
STD2_CONST("CELL_PIXMAP", INT, GTK_CELL_PIXMAP) \
STD2_CONST("CELL_PIXTEXT", INT, GTK_CELL_PIXTEXT) \
STD2_CONST("CELL_WIDGET", INT, GTK_CELL_WIDGET) \
STD2_CONST("CURVE_TYPE_LINEAR", INT, GTK_CURVE_TYPE_LINEAR) \
STD2_CONST("CURVE_TYPE_SPLINE", INT, GTK_CURVE_TYPE_SPLINE) \
STD2_CONST("CURVE_TYPE_FREE", INT, GTK_CURVE_TYPE_FREE) \
STD2_CONST("DELETE_CHARS", INT, GTK_DELETE_CHARS) \
STD2_CONST("DELETE_WORD_ENDS", INT, GTK_DELETE_WORD_ENDS) \
STD2_CONST("DELETE_WORDS", INT, GTK_DELETE_WORDS) \
STD2_CONST("DELETE_DISPLAY_LINES", INT, GTK_DELETE_DISPLAY_LINES) \
STD2_CONST("DELETE_DISPLAY_LINE_ENDS", INT, GTK_DELETE_DISPLAY_LINE_ENDS) \
STD2_CONST("DELETE_PARAGRAPH_ENDS", INT, GTK_DELETE_PARAGRAPH_ENDS) \
STD2_CONST("DELETE_PARAGRAPHS", INT, GTK_DELETE_PARAGRAPHS) \
STD2_CONST("DELETE_WHITESPACE", INT, GTK_DELETE_WHITESPACE) \
STD2_CONST("ICON_SIZE_INVALID", INT, GTK_ICON_SIZE_INVALID) \
STD2_CONST("ICON_SIZE_MENU", INT, GTK_ICON_SIZE_MENU) \
STD2_CONST("ICON_SIZE_SMALL_TOOLBAR", INT, GTK_ICON_SIZE_SMALL_TOOLBAR) \
STD2_CONST("ICON_SIZE_LARGE_TOOLBAR", INT, GTK_ICON_SIZE_LARGE_TOOLBAR) \
STD2_CONST("ICON_SIZE_BUTTON", INT, GTK_ICON_SIZE_BUTTON) \
STD2_CONST("ICON_SIZE_DND", INT, GTK_ICON_SIZE_DND) \
STD2_CONST("ICON_SIZE_DIALOG", INT, GTK_ICON_SIZE_DIALOG) \
STD2_CONST("SENSITIVITY_AUTO", INT, GTK_SENSITIVITY_AUTO) \
STD2_CONST("SENSITIVITY_ON", INT, GTK_SENSITIVITY_ON) \
STD2_CONST("SENSITIVITY_OFF", INT, GTK_SENSITIVITY_OFF) \
STD2_CONST("PATH_WIDGET", INT, GTK_PATH_WIDGET) \
STD2_CONST("PATH_WIDGET_CLASS", INT, GTK_PATH_WIDGET_CLASS) \
STD2_CONST("PATH_CLASS", INT, GTK_PATH_CLASS) \
STD2_CONST("RESIZE_PARENT", INT, GTK_RESIZE_PARENT) \
STD2_CONST("RESIZE_QUEUE", INT, GTK_RESIZE_QUEUE) \
STD2_CONST("RESIZE_IMMEDIATE", INT, GTK_RESIZE_IMMEDIATE) \
STD2_CONST("SELECTION_NONE", INT, GTK_SELECTION_NONE) \
STD2_CONST("SELECTION_SINGLE", INT, GTK_SELECTION_SINGLE) \
STD2_CONST("SELECTION_BROWSE", INT, GTK_SELECTION_BROWSE) \
STD2_CONST("SELECTION_MULTIPLE", INT, GTK_SELECTION_MULTIPLE) \
STD2_CONST("SELECTION_EXTENDED", INT, GTK_SELECTION_EXTENDED) \
STD2_CONST("TOP_BOTTOM", INT, GTK_TOP_BOTTOM) \
STD2_CONST("LEFT_RIGHT", INT, GTK_LEFT_RIGHT) \
STD2_CONST("WRAP_NONE", INT, GTK_WRAP_NONE) \
STD2_CONST("WRAP_CHAR", INT, GTK_WRAP_CHAR) \
STD2_CONST("WRAP_WORD", INT, GTK_WRAP_WORD) \
STD2_CONST("WRAP_WORD_CHAR", INT, GTK_WRAP_WORD_CHAR) \
STD2_CONST("NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM", INT, GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM) \
STD2_CONST("NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP", INT, GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP) \
STD2_CONST("NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM", INT, GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM) \
STD2_CONST("NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP", INT, GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP) \
STD2_CONST("NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT", INT, GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT) \
STD2_CONST("NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT", INT, GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT) \
STD2_CONST("NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT", INT, GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT) \
STD2_CONST("NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT", INT, GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT) \
STD2_CONST("PAGE_ORIENTATION_PORTRAIT", INT, GTK_PAGE_ORIENTATION_PORTRAIT) \
STD2_CONST("PAGE_ORIENTATION_LANDSCAPE", INT, GTK_PAGE_ORIENTATION_LANDSCAPE) \
STD2_CONST("PAGE_ORIENTATION_REVERSE_PORTRAIT", INT, GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT) \
STD2_CONST("PAGE_ORIENTATION_REVERSE_LANDSCAPE", INT, GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE) \
STD2_CONST("DIALOG_MODAL", INT, GTK_DIALOG_MODAL) \
STD2_CONST("DIALOG_DESTROY_WITH_PARENT", INT, GTK_DIALOG_DESTROY_WITH_PARENT) \
STD2_CONST("DIALOG_NO_SEPARATOR", INT, GTK_DIALOG_NO_SEPARATOR) \
STD2_CONST("RESPONSE_NONE", INT, GTK_RESPONSE_NONE) \
STD2_CONST("RESPONSE_REJECT", INT, GTK_RESPONSE_REJECT) \
STD2_CONST("RESPONSE_ACCEPT", INT, GTK_RESPONSE_ACCEPT) \
STD2_CONST("RESPONSE_DELETE_EVENT", INT, GTK_RESPONSE_DELETE_EVENT) \
STD2_CONST("RESPONSE_OK", INT, GTK_RESPONSE_OK) \
STD2_CONST("RESPONSE_CANCEL", INT, GTK_RESPONSE_CANCEL) \
STD2_CONST("RESPONSE_CLOSE", INT, GTK_RESPONSE_CLOSE) \
STD2_CONST("RESPONSE_YES", INT, GTK_RESPONSE_YES) \
STD2_CONST("RESPONSE_NO", INT, GTK_RESPONSE_NO) \
STD2_CONST("RESPONSE_APPLY", INT, GTK_RESPONSE_APPLY) \
STD2_CONST("RESPONSE_HELP", INT, GTK_RESPONSE_HELP) \
STD2_CONST("ASSISTANT_PAGE_CONTENT", INT, GTK_ASSISTANT_PAGE_CONTENT) \
STD2_CONST("ASSISTANT_PAGE_INTRO", INT, GTK_ASSISTANT_PAGE_INTRO) \
STD2_CONST("ASSISTANT_PAGE_CONFIRM", INT, GTK_ASSISTANT_PAGE_CONFIRM) \
STD2_CONST("ASSISTANT_PAGE_SUMMARY", INT, GTK_ASSISTANT_PAGE_SUMMARY) \
STD2_CONST("ASSISTANT_PAGE_PROGRESS", INT, GTK_ASSISTANT_PAGE_PROGRESS) \
STD2_CONST("ICON_THEME_NOT_FOUND", INT, GTK_ICON_THEME_NOT_FOUND) \
STD2_CONST("ICON_THEME_FAILED", INT, GTK_ICON_THEME_FAILED) \
STD2_CONST("PIXELS", INT, GTK_PIXELS) \
STD2_CONST("INCHES", INT, GTK_INCHES) \
STD2_CONST("CENTIMETERS", INT, GTK_CENTIMETERS) \
STD2_CONST("CTREE_POS_BEFORE", INT, GTK_CTREE_POS_BEFORE) \
STD2_CONST("CTREE_POS_AS_CHILD", INT, GTK_CTREE_POS_AS_CHILD) \
STD2_CONST("CTREE_POS_AFTER", INT, GTK_CTREE_POS_AFTER) \
STD2_CONST("SHADOW_NONE", INT, GTK_SHADOW_NONE) \
STD2_CONST("SHADOW_IN", INT, GTK_SHADOW_IN) \
STD2_CONST("SHADOW_OUT", INT, GTK_SHADOW_OUT) \
STD2_CONST("SHADOW_ETCHED_IN", INT, GTK_SHADOW_ETCHED_IN) \
STD2_CONST("SHADOW_ETCHED_OUT", INT, GTK_SHADOW_ETCHED_OUT) \

#define ENUMS_FUNCS \
STD2_FUNC("CTreeExpanderStyle_to_string", "cs", "i", CTreeExpanderStyle_to_string) \
STD2_FUNC("IMPreeditStyle_to_string", "cs", "i", IMPreeditStyle_to_string) \
STD2_FUNC("ObjectFlags_to_string", "cs", "i", ObjectFlags_to_string) \
STD2_FUNC("DebugFlag_to_string", "cs", "i", DebugFlag_to_string) \
STD2_FUNC("SizeGroupMode_to_string", "cs", "i", SizeGroupMode_to_string) \
STD2_FUNC("MatchType_to_string", "cs", "i", MatchType_to_string) \
STD2_FUNC("ExpanderStyle_to_string", "cs", "i", ExpanderStyle_to_string) \
STD2_FUNC("DirectionType_to_string", "cs", "i", DirectionType_to_string) \
STD2_FUNC("WindowType_to_string", "cs", "i", WindowType_to_string) \
STD2_FUNC("RecentSortType_to_string", "cs", "i", RecentSortType_to_string) \
STD2_FUNC("ArrowPlacement_to_string", "cs", "i", ArrowPlacement_to_string) \
STD2_FUNC("TextBufferTargetInfo_to_string", "cs", "i", TextBufferTargetInfo_to_string) \
STD2_FUNC("DestDefaults_to_string", "cs", "i", DestDefaults_to_string) \
STD2_FUNC("CellRendererAccelMode_to_string", "cs", "i", CellRendererAccelMode_to_string) \
STD2_FUNC("FileChooserAction_to_string", "cs", "i", FileChooserAction_to_string) \
STD2_FUNC("IMStatusStyle_to_string", "cs", "i", IMStatusStyle_to_string) \
STD2_FUNC("TargetFlags_to_string", "cs", "i", TargetFlags_to_string) \
STD2_FUNC("PrintOperationResult_to_string", "cs", "i", PrintOperationResult_to_string) \
STD2_FUNC("TreeViewGridLines_to_string", "cs", "i", TreeViewGridLines_to_string) \
STD2_FUNC("RcTokenType_to_string", "cs", "i", RcTokenType_to_string) \
STD2_FUNC("MenuDirectionType_to_string", "cs", "i", MenuDirectionType_to_string) \
STD2_FUNC("TreeViewColumnSizing_to_string", "cs", "i", TreeViewColumnSizing_to_string) \
STD2_FUNC("IconLookupFlags_to_string", "cs", "i", IconLookupFlags_to_string) \
STD2_FUNC("SignalRunType_to_string", "cs", "i", SignalRunType_to_string) \
STD2_FUNC("UIManagerItemType_to_string", "cs", "i", UIManagerItemType_to_string) \
STD2_FUNC("PreviewType_to_string", "cs", "i", PreviewType_to_string) \
STD2_FUNC("ReliefStyle_to_string", "cs", "i", ReliefStyle_to_string) \
STD2_FUNC("Justification_to_string", "cs", "i", Justification_to_string) \
STD2_FUNC("ButtonsType_to_string", "cs", "i", ButtonsType_to_string) \
STD2_FUNC("ProgressBarStyle_to_string", "cs", "i", ProgressBarStyle_to_string) \
STD2_FUNC("MessageType_to_string", "cs", "i", MessageType_to_string) \
STD2_FUNC("SpinButtonUpdatePolicy_to_string", "cs", "i", SpinButtonUpdatePolicy_to_string) \
STD2_FUNC("ToolbarStyle_to_string", "cs", "i", ToolbarStyle_to_string) \
STD2_FUNC("CellRendererState_to_string", "cs", "i", CellRendererState_to_string) \
STD2_FUNC("AnchorType_to_string", "cs", "i", AnchorType_to_string) \
STD2_FUNC("PrintQuality_to_string", "cs", "i", PrintQuality_to_string) \
STD2_FUNC("SortType_to_string", "cs", "i", SortType_to_string) \
STD2_FUNC("NotebookTab_to_string", "cs", "i", NotebookTab_to_string) \
STD2_FUNC("SideType_to_string", "cs", "i", SideType_to_string) \
STD2_FUNC("SpinType_to_string", "cs", "i", SpinType_to_string) \
STD2_FUNC("PolicyType_to_string", "cs", "i", PolicyType_to_string) \
STD2_FUNC("ArrowType_to_string", "cs", "i", ArrowType_to_string) \
STD2_FUNC("TextDirection_to_string", "cs", "i", TextDirection_to_string) \
STD2_FUNC("MovementStep_to_string", "cs", "i", MovementStep_to_string) \
STD2_FUNC("ScrollStep_to_string", "cs", "i", ScrollStep_to_string) \
STD2_FUNC("Orientation_to_string", "cs", "i", Orientation_to_string) \
STD2_FUNC("CornerType_to_string", "cs", "i", CornerType_to_string) \
STD2_FUNC("PackType_to_string", "cs", "i", PackType_to_string) \
STD2_FUNC("PositionType_to_string", "cs", "i", PositionType_to_string) \
STD2_FUNC("ScrollType_to_string", "cs", "i", ScrollType_to_string) \
STD2_FUNC("ImageType_to_string", "cs", "i", ImageType_to_string) \
STD2_FUNC("PrintStatus_to_string", "cs", "i", PrintStatus_to_string) \
STD2_FUNC("RecentFilterFlags_to_string", "cs", "i", RecentFilterFlags_to_string) \
STD2_FUNC("StateType_to_string", "cs", "i", StateType_to_string) \
STD2_FUNC("UpdateType_to_string", "cs", "i", UpdateType_to_string) \
STD2_FUNC("SubmenuDirection_to_string", "cs", "i", SubmenuDirection_to_string) \
STD2_FUNC("AttachOptions_to_string", "cs", "i", AttachOptions_to_string) \
STD2_FUNC("TextWindowType_to_string", "cs", "i", TextWindowType_to_string) \
STD2_FUNC("ButtonAction_to_string", "cs", "i", ButtonAction_to_string) \
STD2_FUNC("DragResult_to_string", "cs", "i", DragResult_to_string) \
STD2_FUNC("ArgFlags_to_string", "cs", "i", ArgFlags_to_string) \
STD2_FUNC("RcFlags_to_string", "cs", "i", RcFlags_to_string) \
STD2_FUNC("PackDirection_to_string", "cs", "i", PackDirection_to_string) \
STD2_FUNC("BuilderError_to_string", "cs", "i", BuilderError_to_string) \
STD2_FUNC("PageSet_to_string", "cs", "i", PageSet_to_string) \
STD2_FUNC("TreeModelFlags_to_string", "cs", "i", TreeModelFlags_to_string) \
STD2_FUNC("CalendarDisplayOptions_to_string", "cs", "i", CalendarDisplayOptions_to_string) \
STD2_FUNC("PrintPages_to_string", "cs", "i", PrintPages_to_string) \
STD2_FUNC("TextSearchFlags_to_string", "cs", "i", TextSearchFlags_to_string) \
STD2_FUNC("IconViewDropPosition_to_string", "cs", "i", IconViewDropPosition_to_string) \
STD2_FUNC("RecentChooserError_to_string", "cs", "i", RecentChooserError_to_string) \
STD2_FUNC("CTreeExpansionType_to_string", "cs", "i", CTreeExpansionType_to_string) \
STD2_FUNC("CListDragPos_to_string", "cs", "i", CListDragPos_to_string) \
STD2_FUNC("FileFilterFlags_to_string", "cs", "i", FileFilterFlags_to_string) \
STD2_FUNC("WidgetFlags_to_string", "cs", "i", WidgetFlags_to_string) \
STD2_FUNC("CellRendererMode_to_string", "cs", "i", CellRendererMode_to_string) \
STD2_FUNC("PrintError_to_string", "cs", "i", PrintError_to_string) \
STD2_FUNC("ProgressBarOrientation_to_string", "cs", "i", ProgressBarOrientation_to_string) \
STD2_FUNC("RecentManagerError_to_string", "cs", "i", RecentManagerError_to_string) \
STD2_FUNC("EntryIconPosition_to_string", "cs", "i", EntryIconPosition_to_string) \
STD2_FUNC("WidgetHelpType_to_string", "cs", "i", WidgetHelpType_to_string) \
STD2_FUNC("CTreeLineStyle_to_string", "cs", "i", CTreeLineStyle_to_string) \
STD2_FUNC("ToolbarChildType_to_string", "cs", "i", ToolbarChildType_to_string) \
STD2_FUNC("Unit_to_string", "cs", "i", Unit_to_string) \
STD2_FUNC("PrintOperationAction_to_string", "cs", "i", PrintOperationAction_to_string) \
STD2_FUNC("PrintDuplex_to_string", "cs", "i", PrintDuplex_to_string) \
STD2_FUNC("AccelFlags_to_string", "cs", "i", AccelFlags_to_string) \
STD2_FUNC("ToolbarSpaceStyle_to_string", "cs", "i", ToolbarSpaceStyle_to_string) \
STD2_FUNC("TreeViewDropPosition_to_string", "cs", "i", TreeViewDropPosition_to_string) \
STD2_FUNC("WindowPosition_to_string", "cs", "i", WindowPosition_to_string) \
STD2_FUNC("FileChooserConfirmation_to_string", "cs", "i", FileChooserConfirmation_to_string) \
STD2_FUNC("Visibility_to_string", "cs", "i", Visibility_to_string) \
STD2_FUNC("ButtonBoxStyle_to_string", "cs", "i", ButtonBoxStyle_to_string) \
STD2_FUNC("FileChooserError_to_string", "cs", "i", FileChooserError_to_string) \
STD2_FUNC("PathPriorityType_to_string", "cs", "i", PathPriorityType_to_string) \
STD2_FUNC("CellType_to_string", "cs", "i", CellType_to_string) \
STD2_FUNC("CurveType_to_string", "cs", "i", CurveType_to_string) \
STD2_FUNC("DeleteType_to_string", "cs", "i", DeleteType_to_string) \
STD2_FUNC("IconSize_to_string", "cs", "i", IconSize_to_string) \
STD2_FUNC("SensitivityType_to_string", "cs", "i", SensitivityType_to_string) \
STD2_FUNC("PathType_to_string", "cs", "i", PathType_to_string) \
STD2_FUNC("ResizeMode_to_string", "cs", "i", ResizeMode_to_string) \
STD2_FUNC("SelectionMode_to_string", "cs", "i", SelectionMode_to_string) \
STD2_FUNC("SubmenuPlacement_to_string", "cs", "i", SubmenuPlacement_to_string) \
STD2_FUNC("WrapMode_to_string", "cs", "i", WrapMode_to_string) \
STD2_FUNC("NumberUpLayout_to_string", "cs", "i", NumberUpLayout_to_string) \
STD2_FUNC("PageOrientation_to_string", "cs", "i", PageOrientation_to_string) \
STD2_FUNC("DialogFlags_to_string", "cs", "i", DialogFlags_to_string) \
STD2_FUNC("ResponseType_to_string", "cs", "i", ResponseType_to_string) \
STD2_FUNC("AssistantPageType_to_string", "cs", "i", AssistantPageType_to_string) \
STD2_FUNC("IconThemeError_to_string", "cs", "i", IconThemeError_to_string) \
STD2_FUNC("MetricType_to_string", "cs", "i", MetricType_to_string) \
STD2_FUNC("CTreePos_to_string", "cs", "i", CTreePos_to_string) \
STD2_FUNC("ShadowType_to_string", "cs", "i", ShadowType_to_string) \

