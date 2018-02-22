#include "Skit2D.h"

void skit2d_init(Skit2D *engine, const char* title, int x, int y, int width, int height, bool fullScreen)
{
    if (SDL_Init(SDL_INIT_VIDEO) == 0) {
        int flags = 0;
        if (fullScreen)
            flags = SDL_WINDOW_FULLSCREEN;

        printf("* SDL Initialized OK\n");
        engine->window = SDL_CreateWindow(title, x, y, height, width, flags);
        if (engine->window != NULL) {
            printf("* Window successfully created\n");
        }

        engine->renderer = SDL_CreateRenderer(engine->window, -1, 0);
        if (engine->renderer != NULL) {
            SDL_SetRenderDrawColor(engine->renderer, 0, 0, 0, 255);
            printf("* Renderer created");
        }

        engine->running = true;
        printf("Going to events\n");
    } else {
        printf("! There was a problem initializing SDL\n");
        engine->running = false;
    }
}

void skit2d_handle_events(Skit2D *engine)
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type) {
        case SDL_QUIT:
            engine->running = false;
            break;

        default:
            break;
    }
}

void skit2d_update(Skit2D *engine)
{
    //engine->count = engine->count + 1;
    //printf("%d\n", engine->count);
}

void skit2d_render(Skit2D *engine)
{
    SDL_RenderClear(engine->renderer);
    SDL_RenderPresent(engine->renderer);
}

void skit2d_destroy(Skit2D *engine)
{
    SDL_DestroyWindow(engine->window);
    SDL_DestroyRenderer(engine->renderer);
    SDL_Quit();
    printf("* Destroyed SDL objects after quit\n");
}