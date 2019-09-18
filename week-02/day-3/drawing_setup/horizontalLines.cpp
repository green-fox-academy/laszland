#include "draw.h"
#include <iostream>


void drwLine (SDL_Renderer* gRenderer, int x, int y);

void draw(SDL_Renderer* gRenderer) {
    drwLine(gRenderer, 45, 190);
    drwLine(gRenderer, 240, 199);
    drwLine(gRenderer, 222, 222);

}

void drwLine (SDL_Renderer* gRenderer, int x, int y) {
    SDL_SetRenderDrawColor(gRenderer, 60, 23, 66, 255);
    SDL_RenderDrawLine(gRenderer, x, y, x+50, y+50);
}