#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H


#include "Plant.h"

class Tree : public Plant {

public:
    Tree(float amountWater);

private:
    float _amountWater;

};


#endif //GARDEN_TREE_H
