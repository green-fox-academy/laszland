#include "draw.h"
#include <iostream>


void draw(SDL_Renderer* gRenderer) {
 int colorR[5] = {23, 125, 211, 3, 78};
 int positionX[5] = {55, 24, 576, 90, 238};
 int positionY[5] = {143, 32, 311, 95, 71};
 int length[5] = {10, 20, 30, 40, 50};
 int high[5] = {90, 80, 70, 60, 50};

 for (int i = 0; i < 5; i++) {
     SDL_SetRenderDrawColor(gRenderer, colorR[i], 0, 100, 255);
     SDL_Rect fillRect = {positionX[i], positionY[i], length[i], high[i]};
     SDL_RenderFillRect(gRenderer, &fillRect);
 }


}