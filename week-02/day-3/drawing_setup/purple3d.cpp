#include "draw.h"
#include <iostream>

int coord[6] = {0, 10, 30, 60, 100, 150};

void draw(SDL_Renderer* gRenderer) {

    for (int i = 0; i < 6; i++) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_Rect myRect1 = { coord[i]-1, coord[i]-1, 10 + (10 * i), 10 + (10 * i)};
        SDL_RenderDrawRect (gRenderer, &myRect1);
        SDL_SetRenderDrawColor(gRenderer, 153, 43, 180, 255);
        SDL_Rect myRect2 = { coord[i], coord[i], 8 + (10 * i), 8 + (10 * i)};
        SDL_RenderFillRect (gRenderer, &myRect2);
    }


}

