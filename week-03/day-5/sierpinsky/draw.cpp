 #include "draw.h"


 void drawRectangle(SDL_Renderer *gRenderer, int x, int y, int height, int wight, int depth);

 void draw(SDL_Renderer* gRenderer) {
     drawRectangle(gRenderer, 600, 600, 600, 600, 3);
}

void drawRectangle(SDL_Renderer *gRenderer, int xmax, int ymax, int height, int wight, int depth) {

    SDL_SetRenderDrawColor(gRenderer, 76, 192, 45, 255);
    SDL_Rect fillRect = {xmax / 3, ymax / 3, wight / 3, height / 3};
    SDL_RenderFillRect(gRenderer, &fillRect);

    if (depth > 0) {
        drawRectangle(gRenderer, wight - xmax / 3, height - ymax / 3, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3 + xmax, ymax / 3, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3 + 2 * xmax, ymax / 3, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3, ymax / 3 + ymax, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3 + 2 * xmax, ymax / 3 +  ymax, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3, ymax / 3 + 2 * ymax, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3 + xmax, ymax / 3 + 2 * ymax, wight / 3, height / 3, depth - 1);
        drawRectangle(gRenderer, xmax / 3 + 2 * xmax, ymax / 3 + 2 * ymax, wight / 3, height / 3, depth - 1);

    }

}