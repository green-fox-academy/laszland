#ifndef DEVICES_COPIER_H
#define DEVICES_COPIER_H


#include "Scanner.h"
#include "Printer2D.h"

class Copier : public Scanner,  public Printer2D {
public:
    Copier(int speed, int sizeX, int sizeY);
    void copy();
};


#endif //DEVICES_COPIER_H
