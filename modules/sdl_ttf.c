#include <std2priv.h>
#include <SDL_ttf.h>

static void free_font(void* ptr)
{
    TTF_CloseFont(ptr);
}

static void wrap_TTF_OpenFont(void* ret, void* const* args)
{
    if (!TTF_WasInit())
        TTF_Init();
    *(void**)ret = TTF_OpenFont(args[0], *(int*)args[1]);
}

static void wrap_TTF_RenderText_Solid(void* ret, void* const* args)
{
    SDL_Color c;
    unsigned int cc = *(int*)args[2];

    c.r = (cc >> 16) & 255;
    c.g = (cc >> 8) & 255;
    c.b = cc & 255;
    *(SDL_Surface**)ret = TTF_RenderText_Solid(args[0], args[1], c);
}

STD2_BEGIN_CLASS_LIST(sdl_ttf)
    STD2_CLASS("Font", free_font)
STD2_END_CLASS_LIST()

STD2_BEGIN_CONST_LIST(sdl_ttf)
STD2_END_CONST_LIST()

STD2_BEGIN_FUNC_LIST(sdl_ttf)
    STD2_FUNC("OpenFont",        "Font",        "cs i", wrap_TTF_OpenFont)
    STD2_FUNC("RenderText_Solid","sdl.Surface", "Font cs i", wrap_TTF_RenderText_Solid)
STD2_END_FUNC_LIST()

STD2_MODULE(sdl_ttf, 0)
