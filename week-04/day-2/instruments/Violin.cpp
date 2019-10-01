//
// Created by Peter on 2019. 10. 01..
//

#include "Violin.h"

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings, "Screech") {}
Violin::Violin() : Violin( 4) {}

void Violin::play() {
    std::cout << "Violin a " << _numberOfStrings << "-stringged instrument that goes " << _sound << "." << std::endl;
}
