#include "draw.h"
#include <iostream>

void drawLines(SDL_Renderer* gRenderer);

int userInputX;
int userInputY;
int numbLines;
int *userInputXPtr = &userInputX;
int *userInputYPtr = &userInputY;

void draw(SDL_Renderer* gRenderer) {
    std::cout << "How many lines do you want to draw? ";
    std::cin >> numbLines;
    for (int i = 0; i < numbLines; i++) {
        drawLines(gRenderer);
    }

}

void drawLines(SDL_Renderer* gRenderer) {
    *userInputXPtr = 0;
    *userInputYPtr = 0;

    std::cout << "Type the X coordinate of the starting point: ";
    std::cin >> *userInputXPtr;

    std::cout << "Type the Y coordinate of the starting point: ";
    std::cin >> *userInputYPtr;

    SDL_SetRenderDrawColor(gRenderer, 82, 72, 165, 255);
    SDL_RenderDrawLine(gRenderer, userInputX, userInputY, 320, 240);
}

