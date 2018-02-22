#ifndef Skit2D_h
#define Skit2D_h

#include "SDL2/SDL.h"
#include <stdio.h>
#include <stdbool.h>

SDL_Window *skit2d_sdl_window;
SDL_Renderer *skit2d_sdl_renderer;
bool skit2d_running = false;

typedef struct _sk2d {
    bool running;
    int count;
    SDL_Window *window;
    SDL_Renderer *renderer;
} Skit2D;

void skit2d_init(Skit2D *engine, const char* title, int x, int y, int width, int height, bool fullScreen);
void skit2d_handle_events(Skit2D *engine);
void skit2d_update(Skit2D *engine);
void skit2d_render(Skit2D *engine);
void skit2d_destroy(Skit2D *engine);

#endif
