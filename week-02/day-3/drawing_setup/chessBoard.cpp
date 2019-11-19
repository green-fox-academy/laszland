#include "draw.h"
#include <iostream>

void drawChessBoard(SDL_Renderer* gRenderer, int x, int y, int size);

void draw(SDL_Renderer* gRenderer) {
    drawChessBoard(gRenderer, 50, 50, 60);
}

void drawChessBoard(SDL_Renderer* gRenderer, int x, int y, int size) {
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
        SDL_SetRenderDrawColor(gRenderer, 215, 20, 106, 255);
        SDL_Rect fillRect1 = { x + (i*2*size), y + (j * 2 * size), size, size};
        SDL_RenderFillRect( gRenderer, &fillRect1 );
        SDL_Rect fillRect2 = { x + (i*2*size) + size, y + size + (j * 2 * size) , size, size};
        SDL_RenderFillRect( gRenderer, &fillRect2 );
        }
    }
}
