#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    int size = 20;
    int triangleHeight = 17;
    int numbTriangles = 20;

    for (int j = 0; j < 20; j++) {
        for (int i = 0; i < numbTriangles; i++) {
            SDL_SetRenderDrawColor(gRenderer, 46, 90, 122, 255);
            SDL_RenderDrawLine(
                    gRenderer,
                    0 + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - (i * triangleHeight),
                    size / 2 + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - triangleHeight - (i * triangleHeight));
            SDL_RenderDrawLine(
                    gRenderer,
                    size / 2 + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - triangleHeight - (i * triangleHeight),
                    size + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - (i * triangleHeight));
            SDL_RenderDrawLine(
                    gRenderer,
                    0 + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - (i * triangleHeight),
                    size + (i * size / 2) + (j * size),
                    SCREEN_HEIGHT - (i * triangleHeight));
        }
        numbTriangles--;
    }


}
