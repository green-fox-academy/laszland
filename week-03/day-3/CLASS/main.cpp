#include "Animal.h"
#include <iostream>
#include <string>

int main () {
    Animal animal1;

    animal1.play();
    animal1.play();
    animal1.play();

    Animal animal2(70, 70);

    for (int i = 0; i < 50; i++) {
        animal2.play();
    }



    std::cout << "Animal1: Level of hunger is: " << animal1.getHunger() << std::endl;
    std::cout << "Animal1: Level of thirst is: " << animal1.getThirst() << std::endl;
    std::cout << "Animal2: Level of hunger is: " << animal2.getHunger() << std::endl;
    std::cout << "Animal2: Level of thirst is: " << animal2.getThirst() << std::endl;

    return 0;
}