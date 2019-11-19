#include "draw.h"
#include <iostream>

void printSquare (SDL_Renderer* gRenderer, int x, int y);

void draw(SDL_Renderer* gRenderer) {
    printSquare(gRenderer, 300, 130);
    printSquare(gRenderer, 67, 313);
    printSquare(gRenderer, 12, 98);


}

void printSquare (SDL_Renderer* gRenderer, int x, int y) {
    SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
    SDL_Rect fillRect = { x, y, 50, 50};
    SDL_RenderFillRect( gRenderer, &fillRect );
}