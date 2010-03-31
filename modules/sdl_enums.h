/* generated: Thu Mar 25 20:22:16 2010
 * arguments: scripts/gccxml.py /usr/include/SDL/SDL.h prefix:SDL_ enums
 */
static void audiostatus_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_AUDIO_STOPPED:
        s = "AUDIO_STOPPED";
        break;
    case SDL_AUDIO_PLAYING:
        s = "AUDIO_PLAYING";
        break;
    case SDL_AUDIO_PAUSED:
        s = "AUDIO_PAUSED";
        break;
    }
    *(const char**)ret = s;
}
static void EventMasks_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_ACTIVEEVENTMASK:
        s = "ACTIVEEVENTMASK";
        break;
    case SDL_KEYDOWNMASK:
        s = "KEYDOWNMASK";
        break;
    case SDL_KEYUPMASK:
        s = "KEYUPMASK";
        break;
    case SDL_KEYEVENTMASK:
        s = "KEYEVENTMASK";
        break;
    case SDL_MOUSEMOTIONMASK:
        s = "MOUSEMOTIONMASK";
        break;
    case SDL_MOUSEBUTTONDOWNMASK:
        s = "MOUSEBUTTONDOWNMASK";
        break;
    case SDL_MOUSEBUTTONUPMASK:
        s = "MOUSEBUTTONUPMASK";
        break;
    case SDL_MOUSEEVENTMASK:
        s = "MOUSEEVENTMASK";
        break;
    case SDL_JOYAXISMOTIONMASK:
        s = "JOYAXISMOTIONMASK";
        break;
    case SDL_JOYBALLMOTIONMASK:
        s = "JOYBALLMOTIONMASK";
        break;
    case SDL_JOYHATMOTIONMASK:
        s = "JOYHATMOTIONMASK";
        break;
    case SDL_JOYBUTTONDOWNMASK:
        s = "JOYBUTTONDOWNMASK";
        break;
    case SDL_JOYBUTTONUPMASK:
        s = "JOYBUTTONUPMASK";
        break;
    case SDL_JOYEVENTMASK:
        s = "JOYEVENTMASK";
        break;
    case SDL_VIDEORESIZEMASK:
        s = "VIDEORESIZEMASK";
        break;
    case SDL_VIDEOEXPOSEMASK:
        s = "VIDEOEXPOSEMASK";
        break;
    case SDL_QUITMASK:
        s = "QUITMASK";
        break;
    case SDL_SYSWMEVENTMASK:
        s = "SYSWMEVENTMASK";
        break;
    }
    *(const char**)ret = s;
}
static void GLattr_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_GL_RED_SIZE:
        s = "GL_RED_SIZE";
        break;
    case SDL_GL_GREEN_SIZE:
        s = "GL_GREEN_SIZE";
        break;
    case SDL_GL_BLUE_SIZE:
        s = "GL_BLUE_SIZE";
        break;
    case SDL_GL_ALPHA_SIZE:
        s = "GL_ALPHA_SIZE";
        break;
    case SDL_GL_BUFFER_SIZE:
        s = "GL_BUFFER_SIZE";
        break;
    case SDL_GL_DOUBLEBUFFER:
        s = "GL_DOUBLEBUFFER";
        break;
    case SDL_GL_DEPTH_SIZE:
        s = "GL_DEPTH_SIZE";
        break;
    case SDL_GL_STENCIL_SIZE:
        s = "GL_STENCIL_SIZE";
        break;
    case SDL_GL_ACCUM_RED_SIZE:
        s = "GL_ACCUM_RED_SIZE";
        break;
    case SDL_GL_ACCUM_GREEN_SIZE:
        s = "GL_ACCUM_GREEN_SIZE";
        break;
    case SDL_GL_ACCUM_BLUE_SIZE:
        s = "GL_ACCUM_BLUE_SIZE";
        break;
    case SDL_GL_ACCUM_ALPHA_SIZE:
        s = "GL_ACCUM_ALPHA_SIZE";
        break;
    case SDL_GL_STEREO:
        s = "GL_STEREO";
        break;
    case SDL_GL_MULTISAMPLEBUFFERS:
        s = "GL_MULTISAMPLEBUFFERS";
        break;
    case SDL_GL_MULTISAMPLESAMPLES:
        s = "GL_MULTISAMPLESAMPLES";
        break;
    case SDL_GL_ACCELERATED_VISUAL:
        s = "GL_ACCELERATED_VISUAL";
        break;
    case SDL_GL_SWAP_CONTROL:
        s = "GL_SWAP_CONTROL";
        break;
    }
    *(const char**)ret = s;
}
static void CDstatus_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case CD_TRAYEMPTY:
        s = "CD_TRAYEMPTY";
        break;
    case CD_STOPPED:
        s = "CD_STOPPED";
        break;
    case CD_PLAYING:
        s = "CD_PLAYING";
        break;
    case CD_PAUSED:
        s = "CD_PAUSED";
        break;
    case CD_ERROR:
        s = "CD_ERROR";
        break;
    }
    *(const char**)ret = s;
}
static void SDLMod_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case KMOD_NONE:
        s = "KMOD_NONE";
        break;
    case KMOD_LSHIFT:
        s = "KMOD_LSHIFT";
        break;
    case KMOD_RSHIFT:
        s = "KMOD_RSHIFT";
        break;
    case KMOD_LCTRL:
        s = "KMOD_LCTRL";
        break;
    case KMOD_RCTRL:
        s = "KMOD_RCTRL";
        break;
    case KMOD_LALT:
        s = "KMOD_LALT";
        break;
    case KMOD_RALT:
        s = "KMOD_RALT";
        break;
    case KMOD_LMETA:
        s = "KMOD_LMETA";
        break;
    case KMOD_RMETA:
        s = "KMOD_RMETA";
        break;
    case KMOD_NUM:
        s = "KMOD_NUM";
        break;
    case KMOD_CAPS:
        s = "KMOD_CAPS";
        break;
    case KMOD_MODE:
        s = "KMOD_MODE";
        break;
    case KMOD_RESERVED:
        s = "KMOD_RESERVED";
        break;
    }
    *(const char**)ret = s;
}
static void errorcode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_ENOMEM:
        s = "ENOMEM";
        break;
    case SDL_EFREAD:
        s = "EFREAD";
        break;
    case SDL_EFWRITE:
        s = "EFWRITE";
        break;
    case SDL_EFSEEK:
        s = "EFSEEK";
        break;
    case SDL_UNSUPPORTED:
        s = "UNSUPPORTED";
        break;
    case SDL_LASTERROR:
        s = "LASTERROR";
        break;
    }
    *(const char**)ret = s;
}
static void SDLKey_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDLK_UNKNOWN:
        s = "SDLK_UNKNOWN";
        break;
    case SDLK_BACKSPACE:
        s = "SDLK_BACKSPACE";
        break;
    case SDLK_TAB:
        s = "SDLK_TAB";
        break;
    case SDLK_CLEAR:
        s = "SDLK_CLEAR";
        break;
    case SDLK_RETURN:
        s = "SDLK_RETURN";
        break;
    case SDLK_PAUSE:
        s = "SDLK_PAUSE";
        break;
    case SDLK_ESCAPE:
        s = "SDLK_ESCAPE";
        break;
    case SDLK_SPACE:
        s = "SDLK_SPACE";
        break;
    case SDLK_EXCLAIM:
        s = "SDLK_EXCLAIM";
        break;
    case SDLK_QUOTEDBL:
        s = "SDLK_QUOTEDBL";
        break;
    case SDLK_HASH:
        s = "SDLK_HASH";
        break;
    case SDLK_DOLLAR:
        s = "SDLK_DOLLAR";
        break;
    case SDLK_AMPERSAND:
        s = "SDLK_AMPERSAND";
        break;
    case SDLK_QUOTE:
        s = "SDLK_QUOTE";
        break;
    case SDLK_LEFTPAREN:
        s = "SDLK_LEFTPAREN";
        break;
    case SDLK_RIGHTPAREN:
        s = "SDLK_RIGHTPAREN";
        break;
    case SDLK_ASTERISK:
        s = "SDLK_ASTERISK";
        break;
    case SDLK_PLUS:
        s = "SDLK_PLUS";
        break;
    case SDLK_COMMA:
        s = "SDLK_COMMA";
        break;
    case SDLK_MINUS:
        s = "SDLK_MINUS";
        break;
    case SDLK_PERIOD:
        s = "SDLK_PERIOD";
        break;
    case SDLK_SLASH:
        s = "SDLK_SLASH";
        break;
    case SDLK_0:
        s = "SDLK_0";
        break;
    case SDLK_1:
        s = "SDLK_1";
        break;
    case SDLK_2:
        s = "SDLK_2";
        break;
    case SDLK_3:
        s = "SDLK_3";
        break;
    case SDLK_4:
        s = "SDLK_4";
        break;
    case SDLK_5:
        s = "SDLK_5";
        break;
    case SDLK_6:
        s = "SDLK_6";
        break;
    case SDLK_7:
        s = "SDLK_7";
        break;
    case SDLK_8:
        s = "SDLK_8";
        break;
    case SDLK_9:
        s = "SDLK_9";
        break;
    case SDLK_COLON:
        s = "SDLK_COLON";
        break;
    case SDLK_SEMICOLON:
        s = "SDLK_SEMICOLON";
        break;
    case SDLK_LESS:
        s = "SDLK_LESS";
        break;
    case SDLK_EQUALS:
        s = "SDLK_EQUALS";
        break;
    case SDLK_GREATER:
        s = "SDLK_GREATER";
        break;
    case SDLK_QUESTION:
        s = "SDLK_QUESTION";
        break;
    case SDLK_AT:
        s = "SDLK_AT";
        break;
    case SDLK_LEFTBRACKET:
        s = "SDLK_LEFTBRACKET";
        break;
    case SDLK_BACKSLASH:
        s = "SDLK_BACKSLASH";
        break;
    case SDLK_RIGHTBRACKET:
        s = "SDLK_RIGHTBRACKET";
        break;
    case SDLK_CARET:
        s = "SDLK_CARET";
        break;
    case SDLK_UNDERSCORE:
        s = "SDLK_UNDERSCORE";
        break;
    case SDLK_BACKQUOTE:
        s = "SDLK_BACKQUOTE";
        break;
    case SDLK_a:
        s = "SDLK_a";
        break;
    case SDLK_b:
        s = "SDLK_b";
        break;
    case SDLK_c:
        s = "SDLK_c";
        break;
    case SDLK_d:
        s = "SDLK_d";
        break;
    case SDLK_e:
        s = "SDLK_e";
        break;
    case SDLK_f:
        s = "SDLK_f";
        break;
    case SDLK_g:
        s = "SDLK_g";
        break;
    case SDLK_h:
        s = "SDLK_h";
        break;
    case SDLK_i:
        s = "SDLK_i";
        break;
    case SDLK_j:
        s = "SDLK_j";
        break;
    case SDLK_k:
        s = "SDLK_k";
        break;
    case SDLK_l:
        s = "SDLK_l";
        break;
    case SDLK_m:
        s = "SDLK_m";
        break;
    case SDLK_n:
        s = "SDLK_n";
        break;
    case SDLK_o:
        s = "SDLK_o";
        break;
    case SDLK_p:
        s = "SDLK_p";
        break;
    case SDLK_q:
        s = "SDLK_q";
        break;
    case SDLK_r:
        s = "SDLK_r";
        break;
    case SDLK_s:
        s = "SDLK_s";
        break;
    case SDLK_t:
        s = "SDLK_t";
        break;
    case SDLK_u:
        s = "SDLK_u";
        break;
    case SDLK_v:
        s = "SDLK_v";
        break;
    case SDLK_w:
        s = "SDLK_w";
        break;
    case SDLK_x:
        s = "SDLK_x";
        break;
    case SDLK_y:
        s = "SDLK_y";
        break;
    case SDLK_z:
        s = "SDLK_z";
        break;
    case SDLK_DELETE:
        s = "SDLK_DELETE";
        break;
    case SDLK_WORLD_0:
        s = "SDLK_WORLD_0";
        break;
    case SDLK_WORLD_1:
        s = "SDLK_WORLD_1";
        break;
    case SDLK_WORLD_2:
        s = "SDLK_WORLD_2";
        break;
    case SDLK_WORLD_3:
        s = "SDLK_WORLD_3";
        break;
    case SDLK_WORLD_4:
        s = "SDLK_WORLD_4";
        break;
    case SDLK_WORLD_5:
        s = "SDLK_WORLD_5";
        break;
    case SDLK_WORLD_6:
        s = "SDLK_WORLD_6";
        break;
    case SDLK_WORLD_7:
        s = "SDLK_WORLD_7";
        break;
    case SDLK_WORLD_8:
        s = "SDLK_WORLD_8";
        break;
    case SDLK_WORLD_9:
        s = "SDLK_WORLD_9";
        break;
    case SDLK_WORLD_10:
        s = "SDLK_WORLD_10";
        break;
    case SDLK_WORLD_11:
        s = "SDLK_WORLD_11";
        break;
    case SDLK_WORLD_12:
        s = "SDLK_WORLD_12";
        break;
    case SDLK_WORLD_13:
        s = "SDLK_WORLD_13";
        break;
    case SDLK_WORLD_14:
        s = "SDLK_WORLD_14";
        break;
    case SDLK_WORLD_15:
        s = "SDLK_WORLD_15";
        break;
    case SDLK_WORLD_16:
        s = "SDLK_WORLD_16";
        break;
    case SDLK_WORLD_17:
        s = "SDLK_WORLD_17";
        break;
    case SDLK_WORLD_18:
        s = "SDLK_WORLD_18";
        break;
    case SDLK_WORLD_19:
        s = "SDLK_WORLD_19";
        break;
    case SDLK_WORLD_20:
        s = "SDLK_WORLD_20";
        break;
    case SDLK_WORLD_21:
        s = "SDLK_WORLD_21";
        break;
    case SDLK_WORLD_22:
        s = "SDLK_WORLD_22";
        break;
    case SDLK_WORLD_23:
        s = "SDLK_WORLD_23";
        break;
    case SDLK_WORLD_24:
        s = "SDLK_WORLD_24";
        break;
    case SDLK_WORLD_25:
        s = "SDLK_WORLD_25";
        break;
    case SDLK_WORLD_26:
        s = "SDLK_WORLD_26";
        break;
    case SDLK_WORLD_27:
        s = "SDLK_WORLD_27";
        break;
    case SDLK_WORLD_28:
        s = "SDLK_WORLD_28";
        break;
    case SDLK_WORLD_29:
        s = "SDLK_WORLD_29";
        break;
    case SDLK_WORLD_30:
        s = "SDLK_WORLD_30";
        break;
    case SDLK_WORLD_31:
        s = "SDLK_WORLD_31";
        break;
    case SDLK_WORLD_32:
        s = "SDLK_WORLD_32";
        break;
    case SDLK_WORLD_33:
        s = "SDLK_WORLD_33";
        break;
    case SDLK_WORLD_34:
        s = "SDLK_WORLD_34";
        break;
    case SDLK_WORLD_35:
        s = "SDLK_WORLD_35";
        break;
    case SDLK_WORLD_36:
        s = "SDLK_WORLD_36";
        break;
    case SDLK_WORLD_37:
        s = "SDLK_WORLD_37";
        break;
    case SDLK_WORLD_38:
        s = "SDLK_WORLD_38";
        break;
    case SDLK_WORLD_39:
        s = "SDLK_WORLD_39";
        break;
    case SDLK_WORLD_40:
        s = "SDLK_WORLD_40";
        break;
    case SDLK_WORLD_41:
        s = "SDLK_WORLD_41";
        break;
    case SDLK_WORLD_42:
        s = "SDLK_WORLD_42";
        break;
    case SDLK_WORLD_43:
        s = "SDLK_WORLD_43";
        break;
    case SDLK_WORLD_44:
        s = "SDLK_WORLD_44";
        break;
    case SDLK_WORLD_45:
        s = "SDLK_WORLD_45";
        break;
    case SDLK_WORLD_46:
        s = "SDLK_WORLD_46";
        break;
    case SDLK_WORLD_47:
        s = "SDLK_WORLD_47";
        break;
    case SDLK_WORLD_48:
        s = "SDLK_WORLD_48";
        break;
    case SDLK_WORLD_49:
        s = "SDLK_WORLD_49";
        break;
    case SDLK_WORLD_50:
        s = "SDLK_WORLD_50";
        break;
    case SDLK_WORLD_51:
        s = "SDLK_WORLD_51";
        break;
    case SDLK_WORLD_52:
        s = "SDLK_WORLD_52";
        break;
    case SDLK_WORLD_53:
        s = "SDLK_WORLD_53";
        break;
    case SDLK_WORLD_54:
        s = "SDLK_WORLD_54";
        break;
    case SDLK_WORLD_55:
        s = "SDLK_WORLD_55";
        break;
    case SDLK_WORLD_56:
        s = "SDLK_WORLD_56";
        break;
    case SDLK_WORLD_57:
        s = "SDLK_WORLD_57";
        break;
    case SDLK_WORLD_58:
        s = "SDLK_WORLD_58";
        break;
    case SDLK_WORLD_59:
        s = "SDLK_WORLD_59";
        break;
    case SDLK_WORLD_60:
        s = "SDLK_WORLD_60";
        break;
    case SDLK_WORLD_61:
        s = "SDLK_WORLD_61";
        break;
    case SDLK_WORLD_62:
        s = "SDLK_WORLD_62";
        break;
    case SDLK_WORLD_63:
        s = "SDLK_WORLD_63";
        break;
    case SDLK_WORLD_64:
        s = "SDLK_WORLD_64";
        break;
    case SDLK_WORLD_65:
        s = "SDLK_WORLD_65";
        break;
    case SDLK_WORLD_66:
        s = "SDLK_WORLD_66";
        break;
    case SDLK_WORLD_67:
        s = "SDLK_WORLD_67";
        break;
    case SDLK_WORLD_68:
        s = "SDLK_WORLD_68";
        break;
    case SDLK_WORLD_69:
        s = "SDLK_WORLD_69";
        break;
    case SDLK_WORLD_70:
        s = "SDLK_WORLD_70";
        break;
    case SDLK_WORLD_71:
        s = "SDLK_WORLD_71";
        break;
    case SDLK_WORLD_72:
        s = "SDLK_WORLD_72";
        break;
    case SDLK_WORLD_73:
        s = "SDLK_WORLD_73";
        break;
    case SDLK_WORLD_74:
        s = "SDLK_WORLD_74";
        break;
    case SDLK_WORLD_75:
        s = "SDLK_WORLD_75";
        break;
    case SDLK_WORLD_76:
        s = "SDLK_WORLD_76";
        break;
    case SDLK_WORLD_77:
        s = "SDLK_WORLD_77";
        break;
    case SDLK_WORLD_78:
        s = "SDLK_WORLD_78";
        break;
    case SDLK_WORLD_79:
        s = "SDLK_WORLD_79";
        break;
    case SDLK_WORLD_80:
        s = "SDLK_WORLD_80";
        break;
    case SDLK_WORLD_81:
        s = "SDLK_WORLD_81";
        break;
    case SDLK_WORLD_82:
        s = "SDLK_WORLD_82";
        break;
    case SDLK_WORLD_83:
        s = "SDLK_WORLD_83";
        break;
    case SDLK_WORLD_84:
        s = "SDLK_WORLD_84";
        break;
    case SDLK_WORLD_85:
        s = "SDLK_WORLD_85";
        break;
    case SDLK_WORLD_86:
        s = "SDLK_WORLD_86";
        break;
    case SDLK_WORLD_87:
        s = "SDLK_WORLD_87";
        break;
    case SDLK_WORLD_88:
        s = "SDLK_WORLD_88";
        break;
    case SDLK_WORLD_89:
        s = "SDLK_WORLD_89";
        break;
    case SDLK_WORLD_90:
        s = "SDLK_WORLD_90";
        break;
    case SDLK_WORLD_91:
        s = "SDLK_WORLD_91";
        break;
    case SDLK_WORLD_92:
        s = "SDLK_WORLD_92";
        break;
    case SDLK_WORLD_93:
        s = "SDLK_WORLD_93";
        break;
    case SDLK_WORLD_94:
        s = "SDLK_WORLD_94";
        break;
    case SDLK_WORLD_95:
        s = "SDLK_WORLD_95";
        break;
    case SDLK_KP0:
        s = "SDLK_KP0";
        break;
    case SDLK_KP1:
        s = "SDLK_KP1";
        break;
    case SDLK_KP2:
        s = "SDLK_KP2";
        break;
    case SDLK_KP3:
        s = "SDLK_KP3";
        break;
    case SDLK_KP4:
        s = "SDLK_KP4";
        break;
    case SDLK_KP5:
        s = "SDLK_KP5";
        break;
    case SDLK_KP6:
        s = "SDLK_KP6";
        break;
    case SDLK_KP7:
        s = "SDLK_KP7";
        break;
    case SDLK_KP8:
        s = "SDLK_KP8";
        break;
    case SDLK_KP9:
        s = "SDLK_KP9";
        break;
    case SDLK_KP_PERIOD:
        s = "SDLK_KP_PERIOD";
        break;
    case SDLK_KP_DIVIDE:
        s = "SDLK_KP_DIVIDE";
        break;
    case SDLK_KP_MULTIPLY:
        s = "SDLK_KP_MULTIPLY";
        break;
    case SDLK_KP_MINUS:
        s = "SDLK_KP_MINUS";
        break;
    case SDLK_KP_PLUS:
        s = "SDLK_KP_PLUS";
        break;
    case SDLK_KP_ENTER:
        s = "SDLK_KP_ENTER";
        break;
    case SDLK_KP_EQUALS:
        s = "SDLK_KP_EQUALS";
        break;
    case SDLK_UP:
        s = "SDLK_UP";
        break;
    case SDLK_DOWN:
        s = "SDLK_DOWN";
        break;
    case SDLK_RIGHT:
        s = "SDLK_RIGHT";
        break;
    case SDLK_LEFT:
        s = "SDLK_LEFT";
        break;
    case SDLK_INSERT:
        s = "SDLK_INSERT";
        break;
    case SDLK_HOME:
        s = "SDLK_HOME";
        break;
    case SDLK_END:
        s = "SDLK_END";
        break;
    case SDLK_PAGEUP:
        s = "SDLK_PAGEUP";
        break;
    case SDLK_PAGEDOWN:
        s = "SDLK_PAGEDOWN";
        break;
    case SDLK_F1:
        s = "SDLK_F1";
        break;
    case SDLK_F2:
        s = "SDLK_F2";
        break;
    case SDLK_F3:
        s = "SDLK_F3";
        break;
    case SDLK_F4:
        s = "SDLK_F4";
        break;
    case SDLK_F5:
        s = "SDLK_F5";
        break;
    case SDLK_F6:
        s = "SDLK_F6";
        break;
    case SDLK_F7:
        s = "SDLK_F7";
        break;
    case SDLK_F8:
        s = "SDLK_F8";
        break;
    case SDLK_F9:
        s = "SDLK_F9";
        break;
    case SDLK_F10:
        s = "SDLK_F10";
        break;
    case SDLK_F11:
        s = "SDLK_F11";
        break;
    case SDLK_F12:
        s = "SDLK_F12";
        break;
    case SDLK_F13:
        s = "SDLK_F13";
        break;
    case SDLK_F14:
        s = "SDLK_F14";
        break;
    case SDLK_F15:
        s = "SDLK_F15";
        break;
    case SDLK_NUMLOCK:
        s = "SDLK_NUMLOCK";
        break;
    case SDLK_CAPSLOCK:
        s = "SDLK_CAPSLOCK";
        break;
    case SDLK_SCROLLOCK:
        s = "SDLK_SCROLLOCK";
        break;
    case SDLK_RSHIFT:
        s = "SDLK_RSHIFT";
        break;
    case SDLK_LSHIFT:
        s = "SDLK_LSHIFT";
        break;
    case SDLK_RCTRL:
        s = "SDLK_RCTRL";
        break;
    case SDLK_LCTRL:
        s = "SDLK_LCTRL";
        break;
    case SDLK_RALT:
        s = "SDLK_RALT";
        break;
    case SDLK_LALT:
        s = "SDLK_LALT";
        break;
    case SDLK_RMETA:
        s = "SDLK_RMETA";
        break;
    case SDLK_LMETA:
        s = "SDLK_LMETA";
        break;
    case SDLK_LSUPER:
        s = "SDLK_LSUPER";
        break;
    case SDLK_RSUPER:
        s = "SDLK_RSUPER";
        break;
    case SDLK_MODE:
        s = "SDLK_MODE";
        break;
    case SDLK_COMPOSE:
        s = "SDLK_COMPOSE";
        break;
    case SDLK_HELP:
        s = "SDLK_HELP";
        break;
    case SDLK_PRINT:
        s = "SDLK_PRINT";
        break;
    case SDLK_SYSREQ:
        s = "SDLK_SYSREQ";
        break;
    case SDLK_BREAK:
        s = "SDLK_BREAK";
        break;
    case SDLK_MENU:
        s = "SDLK_MENU";
        break;
    case SDLK_POWER:
        s = "SDLK_POWER";
        break;
    case SDLK_EURO:
        s = "SDLK_EURO";
        break;
    case SDLK_UNDO:
        s = "SDLK_UNDO";
        break;
    case SDLK_LAST:
        s = "SDLK_LAST";
        break;
    }
    *(const char**)ret = s;
}
static void eventaction_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_ADDEVENT:
        s = "ADDEVENT";
        break;
    case SDL_PEEKEVENT:
        s = "PEEKEVENT";
        break;
    case SDL_GETEVENT:
        s = "GETEVENT";
        break;
    }
    *(const char**)ret = s;
}
static void GrabMode_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_GRAB_QUERY:
        s = "GRAB_QUERY";
        break;
    case SDL_GRAB_OFF:
        s = "GRAB_OFF";
        break;
    case SDL_GRAB_ON:
        s = "GRAB_ON";
        break;
    case SDL_GRAB_FULLSCREEN:
        s = "GRAB_FULLSCREEN";
        break;
    }
    *(const char**)ret = s;
}
static void DUMMY_ENUM_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case DUMMY_ENUM_VALUE:
        s = "DUMMY_ENUM_VALUE";
        break;
    }
    *(const char**)ret = s;
}
static void bool_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_FALSE:
        s = "FALSE";
        break;
    case SDL_TRUE:
        s = "TRUE";
        break;
    }
    *(const char**)ret = s;
}
static void Events_to_string(void* ret, void* const* args) {
    const char* s = 0;
    switch (*(int*)args[0]) {
    case SDL_NOEVENT:
        s = "NOEVENT";
        break;
    case SDL_ACTIVEEVENT:
        s = "ACTIVEEVENT";
        break;
    case SDL_KEYDOWN:
        s = "KEYDOWN";
        break;
    case SDL_KEYUP:
        s = "KEYUP";
        break;
    case SDL_MOUSEMOTION:
        s = "MOUSEMOTION";
        break;
    case SDL_MOUSEBUTTONDOWN:
        s = "MOUSEBUTTONDOWN";
        break;
    case SDL_MOUSEBUTTONUP:
        s = "MOUSEBUTTONUP";
        break;
    case SDL_JOYAXISMOTION:
        s = "JOYAXISMOTION";
        break;
    case SDL_JOYBALLMOTION:
        s = "JOYBALLMOTION";
        break;
    case SDL_JOYHATMOTION:
        s = "JOYHATMOTION";
        break;
    case SDL_JOYBUTTONDOWN:
        s = "JOYBUTTONDOWN";
        break;
    case SDL_JOYBUTTONUP:
        s = "JOYBUTTONUP";
        break;
    case SDL_QUIT:
        s = "QUIT";
        break;
    case SDL_SYSWMEVENT:
        s = "SYSWMEVENT";
        break;
    case SDL_EVENT_RESERVEDA:
        s = "EVENT_RESERVEDA";
        break;
    case SDL_EVENT_RESERVEDB:
        s = "EVENT_RESERVEDB";
        break;
    case SDL_VIDEORESIZE:
        s = "VIDEORESIZE";
        break;
    case SDL_VIDEOEXPOSE:
        s = "VIDEOEXPOSE";
        break;
    case SDL_EVENT_RESERVED2:
        s = "EVENT_RESERVED2";
        break;
    case SDL_EVENT_RESERVED3:
        s = "EVENT_RESERVED3";
        break;
    case SDL_EVENT_RESERVED4:
        s = "EVENT_RESERVED4";
        break;
    case SDL_EVENT_RESERVED5:
        s = "EVENT_RESERVED5";
        break;
    case SDL_EVENT_RESERVED6:
        s = "EVENT_RESERVED6";
        break;
    case SDL_EVENT_RESERVED7:
        s = "EVENT_RESERVED7";
        break;
    case SDL_USEREVENT:
        s = "USEREVENT";
        break;
    case SDL_NUMEVENTS:
        s = "NUMEVENTS";
        break;
    }
    *(const char**)ret = s;
}

