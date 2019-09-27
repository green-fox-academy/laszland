 #include "draw.h"

 void drawLines(SDL_Renderer* gRenderer, int xnull, int ynull, int xmax, int ymax);

 void draw(SDL_Renderer* gRenderer) {

    drawLines(gRenderer, 0, 0, 600, 600);


 }

 void drawLines(SDL_Renderer* gRenderer, int xnull, int ynull, int xmax, int ymax) {

     SDL_SetRenderDrawColor(gRenderer, 14, 14, 82, 255);
     SDL_RenderDrawLine(gRenderer, (xmax - xnull) / 3, ynull, (xmax - xnull) / 3, ymax);
     SDL_RenderDrawLine(gRenderer, 2 * ((xmax - xnull) / 3), ynull, 2 * ((xmax - xnull) / 3), ymax);
     SDL_RenderDrawLine(gRenderer, xnull, (ymax - ynull) / 3, xmax, (ymax - ynull) / 3);
     SDL_RenderDrawLine(gRenderer, xnull, 2 * ((ymax - ynull) / 3), xmax, 2 * ((ymax - ynull) / 3));

     drawLines(gRenderer, (xmax - xnull) / 3, ynull, (xmax - xnull) / 3, (ymax - ynull) / 3);
     drawLines(gRenderer, 2 * ((xmax - xnull) / 3))
}
