#include "sharpie.h"
#include <iostream>
#include <string>

Sharpie::Sharpie(std::string color, float width): _color(color), _width(width) {}

//getters
const std::string &Sharpie::getColor() const {
    return _color;
}

float Sharpie::getWidth() const {
    return _width;
}

float Sharpie::getInkAmount() const {
    return _inkAmount;
}

//function
float Sharpie::use() {
    _inkAmount--;
}

//setters
void Sharpie::setColor(const std::string &color) {
    _color = color;
}

void Sharpie::setWidth(float width) {
    _width = width;
}

void Sharpie::setInkAmount(float inkAmount) {
    _inkAmount = inkAmount;
}


