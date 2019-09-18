#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    for (int i = 0; i < 20; i++) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_Rect myRect1 = { 0 + (i*9), 0 + (i*9), 10, 10};
        SDL_RenderDrawRect (gRenderer, &myRect1);
        SDL_SetRenderDrawColor(gRenderer, 153, 43, 180, 255);
        SDL_Rect myRect2 = { 1 + (i*9), 1 + (i*9), 8, 8};
        SDL_RenderFillRect (gRenderer, &myRect2);
    }


}

