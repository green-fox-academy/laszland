//
// Created by Peter on 2019. 10. 01..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings) :
                       StringedInstrument(numberOfStrings, "Duum-duum-duum") {}
BassGuitar::BassGuitar() : BassGuitar(4) {}

void BassGuitar::play() {
    std::cout << "Bass Guitar a " << _numberOfStrings << "-stringged instrument that goes " << _sound << "." << std::endl;
}

