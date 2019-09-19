#include "draw.h"
#include <iostream>

void draw(SDL_Renderer* gRenderer) {
    int offSet = 10;
    SDL_SetRenderDrawColor(gRenderer, 110, 235, 131, 255);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT);
    SDL_RenderDrawLine(gRenderer, 0,SCREEN_HEIGHT / 2, SCREEN_WIDTH, SCREEN_HEIGHT / 2);

        for (int i = 0; i <= 20; i++) {
            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, i * offSet, SCREEN_WIDTH / 2 - (i * offSet), SCREEN_HEIGHT / 2);
            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, i * offSet, SCREEN_WIDTH / 2 + (i * offSet), SCREEN_HEIGHT / 2);
            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, SCREEN_HEIGHT - (i * offSet), SCREEN_WIDTH / 2 - (i * offSet), SCREEN_HEIGHT / 2);
            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, SCREEN_HEIGHT - (i * offSet), SCREEN_WIDTH / 2 + (i * offSet), SCREEN_HEIGHT / 2);
        }

}
