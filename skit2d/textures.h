
typedef SDL_Texture Skit2D_Texture;
typedef SDL_Rect Skit2D_Rect;

typedef struct _texture_t {
    SDL_Texture *texture;
    Skit2D_Rect rect;
    int width;
    int height;
} texture_t;

texture_t *textures[3];

texture_t skit2d_texture(Skit2D *engine, char *path);

void textures_destroy(Skit2D *engine);
void skit2d_graphics_draw(Skit2D *engine, texture_t *t);