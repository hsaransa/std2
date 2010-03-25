#include "std2priv.h"
#include "SDL.h"
#include <assert.h>
#include "sdl_enums.h"

static SDL_Surface* screen_surface;

static void free_Surface(void* ptr)
{
    if (ptr != screen_surface)
        SDL_FreeSurface(ptr);
}

static void free_Rect(void* ptr)
{
    free(ptr);
}

static void free_Event(void* ptr)
{
    free(ptr);
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
    SDL_WM_SetCaption(args[0], args[1]);
}

static void wrap_SDL_PollEvent(void* ret, void* const* args)
{
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
    *(void**)ret = malloc(sizeof(SDL_Rect));
    memset(*(void**)ret, 0, sizeof(SDL_Rect));
}

static void Rect_set(void* ret, void* const* args)
{
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

STD2_BEGIN_CLASS_LIST(sdl)
    STD2_CLASS("Surface", free_Surface)
    STD2_CLASS("Rect",    free_Rect)
    STD2_CLASS("Event",   free_Event)
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
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(sdl)
    STD2_FUNC("Init",               "i",       "i",              wrap_SDL_Init)
    STD2_FUNC("SetVideoMode",       "Surface", "i i i i",        wrap_SDL_SetVideoMode)
    STD2_FUNC("Flip",               "i",       "Surface",        wrap_SDL_Flip)
    STD2_FUNC("FillRect",           "i",       "Surface Rect i", wrap_SDL_FillRect)
    STD2_FUNC("PollEvent",          "Event",   "",               wrap_SDL_PollEvent)
    STD2_FUNC("WM_SetCaption",      "",        "cs cs",          wrap_SDL_WM_SetCaption)

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

    ENUM_FUNCS
STD2_END_FUNC_LIST()

STD2_MODULE(sdl)

