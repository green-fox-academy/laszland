#include "draw.h"
#include <iostream>

void draw4(SDL_Renderer* gRenderer, int x);

void draw(SDL_Renderer* gRenderer) {
    draw4(gRenderer, 10);
}

void draw4(SDL_Renderer* gRenderer, int x) {
    int offSet = x;
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i <= 20; i++) {

            // upper line

            // 1
            SDL_SetRenderDrawColor(gRenderer, 110, 235, 131, 255);
            SDL_RenderDrawLine(
                    gRenderer,
                    i * offSet,
                    j * SCREEN_HEIGHT / 2,
                    SCREEN_WIDTH / 2,
                    (j * SCREEN_HEIGHT / 2) + i * offSet);

            // 2
            SDL_SetRenderDrawColor(gRenderer, 215, 20, 106, 255);
            SDL_RenderDrawLine(
                    gRenderer,
                    0,
                    (j * SCREEN_HEIGHT / 2) + (i * offSet),
                    i * offSet,
                    (SCREEN_HEIGHT / 2) + (j * (SCREEN_HEIGHT / 2)));

            // 3
            SDL_SetRenderDrawColor(gRenderer , 110, 235, 131, 255);
            SDL_RenderDrawLine(
                    gRenderer,
                    (SCREEN_WIDTH / 2) + (i * offSet),
                    (SCREEN_HEIGHT / 2) * j,
                    SCREEN_WIDTH,
                    j * (SCREEN_HEIGHT / 2) + (i * offSet));

            // 4
            SDL_SetRenderDrawColor(gRenderer, 215, 20, 106, 255);
            SDL_RenderDrawLine(
                    gRenderer,
                    SCREEN_WIDTH / 2,
                    j * (SCREEN_HEIGHT / 2) + (i * offSet),
                    (SCREEN_WIDTH/2) + (i * offSet),
                    (SCREEN_HEIGHT / 2) + (j * (SCREEN_HEIGHT / 2)));
    }
}
}