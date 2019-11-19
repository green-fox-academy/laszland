
#include "Counter.h"
#include <iostream>

Counter::Counter() {
    _number = 0;
    initialNumber = 0;
}

Counter::Counter(int givenNumber): _number(givenNumber), initialNumber(givenNumber) {}

int Counter::add() {
    _number++;
}

int Counter::add(int x) {
    _number += x;
}

int Counter::get() {
    return _number;
}

int Counter::reset() {
    _number = initialNumber;
}


