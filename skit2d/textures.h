
typedef SDL_Texture Skit2D_Texture;
typedef SDL_Rect Skit2D_Rect;

typedef struct _texture_t {
    Skit2D_Texture *tex;
    Skit2D_Rect tex_r;
} texture_t;

SDL_Texture *skit2d_texture(Skit2D *engine, char *path);