//
// Created by Peter on 2019. 09. 26..
//

#include <iostream>
#include "Station.h"

class car {};

Station::Station(int gasAmount) : _gasAmount(gasAmount) {}

void Station::add(Car* car) {
    cars.push_back(*car);
}

void Station::fill() {
    for (int i = 0; i < cars.size(); i++ ) {
        while (!cars[i].isFull()) {
            cars[i].fill();
            _gasAmount--;
                if (_gasAmount <= 0) {
                    _gasAmount = 0;
                    throw std::string ("We are out of gas! :(");
                }
            std::cout << "Filling car!" << std::endl;

        }
        std::cout << _gasAmount << " unit gas left on the station." <<std::endl;
    }
}