#define ENUM_CONSTS \
STD2_CONST("AUDIO_STOPPED", INT, SDL_AUDIO_STOPPED) \
STD2_CONST("AUDIO_PLAYING", INT, SDL_AUDIO_PLAYING) \
STD2_CONST("AUDIO_PAUSED", INT, SDL_AUDIO_PAUSED) \
STD2_CONST("ACTIVEEVENTMASK", INT, SDL_ACTIVEEVENTMASK) \
STD2_CONST("KEYDOWNMASK", INT, SDL_KEYDOWNMASK) \
STD2_CONST("KEYUPMASK", INT, SDL_KEYUPMASK) \
STD2_CONST("KEYEVENTMASK", INT, SDL_KEYEVENTMASK) \
STD2_CONST("MOUSEMOTIONMASK", INT, SDL_MOUSEMOTIONMASK) \
STD2_CONST("MOUSEBUTTONDOWNMASK", INT, SDL_MOUSEBUTTONDOWNMASK) \
STD2_CONST("MOUSEBUTTONUPMASK", INT, SDL_MOUSEBUTTONUPMASK) \
STD2_CONST("MOUSEEVENTMASK", INT, SDL_MOUSEEVENTMASK) \
STD2_CONST("JOYAXISMOTIONMASK", INT, SDL_JOYAXISMOTIONMASK) \
STD2_CONST("JOYBALLMOTIONMASK", INT, SDL_JOYBALLMOTIONMASK) \
STD2_CONST("JOYHATMOTIONMASK", INT, SDL_JOYHATMOTIONMASK) \
STD2_CONST("JOYBUTTONDOWNMASK", INT, SDL_JOYBUTTONDOWNMASK) \
STD2_CONST("JOYBUTTONUPMASK", INT, SDL_JOYBUTTONUPMASK) \
STD2_CONST("JOYEVENTMASK", INT, SDL_JOYEVENTMASK) \
STD2_CONST("VIDEORESIZEMASK", INT, SDL_VIDEORESIZEMASK) \
STD2_CONST("VIDEOEXPOSEMASK", INT, SDL_VIDEOEXPOSEMASK) \
STD2_CONST("QUITMASK", INT, SDL_QUITMASK) \
STD2_CONST("SYSWMEVENTMASK", INT, SDL_SYSWMEVENTMASK) \
STD2_CONST("GL_RED_SIZE", INT, SDL_GL_RED_SIZE) \
STD2_CONST("GL_GREEN_SIZE", INT, SDL_GL_GREEN_SIZE) \
STD2_CONST("GL_BLUE_SIZE", INT, SDL_GL_BLUE_SIZE) \
STD2_CONST("GL_ALPHA_SIZE", INT, SDL_GL_ALPHA_SIZE) \
STD2_CONST("GL_BUFFER_SIZE", INT, SDL_GL_BUFFER_SIZE) \
STD2_CONST("GL_DOUBLEBUFFER", INT, SDL_GL_DOUBLEBUFFER) \
STD2_CONST("GL_DEPTH_SIZE", INT, SDL_GL_DEPTH_SIZE) \
STD2_CONST("GL_STENCIL_SIZE", INT, SDL_GL_STENCIL_SIZE) \
STD2_CONST("GL_ACCUM_RED_SIZE", INT, SDL_GL_ACCUM_RED_SIZE) \
STD2_CONST("GL_ACCUM_GREEN_SIZE", INT, SDL_GL_ACCUM_GREEN_SIZE) \
STD2_CONST("GL_ACCUM_BLUE_SIZE", INT, SDL_GL_ACCUM_BLUE_SIZE) \
STD2_CONST("GL_ACCUM_ALPHA_SIZE", INT, SDL_GL_ACCUM_ALPHA_SIZE) \
STD2_CONST("GL_STEREO", INT, SDL_GL_STEREO) \
STD2_CONST("GL_MULTISAMPLEBUFFERS", INT, SDL_GL_MULTISAMPLEBUFFERS) \
STD2_CONST("GL_MULTISAMPLESAMPLES", INT, SDL_GL_MULTISAMPLESAMPLES) \
STD2_CONST("GL_ACCELERATED_VISUAL", INT, SDL_GL_ACCELERATED_VISUAL) \
STD2_CONST("GL_SWAP_CONTROL", INT, SDL_GL_SWAP_CONTROL) \
STD2_CONST("CD_TRAYEMPTY", INT, CD_TRAYEMPTY) \
STD2_CONST("CD_STOPPED", INT, CD_STOPPED) \
STD2_CONST("CD_PLAYING", INT, CD_PLAYING) \
STD2_CONST("CD_PAUSED", INT, CD_PAUSED) \
STD2_CONST("CD_ERROR", INT, CD_ERROR) \
STD2_CONST("KMOD_NONE", INT, KMOD_NONE) \
STD2_CONST("KMOD_LSHIFT", INT, KMOD_LSHIFT) \
STD2_CONST("KMOD_RSHIFT", INT, KMOD_RSHIFT) \
STD2_CONST("KMOD_LCTRL", INT, KMOD_LCTRL) \
STD2_CONST("KMOD_RCTRL", INT, KMOD_RCTRL) \
STD2_CONST("KMOD_LALT", INT, KMOD_LALT) \
STD2_CONST("KMOD_RALT", INT, KMOD_RALT) \
STD2_CONST("KMOD_LMETA", INT, KMOD_LMETA) \
STD2_CONST("KMOD_RMETA", INT, KMOD_RMETA) \
STD2_CONST("KMOD_NUM", INT, KMOD_NUM) \
STD2_CONST("KMOD_CAPS", INT, KMOD_CAPS) \
STD2_CONST("KMOD_MODE", INT, KMOD_MODE) \
STD2_CONST("KMOD_RESERVED", INT, KMOD_RESERVED) \
STD2_CONST("ENOMEM", INT, SDL_ENOMEM) \
STD2_CONST("EFREAD", INT, SDL_EFREAD) \
STD2_CONST("EFWRITE", INT, SDL_EFWRITE) \
STD2_CONST("EFSEEK", INT, SDL_EFSEEK) \
STD2_CONST("UNSUPPORTED", INT, SDL_UNSUPPORTED) \
STD2_CONST("LASTERROR", INT, SDL_LASTERROR) \
STD2_CONST("SDLK_UNKNOWN", INT, SDLK_UNKNOWN) \
STD2_CONST("SDLK_FIRST", INT, SDLK_FIRST) \
STD2_CONST("SDLK_BACKSPACE", INT, SDLK_BACKSPACE) \
STD2_CONST("SDLK_TAB", INT, SDLK_TAB) \
STD2_CONST("SDLK_CLEAR", INT, SDLK_CLEAR) \
STD2_CONST("SDLK_RETURN", INT, SDLK_RETURN) \
STD2_CONST("SDLK_PAUSE", INT, SDLK_PAUSE) \
STD2_CONST("SDLK_ESCAPE", INT, SDLK_ESCAPE) \
STD2_CONST("SDLK_SPACE", INT, SDLK_SPACE) \
STD2_CONST("SDLK_EXCLAIM", INT, SDLK_EXCLAIM) \
STD2_CONST("SDLK_QUOTEDBL", INT, SDLK_QUOTEDBL) \
STD2_CONST("SDLK_HASH", INT, SDLK_HASH) \
STD2_CONST("SDLK_DOLLAR", INT, SDLK_DOLLAR) \
STD2_CONST("SDLK_AMPERSAND", INT, SDLK_AMPERSAND) \
STD2_CONST("SDLK_QUOTE", INT, SDLK_QUOTE) \
STD2_CONST("SDLK_LEFTPAREN", INT, SDLK_LEFTPAREN) \
STD2_CONST("SDLK_RIGHTPAREN", INT, SDLK_RIGHTPAREN) \
STD2_CONST("SDLK_ASTERISK", INT, SDLK_ASTERISK) \
STD2_CONST("SDLK_PLUS", INT, SDLK_PLUS) \
STD2_CONST("SDLK_COMMA", INT, SDLK_COMMA) \
STD2_CONST("SDLK_MINUS", INT, SDLK_MINUS) \
STD2_CONST("SDLK_PERIOD", INT, SDLK_PERIOD) \
STD2_CONST("SDLK_SLASH", INT, SDLK_SLASH) \
STD2_CONST("SDLK_0", INT, SDLK_0) \
STD2_CONST("SDLK_1", INT, SDLK_1) \
STD2_CONST("SDLK_2", INT, SDLK_2) \
STD2_CONST("SDLK_3", INT, SDLK_3) \
STD2_CONST("SDLK_4", INT, SDLK_4) \
STD2_CONST("SDLK_5", INT, SDLK_5) \
STD2_CONST("SDLK_6", INT, SDLK_6) \
STD2_CONST("SDLK_7", INT, SDLK_7) \
STD2_CONST("SDLK_8", INT, SDLK_8) \
STD2_CONST("SDLK_9", INT, SDLK_9) \
STD2_CONST("SDLK_COLON", INT, SDLK_COLON) \
STD2_CONST("SDLK_SEMICOLON", INT, SDLK_SEMICOLON) \
STD2_CONST("SDLK_LESS", INT, SDLK_LESS) \
STD2_CONST("SDLK_EQUALS", INT, SDLK_EQUALS) \
STD2_CONST("SDLK_GREATER", INT, SDLK_GREATER) \
STD2_CONST("SDLK_QUESTION", INT, SDLK_QUESTION) \
STD2_CONST("SDLK_AT", INT, SDLK_AT) \
STD2_CONST("SDLK_LEFTBRACKET", INT, SDLK_LEFTBRACKET) \
STD2_CONST("SDLK_BACKSLASH", INT, SDLK_BACKSLASH) \
STD2_CONST("SDLK_RIGHTBRACKET", INT, SDLK_RIGHTBRACKET) \
STD2_CONST("SDLK_CARET", INT, SDLK_CARET) \
STD2_CONST("SDLK_UNDERSCORE", INT, SDLK_UNDERSCORE) \
STD2_CONST("SDLK_BACKQUOTE", INT, SDLK_BACKQUOTE) \
STD2_CONST("SDLK_a", INT, SDLK_a) \
STD2_CONST("SDLK_b", INT, SDLK_b) \
STD2_CONST("SDLK_c", INT, SDLK_c) \
STD2_CONST("SDLK_d", INT, SDLK_d) \
STD2_CONST("SDLK_e", INT, SDLK_e) \
STD2_CONST("SDLK_f", INT, SDLK_f) \
STD2_CONST("SDLK_g", INT, SDLK_g) \
STD2_CONST("SDLK_h", INT, SDLK_h) \
STD2_CONST("SDLK_i", INT, SDLK_i) \
STD2_CONST("SDLK_j", INT, SDLK_j) \
STD2_CONST("SDLK_k", INT, SDLK_k) \
STD2_CONST("SDLK_l", INT, SDLK_l) \
STD2_CONST("SDLK_m", INT, SDLK_m) \
STD2_CONST("SDLK_n", INT, SDLK_n) \
STD2_CONST("SDLK_o", INT, SDLK_o) \
STD2_CONST("SDLK_p", INT, SDLK_p) \
STD2_CONST("SDLK_q", INT, SDLK_q) \
STD2_CONST("SDLK_r", INT, SDLK_r) \
STD2_CONST("SDLK_s", INT, SDLK_s) \
STD2_CONST("SDLK_t", INT, SDLK_t) \
STD2_CONST("SDLK_u", INT, SDLK_u) \
STD2_CONST("SDLK_v", INT, SDLK_v) \
STD2_CONST("SDLK_w", INT, SDLK_w) \
STD2_CONST("SDLK_x", INT, SDLK_x) \
STD2_CONST("SDLK_y", INT, SDLK_y) \
STD2_CONST("SDLK_z", INT, SDLK_z) \
STD2_CONST("SDLK_DELETE", INT, SDLK_DELETE) \
STD2_CONST("SDLK_WORLD_0", INT, SDLK_WORLD_0) \
STD2_CONST("SDLK_WORLD_1", INT, SDLK_WORLD_1) \
STD2_CONST("SDLK_WORLD_2", INT, SDLK_WORLD_2) \
STD2_CONST("SDLK_WORLD_3", INT, SDLK_WORLD_3) \
STD2_CONST("SDLK_WORLD_4", INT, SDLK_WORLD_4) \
STD2_CONST("SDLK_WORLD_5", INT, SDLK_WORLD_5) \
STD2_CONST("SDLK_WORLD_6", INT, SDLK_WORLD_6) \
STD2_CONST("SDLK_WORLD_7", INT, SDLK_WORLD_7) \
STD2_CONST("SDLK_WORLD_8", INT, SDLK_WORLD_8) \
STD2_CONST("SDLK_WORLD_9", INT, SDLK_WORLD_9) \
STD2_CONST("SDLK_WORLD_10", INT, SDLK_WORLD_10) \
STD2_CONST("SDLK_WORLD_11", INT, SDLK_WORLD_11) \
STD2_CONST("SDLK_WORLD_12", INT, SDLK_WORLD_12) \
STD2_CONST("SDLK_WORLD_13", INT, SDLK_WORLD_13) \
STD2_CONST("SDLK_WORLD_14", INT, SDLK_WORLD_14) \
STD2_CONST("SDLK_WORLD_15", INT, SDLK_WORLD_15) \
STD2_CONST("SDLK_WORLD_16", INT, SDLK_WORLD_16) \
STD2_CONST("SDLK_WORLD_17", INT, SDLK_WORLD_17) \
STD2_CONST("SDLK_WORLD_18", INT, SDLK_WORLD_18) \
STD2_CONST("SDLK_WORLD_19", INT, SDLK_WORLD_19) \
STD2_CONST("SDLK_WORLD_20", INT, SDLK_WORLD_20) \
STD2_CONST("SDLK_WORLD_21", INT, SDLK_WORLD_21) \
STD2_CONST("SDLK_WORLD_22", INT, SDLK_WORLD_22) \
STD2_CONST("SDLK_WORLD_23", INT, SDLK_WORLD_23) \
STD2_CONST("SDLK_WORLD_24", INT, SDLK_WORLD_24) \
STD2_CONST("SDLK_WORLD_25", INT, SDLK_WORLD_25) \
STD2_CONST("SDLK_WORLD_26", INT, SDLK_WORLD_26) \
STD2_CONST("SDLK_WORLD_27", INT, SDLK_WORLD_27) \
STD2_CONST("SDLK_WORLD_28", INT, SDLK_WORLD_28) \
STD2_CONST("SDLK_WORLD_29", INT, SDLK_WORLD_29) \
STD2_CONST("SDLK_WORLD_30", INT, SDLK_WORLD_30) \
STD2_CONST("SDLK_WORLD_31", INT, SDLK_WORLD_31) \
STD2_CONST("SDLK_WORLD_32", INT, SDLK_WORLD_32) \
STD2_CONST("SDLK_WORLD_33", INT, SDLK_WORLD_33) \
STD2_CONST("SDLK_WORLD_34", INT, SDLK_WORLD_34) \
STD2_CONST("SDLK_WORLD_35", INT, SDLK_WORLD_35) \
STD2_CONST("SDLK_WORLD_36", INT, SDLK_WORLD_36) \
STD2_CONST("SDLK_WORLD_37", INT, SDLK_WORLD_37) \
STD2_CONST("SDLK_WORLD_38", INT, SDLK_WORLD_38) \
STD2_CONST("SDLK_WORLD_39", INT, SDLK_WORLD_39) \
STD2_CONST("SDLK_WORLD_40", INT, SDLK_WORLD_40) \
STD2_CONST("SDLK_WORLD_41", INT, SDLK_WORLD_41) \
STD2_CONST("SDLK_WORLD_42", INT, SDLK_WORLD_42) \
STD2_CONST("SDLK_WORLD_43", INT, SDLK_WORLD_43) \
STD2_CONST("SDLK_WORLD_44", INT, SDLK_WORLD_44) \
STD2_CONST("SDLK_WORLD_45", INT, SDLK_WORLD_45) \
STD2_CONST("SDLK_WORLD_46", INT, SDLK_WORLD_46) \
STD2_CONST("SDLK_WORLD_47", INT, SDLK_WORLD_47) \
STD2_CONST("SDLK_WORLD_48", INT, SDLK_WORLD_48) \
STD2_CONST("SDLK_WORLD_49", INT, SDLK_WORLD_49) \
STD2_CONST("SDLK_WORLD_50", INT, SDLK_WORLD_50) \
STD2_CONST("SDLK_WORLD_51", INT, SDLK_WORLD_51) \
STD2_CONST("SDLK_WORLD_52", INT, SDLK_WORLD_52) \
STD2_CONST("SDLK_WORLD_53", INT, SDLK_WORLD_53) \
STD2_CONST("SDLK_WORLD_54", INT, SDLK_WORLD_54) \
STD2_CONST("SDLK_WORLD_55", INT, SDLK_WORLD_55) \
STD2_CONST("SDLK_WORLD_56", INT, SDLK_WORLD_56) \
STD2_CONST("SDLK_WORLD_57", INT, SDLK_WORLD_57) \
STD2_CONST("SDLK_WORLD_58", INT, SDLK_WORLD_58) \
STD2_CONST("SDLK_WORLD_59", INT, SDLK_WORLD_59) \
STD2_CONST("SDLK_WORLD_60", INT, SDLK_WORLD_60) \
STD2_CONST("SDLK_WORLD_61", INT, SDLK_WORLD_61) \
STD2_CONST("SDLK_WORLD_62", INT, SDLK_WORLD_62) \
STD2_CONST("SDLK_WORLD_63", INT, SDLK_WORLD_63) \
STD2_CONST("SDLK_WORLD_64", INT, SDLK_WORLD_64) \
STD2_CONST("SDLK_WORLD_65", INT, SDLK_WORLD_65) \
STD2_CONST("SDLK_WORLD_66", INT, SDLK_WORLD_66) \
STD2_CONST("SDLK_WORLD_67", INT, SDLK_WORLD_67) \
STD2_CONST("SDLK_WORLD_68", INT, SDLK_WORLD_68) \
STD2_CONST("SDLK_WORLD_69", INT, SDLK_WORLD_69) \
STD2_CONST("SDLK_WORLD_70", INT, SDLK_WORLD_70) \
STD2_CONST("SDLK_WORLD_71", INT, SDLK_WORLD_71) \
STD2_CONST("SDLK_WORLD_72", INT, SDLK_WORLD_72) \
STD2_CONST("SDLK_WORLD_73", INT, SDLK_WORLD_73) \
STD2_CONST("SDLK_WORLD_74", INT, SDLK_WORLD_74) \
STD2_CONST("SDLK_WORLD_75", INT, SDLK_WORLD_75) \
STD2_CONST("SDLK_WORLD_76", INT, SDLK_WORLD_76) \
STD2_CONST("SDLK_WORLD_77", INT, SDLK_WORLD_77) \
STD2_CONST("SDLK_WORLD_78", INT, SDLK_WORLD_78) \
STD2_CONST("SDLK_WORLD_79", INT, SDLK_WORLD_79) \
STD2_CONST("SDLK_WORLD_80", INT, SDLK_WORLD_80) \
STD2_CONST("SDLK_WORLD_81", INT, SDLK_WORLD_81) \
STD2_CONST("SDLK_WORLD_82", INT, SDLK_WORLD_82) \
STD2_CONST("SDLK_WORLD_83", INT, SDLK_WORLD_83) \
STD2_CONST("SDLK_WORLD_84", INT, SDLK_WORLD_84) \
STD2_CONST("SDLK_WORLD_85", INT, SDLK_WORLD_85) \
STD2_CONST("SDLK_WORLD_86", INT, SDLK_WORLD_86) \
STD2_CONST("SDLK_WORLD_87", INT, SDLK_WORLD_87) \
STD2_CONST("SDLK_WORLD_88", INT, SDLK_WORLD_88) \
STD2_CONST("SDLK_WORLD_89", INT, SDLK_WORLD_89) \
STD2_CONST("SDLK_WORLD_90", INT, SDLK_WORLD_90) \
STD2_CONST("SDLK_WORLD_91", INT, SDLK_WORLD_91) \
STD2_CONST("SDLK_WORLD_92", INT, SDLK_WORLD_92) \
STD2_CONST("SDLK_WORLD_93", INT, SDLK_WORLD_93) \
STD2_CONST("SDLK_WORLD_94", INT, SDLK_WORLD_94) \
STD2_CONST("SDLK_WORLD_95", INT, SDLK_WORLD_95) \
STD2_CONST("SDLK_KP0", INT, SDLK_KP0) \
STD2_CONST("SDLK_KP1", INT, SDLK_KP1) \
STD2_CONST("SDLK_KP2", INT, SDLK_KP2) \
STD2_CONST("SDLK_KP3", INT, SDLK_KP3) \
STD2_CONST("SDLK_KP4", INT, SDLK_KP4) \
STD2_CONST("SDLK_KP5", INT, SDLK_KP5) \
STD2_CONST("SDLK_KP6", INT, SDLK_KP6) \
STD2_CONST("SDLK_KP7", INT, SDLK_KP7) \
STD2_CONST("SDLK_KP8", INT, SDLK_KP8) \
STD2_CONST("SDLK_KP9", INT, SDLK_KP9) \
STD2_CONST("SDLK_KP_PERIOD", INT, SDLK_KP_PERIOD) \
STD2_CONST("SDLK_KP_DIVIDE", INT, SDLK_KP_DIVIDE) \
STD2_CONST("SDLK_KP_MULTIPLY", INT, SDLK_KP_MULTIPLY) \
STD2_CONST("SDLK_KP_MINUS", INT, SDLK_KP_MINUS) \
STD2_CONST("SDLK_KP_PLUS", INT, SDLK_KP_PLUS) \
STD2_CONST("SDLK_KP_ENTER", INT, SDLK_KP_ENTER) \
STD2_CONST("SDLK_KP_EQUALS", INT, SDLK_KP_EQUALS) \
STD2_CONST("SDLK_UP", INT, SDLK_UP) \
STD2_CONST("SDLK_DOWN", INT, SDLK_DOWN) \
STD2_CONST("SDLK_RIGHT", INT, SDLK_RIGHT) \
STD2_CONST("SDLK_LEFT", INT, SDLK_LEFT) \
STD2_CONST("SDLK_INSERT", INT, SDLK_INSERT) \
STD2_CONST("SDLK_HOME", INT, SDLK_HOME) \
STD2_CONST("SDLK_END", INT, SDLK_END) \
STD2_CONST("SDLK_PAGEUP", INT, SDLK_PAGEUP) \
STD2_CONST("SDLK_PAGEDOWN", INT, SDLK_PAGEDOWN) \
STD2_CONST("SDLK_F1", INT, SDLK_F1) \
STD2_CONST("SDLK_F2", INT, SDLK_F2) \
STD2_CONST("SDLK_F3", INT, SDLK_F3) \
STD2_CONST("SDLK_F4", INT, SDLK_F4) \
STD2_CONST("SDLK_F5", INT, SDLK_F5) \
STD2_CONST("SDLK_F6", INT, SDLK_F6) \
STD2_CONST("SDLK_F7", INT, SDLK_F7) \
STD2_CONST("SDLK_F8", INT, SDLK_F8) \
STD2_CONST("SDLK_F9", INT, SDLK_F9) \
STD2_CONST("SDLK_F10", INT, SDLK_F10) \
STD2_CONST("SDLK_F11", INT, SDLK_F11) \
STD2_CONST("SDLK_F12", INT, SDLK_F12) \
STD2_CONST("SDLK_F13", INT, SDLK_F13) \
STD2_CONST("SDLK_F14", INT, SDLK_F14) \
STD2_CONST("SDLK_F15", INT, SDLK_F15) \
STD2_CONST("SDLK_NUMLOCK", INT, SDLK_NUMLOCK) \
STD2_CONST("SDLK_CAPSLOCK", INT, SDLK_CAPSLOCK) \
STD2_CONST("SDLK_SCROLLOCK", INT, SDLK_SCROLLOCK) \
STD2_CONST("SDLK_RSHIFT", INT, SDLK_RSHIFT) \
STD2_CONST("SDLK_LSHIFT", INT, SDLK_LSHIFT) \
STD2_CONST("SDLK_RCTRL", INT, SDLK_RCTRL) \
STD2_CONST("SDLK_LCTRL", INT, SDLK_LCTRL) \
STD2_CONST("SDLK_RALT", INT, SDLK_RALT) \
STD2_CONST("SDLK_LALT", INT, SDLK_LALT) \
STD2_CONST("SDLK_RMETA", INT, SDLK_RMETA) \
STD2_CONST("SDLK_LMETA", INT, SDLK_LMETA) \
STD2_CONST("SDLK_LSUPER", INT, SDLK_LSUPER) \
STD2_CONST("SDLK_RSUPER", INT, SDLK_RSUPER) \
STD2_CONST("SDLK_MODE", INT, SDLK_MODE) \
STD2_CONST("SDLK_COMPOSE", INT, SDLK_COMPOSE) \
STD2_CONST("SDLK_HELP", INT, SDLK_HELP) \
STD2_CONST("SDLK_PRINT", INT, SDLK_PRINT) \
STD2_CONST("SDLK_SYSREQ", INT, SDLK_SYSREQ) \
STD2_CONST("SDLK_BREAK", INT, SDLK_BREAK) \
STD2_CONST("SDLK_MENU", INT, SDLK_MENU) \
STD2_CONST("SDLK_POWER", INT, SDLK_POWER) \
STD2_CONST("SDLK_EURO", INT, SDLK_EURO) \
STD2_CONST("SDLK_UNDO", INT, SDLK_UNDO) \
STD2_CONST("SDLK_LAST", INT, SDLK_LAST) \
STD2_CONST("ADDEVENT", INT, SDL_ADDEVENT) \
STD2_CONST("PEEKEVENT", INT, SDL_PEEKEVENT) \
STD2_CONST("GETEVENT", INT, SDL_GETEVENT) \
STD2_CONST("GRAB_QUERY", INT, SDL_GRAB_QUERY) \
STD2_CONST("GRAB_OFF", INT, SDL_GRAB_OFF) \
STD2_CONST("GRAB_ON", INT, SDL_GRAB_ON) \
STD2_CONST("GRAB_FULLSCREEN", INT, SDL_GRAB_FULLSCREEN) \
STD2_CONST("DUMMY_ENUM_VALUE", INT, DUMMY_ENUM_VALUE) \
STD2_CONST("FALSE", INT, SDL_FALSE) \
STD2_CONST("TRUE", INT, SDL_TRUE) \
STD2_CONST("NOEVENT", INT, SDL_NOEVENT) \
STD2_CONST("ACTIVEEVENT", INT, SDL_ACTIVEEVENT) \
STD2_CONST("KEYDOWN", INT, SDL_KEYDOWN) \
STD2_CONST("KEYUP", INT, SDL_KEYUP) \
STD2_CONST("MOUSEMOTION", INT, SDL_MOUSEMOTION) \
STD2_CONST("MOUSEBUTTONDOWN", INT, SDL_MOUSEBUTTONDOWN) \
STD2_CONST("MOUSEBUTTONUP", INT, SDL_MOUSEBUTTONUP) \
STD2_CONST("JOYAXISMOTION", INT, SDL_JOYAXISMOTION) \
STD2_CONST("JOYBALLMOTION", INT, SDL_JOYBALLMOTION) \
STD2_CONST("JOYHATMOTION", INT, SDL_JOYHATMOTION) \
STD2_CONST("JOYBUTTONDOWN", INT, SDL_JOYBUTTONDOWN) \
STD2_CONST("JOYBUTTONUP", INT, SDL_JOYBUTTONUP) \
STD2_CONST("QUIT", INT, SDL_QUIT) \
STD2_CONST("SYSWMEVENT", INT, SDL_SYSWMEVENT) \
STD2_CONST("EVENT_RESERVEDA", INT, SDL_EVENT_RESERVEDA) \
STD2_CONST("EVENT_RESERVEDB", INT, SDL_EVENT_RESERVEDB) \
STD2_CONST("VIDEORESIZE", INT, SDL_VIDEORESIZE) \
STD2_CONST("VIDEOEXPOSE", INT, SDL_VIDEOEXPOSE) \
STD2_CONST("EVENT_RESERVED2", INT, SDL_EVENT_RESERVED2) \
STD2_CONST("EVENT_RESERVED3", INT, SDL_EVENT_RESERVED3) \
STD2_CONST("EVENT_RESERVED4", INT, SDL_EVENT_RESERVED4) \
STD2_CONST("EVENT_RESERVED5", INT, SDL_EVENT_RESERVED5) \
STD2_CONST("EVENT_RESERVED6", INT, SDL_EVENT_RESERVED6) \
STD2_CONST("EVENT_RESERVED7", INT, SDL_EVENT_RESERVED7) \
STD2_CONST("USEREVENT", INT, SDL_USEREVENT) \
STD2_CONST("NUMEVENTS", INT, SDL_NUMEVENTS) \

#define ENUM_FUNCS \
STD2_FUNC("audiostatus_to_string", "cs", "i", audiostatus_to_string) \
STD2_FUNC("EventMasks_to_string", "cs", "i", EventMasks_to_string) \
STD2_FUNC("GLattr_to_string", "cs", "i", GLattr_to_string) \
STD2_FUNC("CDstatus_to_string", "cs", "i", CDstatus_to_string) \
STD2_FUNC("SDLMod_to_string", "cs", "i", SDLMod_to_string) \
STD2_FUNC("errorcode_to_string", "cs", "i", errorcode_to_string) \
STD2_FUNC("SDLKey_to_string", "cs", "i", SDLKey_to_string) \
STD2_FUNC("eventaction_to_string", "cs", "i", eventaction_to_string) \
STD2_FUNC("GrabMode_to_string", "cs", "i", GrabMode_to_string) \
STD2_FUNC("DUMMY_ENUM_to_string", "cs", "i", DUMMY_ENUM_to_string) \
STD2_FUNC("bool_to_string", "cs", "i", bool_to_string) \
STD2_FUNC("Events_to_string", "cs", "i", Events_to_string) \

