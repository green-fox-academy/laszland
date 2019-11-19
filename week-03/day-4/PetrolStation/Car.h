//
// Created by Peter on 2019. 09. 26..
//

#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include <vector>

class Car {

public:

    Car(int, int);  //constructor for cars
    bool isFull();
    int fill();

private:
    int _gasAmount;
    int _capacity;
};


#endif //PETROLSTATION_CAR_H
