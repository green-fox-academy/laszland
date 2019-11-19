 #include "draw.h"

 void drawLines(SDL_Renderer* gRenderer, int xnull, int ynull, int xmax, int ymax, int depth);

 void draw(SDL_Renderer* gRenderer) {

    drawLines(gRenderer, 0, 0, 600, 600, 4);


 }

 void drawLines(SDL_Renderer* gRenderer, int xnull, int ynull, int xmax, int ymax, int depth) {

     SDL_SetRenderDrawColor(gRenderer, 14, 14, 82, 255);
     SDL_RenderDrawLine(gRenderer, xnull + ((xmax - xnull) / 3), ynull, xnull + ((xmax - xnull) / 3), ymax);
     SDL_RenderDrawLine(gRenderer, xnull + (2 * ((xmax - xnull) / 3)), ynull, xnull + (2 * ((xmax - xnull) / 3)), ymax);
     SDL_RenderDrawLine(gRenderer, xnull, ynull + ((ymax - ynull) / 3), xmax, ynull + ((ymax - ynull) / 3));
     SDL_RenderDrawLine(gRenderer, xnull, ynull + (2 * ((ymax - ynull) / 3)), xmax, ynull + (2 * ((ymax - ynull) / 3)));

     if (depth != 0) {
         drawLines(gRenderer, xnull + ((xmax - xnull) / 3), ynull, xnull + 2 * ((xmax - xnull) / 3), ynull + ((ymax - ynull) / 3), depth-1);
         drawLines(gRenderer, xnull + (2 * ((xmax - xnull) / 3)), ynull + ((ymax - ynull) / 3), xmax, ynull + (2 * ((ymax - ynull) / 3)), depth-1);
         drawLines(gRenderer, xnull + ((xmax - xnull) / 3), ynull + (2 * ((ymax - ynull) / 3)), xnull + (2 * ((xmax - xnull) / 3)), ymax, depth-1);
         drawLines(gRenderer, xnull, ynull + ((ymax - ynull) / 3), xnull + ((xmax - xnull) / 3), ynull + (2 * ((ymax - ynull) / 3)), depth-1);
     }




}

//void fractal ()
