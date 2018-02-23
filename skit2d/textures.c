#include "skit2d.h"
#include "textures.h"

texture_t skit2d_texture(Skit2D *engine, char *path)
{
    int width, height;
    SDL_Texture *tex = IMG_LoadTexture(engine->renderer, path);
    SDL_Rect nrect;
    nrect.x = 0;
    nrect.y = 0;
    nrect.w = 0;
    nrect.h = 0;

    SDL_QueryTexture(tex, NULL, NULL, &width, &height);
    texture_t ntex = {
        tex,
        nrect,
        width,
        height
    };

    unsigned int next_idx = array_length(textures) + 1;
    textures[next_idx] = &ntex;
    return ntex;
}

void textures_destroy(Skit2D *engine)
{
    unsigned int alen = array_length(textures);
    unsigned int i;
    for (i = 0; i < alen; i++) {
        if (textures[i] != NULL)
            SDL_DestroyTexture(textures[i]->texture);
    }
}

void skit2d_graphics_draw(Skit2D *engine, texture_t *t)
{
    SDL_RenderCopy(engine->renderer, t->texture, NULL, &t->rect);
}