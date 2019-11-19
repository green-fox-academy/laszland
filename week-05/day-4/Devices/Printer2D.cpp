//
// Created by Peter on 2019. 10. 10..
//

#include <iostream>
#include "Printer2D.h"

Printer2D::Printer2D(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY) {}

std::string Printer2D::getSize() {
    std::string sizeOfPaper;
    sizeOfPaper = std::to_string(_sizeX) + " x " + std::to_string(_sizeY);
    return sizeOfPaper;
}
