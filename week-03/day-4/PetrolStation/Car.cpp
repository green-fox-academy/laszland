//
// Created by Peter on 2019. 09. 26..
//

#include "Car.h"
#include <vector>

Car::Car(int gasAmount, int capacity) {
    _gasAmount = gasAmount;
    _capacity = capacity;
}

bool Car::isFull() {
    return _gasAmount == _capacity;
}

int Car::fill() {
    _gasAmount++;
    if (_gasAmount > _capacity) {
        _gasAmount = _capacity;
    }
}

