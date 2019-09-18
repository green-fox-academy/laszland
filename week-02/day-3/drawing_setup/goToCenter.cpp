#include "draw.h"
#include <iostream>
#include <vector>

void drawLines(SDL_Renderer* gRenderer);

std::vector <int> coordX;
std::vector <int> coordY;

int numbLines;

bool UserInput = false;

void draw(SDL_Renderer* gRenderer) {
    if (UserInput == false) {
        std::cout << "How many lines do you want to draw? ";
        std::cin >> numbLines;
        drawLines(gRenderer);
    }
    UserInput = true;
    for (int i = 0; i < numbLines; i++) {
        SDL_SetRenderDrawColor(gRenderer, 82, 72, 165, 255);
        SDL_RenderDrawLine(gRenderer, coordX[i], coordY[i], 320, 240);
    }




}

void drawLines(SDL_Renderer* gRenderer) {
    int varX;
    int varY;
    for (int i = 0; i < numbLines; i++) {
        varX = 0;
        std::cout << "Type the X coordinate of the starting point: ";
        std::cin >> varX;
        coordX.push_back(varX);

        varY = 0;
        std::cout << "Type the Y coordinate of the starting point: ";
        std::cin >> varY;
        coordY.push_back(varY);
    }

}

