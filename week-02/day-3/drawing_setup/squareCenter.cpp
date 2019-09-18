#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 32, 164, 243, 255);
    SDL_Rect fillRect = {(640/2)-50, (480/2-50), 100, 100};
    SDL_RenderFillRect(gRenderer, &fillRect);
}
