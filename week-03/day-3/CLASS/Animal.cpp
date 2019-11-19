#include "Animal.h"
#include <iostream>
#include <string>

//default settings
Animal::Animal() {
    _hunger = 50;
    _thirst = 50;
}

//input settings
Animal::Animal(int hunger, int thirst): _hunger(hunger),
                                        _thirst(thirst) {}

//functions
int Animal::eat() {
    _hunger--;
}

int Animal::drink() {
    _thirst--;
}

int Animal::play() {
    _hunger++;
    _thirst++;
}

//setters
void Animal::setHunger(int hunger) {
    _hunger = hunger;
}

void Animal::setThirst(int thirst) {
    _thirst = thirst;

//getters
int Animal::getHunger() const {
    return _hunger;
}

int Animal::getThirst() const {
    return _thirst;
}
}
