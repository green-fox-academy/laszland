#include "draw.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

int randomNumb = rand() % 256;

void rainbow(SDL_Renderer* gRenderer, int x, int y);

void draw(SDL_Renderer* gRenderer) {
    rainbow(gRenderer, 300, 12);
}

void rainbow(SDL_Renderer* gRenderer, int x, int y) {
    for (int i = 0; i <= x; i++) {
        SDL_SetRenderDrawColor(gRenderer, abs(randomNumb - i) , y,  abs(i - randomNumb), 255);
        SDL_Rect Rect = { ((640/2)-(x/2)+i), ((480/2)-(x/2)+i), x-(2*i), x-(2*i)};
        SDL_RenderDrawRect( gRenderer, &Rect );
    }

}