 #include "draw.h"

 void draw(SDL_Renderer* gRenderer) {

    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, 320, 0, 320, 480);

 }
