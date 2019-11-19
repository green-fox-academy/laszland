#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <iostream>

#include "Plant.h"

class Garden {
public:
    Garden();
    void addPlants(Plant*);


private:
    std::vector<Plant*> plants;

};


#endif //GARDEN_GARDEN_H
