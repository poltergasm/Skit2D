#include "skit2d.h"
#include "textures.h"

SDL_Texture *skit2d_texture(Skit2D *engine, char *path)
{
    SDL_Texture *tex = IMG_LoadTexture(engine->renderer, path);

    return tex;
}