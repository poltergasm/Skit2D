#include "skit2d/skit2d.h"
#include "skit2d/textures.h"

const int xpos = SDL_WINDOWPOS_CENTERED;
const int ypos = SDL_WINDOWPOS_CENTERED;
const unsigned int width  = 800;
const unsigned int height = 600;

texture_t mario;

void skit2d_load(Skit2D *engine)
{
    printf("Engine loaded!\n");
    mario = skit2d_texture(engine, "assets/gfx/mario.jpg");
    mario.rect.x = width/3;
    mario.rect.y = height/3;
    mario.rect.w = mario.width*2;
    mario.rect.h = mario.height*2;
}

void skit2d_draw(Skit2D *engine)
{
    skit2d_graphics_draw(engine, &mario);
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