#include <iostream>
#include "Copier.h"

Copier::Copier(int speed, int sizeX, int sizeY) : Scanner(speed), Printer2D(sizeX, sizeY) {}

void Copier::copy() {
   scan();
   print();
}
