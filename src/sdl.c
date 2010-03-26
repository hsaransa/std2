#include "std2priv.h"
#include "SDL.h"
#include <assert.h>
#include "sdl_enums.h"
#include "sdl_events.h"

static SDL_Surface* screen_surface;

static void free_Surface(void* ptr)
{
    if (ptr != screen_surface)
        SDL_FreeSurface(ptr);
}

static void wrap_SDL_Init(void* ret, void* const* args)
{
    *(int*)ret = SDL_Init(*(int*)args[0]);
}

static void wrap_SDL_SetVideoMode(void* ret, void* const* args)
{
    SDL_Surface* s = SDL_SetVideoMode(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
    if (s) {
        screen_surface = s;
        *(SDL_Surface**)ret = s;
    }
}

static void wrap_SDL_Flip(void* ret, void* const* args)
{
    *(int*)ret = SDL_Flip(args[0]);
}

static void wrap_SDL_FillRect(void* ret, void* const* args)
{
    SDL_LockSurface(args[0]);
    *(int*)ret = SDL_FillRect(args[0], args[1], *(int*)args[2]);
    SDL_UnlockSurface(args[0]);
}

static void wrap_SDL_WM_SetCaption(void* ret, void* const* args)
{
    (void)ret;
    SDL_WM_SetCaption(args[0], args[1]);
}

static void wrap_SDL_PollEvent(void* ret, void* const* args)
{
    (void)args;

    SDL_Event ev;
    if (!SDL_PollEvent(&ev))
    {
        *(void**)ret = 0;
        return;
    }

    SDL_Event* ev2 = malloc(sizeof(SDL_Event));
    memcpy(ev2, &ev, sizeof(ev));

    *(void**)ret = ev2;
}

static void wrap_SDL_BlitSurface(void* ret, void* const* args)
{
    *(int*)ret = SDL_BlitSurface(args[0], args[1], args[2], args[3]);
}

static void wrap_SDL_GL_SwapBuffers(void* ret, void* const* args)
{
    (void)ret; (void)args;
    SDL_GL_SwapBuffers();
}

//
// Getters and setters
//

static void Surface_set_pixels(void* ret, void* const* args)
{
    SDL_Surface* s = args[0];
    if (SDL_LockSurface(s) != 0)
    {
        *(int*)ret = 0;
        return;
    }

    int start = *(int*)args[1];
    char* buf = args[2];
    int n = *(int*)args[3];

    if (start < 0 || start+n > s->pitch*s->format->BytesPerPixel)
    {
        *(int*)ret = 0;
        return;
    }

    memcpy(s->pixels + start, buf, n);

    SDL_UnlockSurface(s);
}

static void new_Rect(void* ret, void* const* args)
{
    (void)args;
    *(void**)ret = malloc(sizeof(SDL_Rect));
    memset(*(void**)ret, 0, sizeof(SDL_Rect));
}

static void Rect_set(void* ret, void* const* args)
{
    (void)ret;
    ((SDL_Rect*)args[0])->x = *(int*)args[1];
    ((SDL_Rect*)args[0])->y = *(int*)args[2];
    ((SDL_Rect*)args[0])->w = *(int*)args[3];
    ((SDL_Rect*)args[0])->h = *(int*)args[4];
}

STD2_STRUCT_INT_GETTER(Rect, SDL_Rect, x)
STD2_STRUCT_INT_GETTER(Rect, SDL_Rect, y)
STD2_STRUCT_INT_GETTER(Rect, SDL_Rect, w)
STD2_STRUCT_INT_GETTER(Rect, SDL_Rect, h)

STD2_STRUCT_INT_GETTER(Event, SDL_Event, type)

static SDL_Event* copy_event(SDL_Event* ev)
{
    SDL_Event* ev2 = malloc(sizeof(SDL_Event));
    memcpy(ev2, ev, sizeof(SDL_Event));
    return ev2;
}

#define PLOP3(n, a0, a1, a2) \
static void Event_get_##n(void* ret, void* const* args) { \
    SDL_Event* ev = args[0]; \
    if (ev->type == a0 || ev->type == a1 || ev->type == a2) \
        *(void**)ret = copy_event(ev); \
    else \
        *(void**)ret = 0; \
}
#define PLOP2(n, a0, a1) PLOP3(n, a0, a1, a1)
#define PLOP1(n, a0) PLOP3(n, a0, a0, a0)

