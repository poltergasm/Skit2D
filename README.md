# Skit2D Game Engine

This is just an experiment game engine written in plain C. Why? I don't really know.

## Quick and Dirty setup

1. Download SDL2 from libsdl.org (mingw development library).
2. Unpack the tarball somewhere outside your project folder.
3. Copy the contents of `lib` to your compilers `lib` folder.
4. Copy the contents of `include` to your compilers `include` folder.
5. Copy the `bin/SDL.dll` file to your compilers `bin` folder.
6. Add `SDL.dll` to your project folder.

Do the same for SDL_Image

## Compiling

Once you've done the steps above, compiling is pretty simple

```bash
gcc -o game main.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_Image
```