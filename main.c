#include "Skit2D/Skit2D.c"

const int xpos = SDL_WINDOWPOS_CENTERED;
const int ypos = SDL_WINDOWPOS_CENTERED;
const int height = 800;
const int width  = 600;

Skit2D engine;

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