PLOP1(active, SDL_ACTIVEEVENT)
PLOP2(key,    SDL_KEYDOWN, SDL_KEYUP)
PLOP1(motion, SDL_MOUSEMOTION)
PLOP2(button, SDL_MOUSEBUTTONDOWN, SDL_MOUSEBUTTONUP)
PLOP1(jaxis,  SDL_JOYAXISMOTION)
PLOP1(jball,  SDL_JOYBALLMOTION)
PLOP1(jhat,   SDL_JOYHATMOTION)
PLOP2(jbutton,SDL_JOYBUTTONDOWN, SDL_JOYBUTTONUP)
PLOP1(resize, SDL_VIDEORESIZE)
PLOP1(expose, SDL_VIDEOEXPOSE)
PLOP1(quit,   SDL_QUIT)
PLOP1(user,   SDL_USEREVENT) // TODO: others
PLOP1(syswm,  SDL_SYSWMEVENT)

static void KeyboardEvent_get_keysym(void* ret, void* const* args)
{
    SDL_KeyboardEvent* ev = args[0];
    void* p = malloc(sizeof(SDL_keysym));
    memcpy(p, &ev->keysym, sizeof(SDL_keysym));
    *(void**)ret = p;
}

STD2_BEGIN_CLASS_LIST(sdl)
    STD2_CLASS("Surface", free_Surface)
    STD2_CLASS("Rect",    free)
    STD2_CLASS("Event",   free)
    STD2_CLASS("ResizeEvent", free)
    STD2_CLASS("UserEvent", free)
    STD2_CLASS("KeyboardEvent", free)
    STD2_CLASS("JoyAxisEvent", free)
    STD2_CLASS("SysWMEvent", free)
    STD2_CLASS("MouseButtonEvent", free)
    STD2_CLASS("MouseMotionEvent", free)
    STD2_CLASS("ActiveEvent", free)
    STD2_CLASS("JoyBallEvent", free)
    STD2_CLASS("JoyButtonEvent", free)
    STD2_CLASS("JoyHatEvent", free)
    STD2_CLASS("ExposeEvent", free)
    STD2_CLASS("QuitEvent", free)
    STD2_CLASS("MotionEvent", free)
    STD2_CLASS("keysym", free)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(sdl)
    // Init flags.
    STD2_CONST("INIT_TIMER", INT, SDL_INIT_TIMER)
    STD2_CONST("INIT_AUDIO", INT, SDL_INIT_AUDIO)
    STD2_CONST("INIT_VIDEO", INT, SDL_INIT_VIDEO)
    STD2_CONST("INIT_CDROM", INT, SDL_INIT_CDROM)
    STD2_CONST("INIT_JOYSTICK", INT, SDL_INIT_JOYSTICK)
    STD2_CONST("INIT_NOPARACHUTE", INT, SDL_INIT_NOPARACHUTE)
    STD2_CONST("INIT_EVENTTHREAD", INT, SDL_INIT_EVENTTHREAD)
    STD2_CONST("INIT_EVERYTHING", INT, SDL_INIT_EVERYTHING)
    // ...
    STD2_CONST("SWSURFACE", INT, SDL_SWSURFACE)
    STD2_CONST("HWSURFACE", INT, SDL_HWSURFACE)
    STD2_CONST("ASYNCBLIT", INT, SDL_ASYNCBLIT)
    STD2_CONST("ANYFORMAT", INT, SDL_ANYFORMAT)
    STD2_CONST("HWPALETTE", INT, SDL_HWPALETTE)
    STD2_CONST("DOUBLEBUF", INT, SDL_DOUBLEBUF)
    STD2_CONST("FULLSCREEN", INT, SDL_FULLSCREEN)
    STD2_CONST("OPENGL", INT, SDL_OPENGL)
    STD2_CONST("OPENGLBLIT", INT, SDL_OPENGLBLIT)
    STD2_CONST("RESIZABLE", INT, SDL_RESIZABLE)
    STD2_CONST("NOFRAME", INT, SDL_NOFRAME)

    ENUM_CONSTS
    EVENTS_CONSTS
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(sdl)
    STD2_FUNC("Init",               "i",       "i",              wrap_SDL_Init)
    STD2_FUNC("SetVideoMode",       "Surface", "i i i i",        wrap_SDL_SetVideoMode)
    STD2_FUNC("Flip",               "i",       "Surface",        wrap_SDL_Flip)
    STD2_FUNC("FillRect",           "i",       "Surface Rect i", wrap_SDL_FillRect)
    STD2_FUNC("PollEvent",          "Event",   "",               wrap_SDL_PollEvent)
    STD2_FUNC("WM_SetCaption",      "",        "cs cs",          wrap_SDL_WM_SetCaption)
    STD2_FUNC("BlitSurface",        "i", "Surface Rect Surface Rect", wrap_SDL_BlitSurface)
    STD2_FUNC("GL_SwapBuffers",     "", "", wrap_SDL_GL_SwapBuffers)

    // Rect manipulation
    STD2_FUNC("new_Rect",           "Rect",    "",               new_Rect)
    STD2_FUNC("Rect_set",           "",        "Rect i i i i",   Rect_set)
    STD2_FUNC("Rect_get_x",         "i",       "Rect",           Rect_get_x)
    STD2_FUNC("Rect_get_y",         "i",       "Rect",           Rect_get_y)
    STD2_FUNC("Rect_get_w",         "i",       "Rect",           Rect_get_w)
    STD2_FUNC("Rect_get_h",         "i",       "Rect",           Rect_get_h)

    // Surface manipulation
    STD2_FUNC("Surface_set_pixels", "i",       "Surface i buf",  Surface_set_pixels)

    // Event manipulation
    STD2_FUNC("Event_get_type",     "i",       "Event",          Event_get_type)

    STD2_FUNC("Event_get_active", "ActiveEvent",   "Event", Event_get_active)
    STD2_FUNC("Event_get_key",    "KeyboardEvent", "Event", Event_get_key)
    STD2_FUNC("Event_get_motion", "MotionEvent",   "Event", Event_get_motion)
    STD2_FUNC("Event_get_button", "MouseButtonEvent","Event", Event_get_button)
    STD2_FUNC("Event_get_jaxis",  "JoyAxisEvent",  "Event", Event_get_jaxis)
    STD2_FUNC("Event_get_jball",  "JoyBallEvent",  "Event", Event_get_jball)
    STD2_FUNC("Event_get_jhat",   "JoyHatEvent",   "Event", Event_get_jhat)
    STD2_FUNC("Event_get_jbutton","JoyButtonEvent","Event", Event_get_jbutton)
    STD2_FUNC("Event_get_resize", "ResizeEvent",   "Event", Event_get_resize)
    STD2_FUNC("Event_get_expose", "ExposeEvent",   "Event", Event_get_expose)
    STD2_FUNC("Event_get_quit",   "QuitEvent",     "Event", Event_get_quit)
    STD2_FUNC("Event_get_user",   "UserEvent",     "Event", Event_get_user)
    STD2_FUNC("Event_get_syswm",  "SysWMEvent",    "Event", Event_get_syswm)
    STD2_FUNC("KeyboardEvent_get_keysym", "keysym", "KeyboardEvent", KeyboardEvent_get_keysym)
    ENUM_FUNCS
    EVENTS_FUNCS
STD2_END_FUNC_LIST()

STD2_MODULE(sdl, 0)
