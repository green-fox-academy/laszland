#include <iostream>
#include <string>
#include "sharpie.h"

int main() {
    Sharpie sharpie1("blue", 12.33);
    Sharpie sharpie2("red", 33.9);

    for (int i = 0; i < 34; i++) {
        sharpie1.use();
        sharpie2.use();
    }

    std::cout << "The color of your sharpies is: " << sharpie1.getColor() << ", " << sharpie2.getColor() << std::endl;
    std::cout << "The width of your sharpies is: " << sharpie1.getWidth() << ", " << sharpie2.getWidth() << std::endl;
    std::cout << "The amount of ink in your sharpies is: " << sharpie1.getInkAmount() << ", " << sharpie2.getInkAmount() << std::endl;

}