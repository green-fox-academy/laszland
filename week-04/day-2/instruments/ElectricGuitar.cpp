#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) :
                               StringedInstrument(numberOfStrings, "Twang") {}

ElectricGuitar::ElectricGuitar() : ElectricGuitar(7) {}

void ElectricGuitar::play() {
    std::cout <<  "Electric Guitar a " << _numberOfStrings << "-stringged instrument that goes " << _sound << "." << std::endl;
}