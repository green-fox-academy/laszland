#include "draw.h"
#include <iostream>

void square(SDL_Renderer* gRenderer, int x);

void draw(SDL_Renderer* gRenderer) {
    square(gRenderer, 100);
    square(gRenderer, 150);
    square(gRenderer, 200);
    square(gRenderer, 250);


}

void square(SDL_Renderer* gRenderer, int x) {
    SDL_SetRenderDrawColor(gRenderer, 46, 196, 182, 255);
    SDL_Rect Rect = { (640/2)-(x/2), (480/2)-(x/2), x, x};
    SDL_RenderDrawRect( gRenderer, &Rect );
}