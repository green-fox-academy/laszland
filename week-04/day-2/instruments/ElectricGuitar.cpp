#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) :
                               StringedInstrument(numberOfStrings, "Twang") {}

ElectricGuitar::ElectricGuitar() : ElectricGuitar(6) {}

void ElectricGuitar::play() {
    std::cout <<  "Electric Guitar a " << _numberOfStrings << "-stringed instrument that goes " << _sound << "." << std::endl;
}