#ifndef Skit2D_h
#define Skit2D_h

#include "SDL2/SDL.h"
#include "SDL2/SDL_Image.h"
#include <stdio.h>
#include <stdbool.h>

#define array_length(x)  (sizeof(x) / sizeof((x)[0]))

SDL_Window *skit2d_sdl_window;
SDL_Renderer *skit2d_sdl_renderer;
//bool skit2d_running = false;

typedef struct _sk2d {
    bool running;
    int count;
    SDL_Window *window;
    SDL_Renderer *renderer;
} Skit2D;

Skit2D engine;

void skit2d_init(Skit2D *engine, const char* title, int x, int y, int width, int height, bool fullScreen);
void skit2d_handle_events(Skit2D *engine);
void skit2d_update(Skit2D *engine);
void skit2d_render(Skit2D *engine);
void skit2d_destroy(Skit2D *engine);

// callbacks
void skit2d_load(Skit2D *engine);
void skit2d_draw(Skit2D *engine);

#endif
