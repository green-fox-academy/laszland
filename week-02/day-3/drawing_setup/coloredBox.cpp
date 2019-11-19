#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    int xBal = (640 - 300) / 2;
    int yFent = (480 - 200) / 2;
    int xJobb = (640 - ((640 - 300) / 2));
    int yLent = (480 - ((480 - 200) / 2));

    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, xBal, yFent, xJobb, yFent);

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, xJobb, yFent, xJobb, yLent);

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
    SDL_RenderDrawLine(gRenderer, xBal, yLent, xJobb, yLent);

    SDL_SetRenderDrawColor(gRenderer, 12, 122, 122, 255);
    SDL_RenderDrawLine(gRenderer, xBal, yFent, xBal, yLent);
}