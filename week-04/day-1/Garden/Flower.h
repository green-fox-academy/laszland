#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H


#include "Plant.h"

class Flower : public  Plant {

public:
    Flower(float amountWater);

private:
    float _amountWater;

};


#endif //GARDEN_FLOWER_H
