#include "skit2d/skit2d.h"
#include "skit2d/textures.h"

const int xpos = SDL_WINDOWPOS_CENTERED;
const int ypos = SDL_WINDOWPOS_CENTERED;
const unsigned int width  = 800;
const unsigned int height = 600;

SDL_Texture *mario;
SDL_Rect texr;
void skit2d_load(Skit2D *engine)
{
    printf("Engine loaded!\n");
    mario = skit2d_texture(engine, "assets/gfx/mario.jpg");
    int w,h;
    SDL_QueryTexture(mario, NULL, NULL, &w, &h);
    texr.x = width/3; texr.y = height/3; texr.w = w*2; texr.h = h*2;
}

void skit2d_draw(Skit2D *engine)
{
    SDL_RenderCopy(engine->renderer, mario, NULL, &texr);
}

int main(int argv, char** args)
{
    skit2d_init(&engine, "Skit2D Test", xpos, ypos, width, height, false);
    while (engine.running) {
        skit2d_handle_events(&engine);
        skit2d_update(&engine);
        skit2d_render(&engine);
    }

    skit2d_destroy(&engine);

    return 0;
}