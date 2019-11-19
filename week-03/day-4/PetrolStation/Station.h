//
// Created by Peter on 2019. 09. 26..
//

#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H


#include "Car.h"



class Station {

public:
    Station(int gasAmount);

    void fill();
    void add(Car *car);

private:
    int _gasAmount;
    std::vector<Car*> cars;
};


#endif //PETROLSTATION_STATION_H
