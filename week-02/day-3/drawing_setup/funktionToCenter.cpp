#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    for (int i = 0; i <= 24; i++) {
        SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
        SDL_RenderDrawLine(gRenderer, 0 + (i * 20), 0, 240, 240);

        SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
        SDL_RenderDrawLine(gRenderer, 480, 0 + (i * 20), 240, 240);

        SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
        SDL_RenderDrawLine(gRenderer, 0 + (i * 20), 480, 240, 240);

        SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
        SDL_RenderDrawLine(gRenderer, 0, 0 + (i * 20), 240, 240);
    }


}

