#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    for (int i = 1; i <= 12; i *= 2) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_Rect myRect1 = { i+10, i+10, i+10, i+10};
        SDL_RenderDrawRect (gRenderer, &myRect1);
        SDL_SetRenderDrawColor(gRenderer, 153, 43, 180, 255);
        SDL_Rect myRect2 = { i+10+1, i+10+1, i+10-2, i+10-2};
        SDL_RenderFillRect (gRenderer, &myRect2);
    }


}

