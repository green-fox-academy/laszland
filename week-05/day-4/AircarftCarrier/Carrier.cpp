#include <iostream>
#include "Carrier.h"

Carrier::Carrier(int storageAmmo, int amountAmmo, int healthPoint) : _storageAmmo(storageAmmo), _amountAmmo(amountAmmo),
                                                                   _healthPoint(healthPoint) {}

void Carrier::add(Aircrafts* aircraft) {
    _carrierOfAircrafts.push_back(aircraft);
}

void Carrier::fill() {
    // todo: try & catch error handling in case of _amountAmmo = 0
    if (isEnoughAmmo()) {
        for (Aircrafts* aircraft : _carrierOfAircrafts) {
            aircraft -> refill(aircraft->getMaxAmmo());
        }
    } else {
        while (_amountAmmo > 0) {
            for (Aircrafts* aircraft : _carrierOfAircrafts) {
                if (aircraft -> isPriority()) {
                    aircraft -> refill(aircraft -> getMaxAmmo());
                    _amountAmmo -= aircraft -> getMaxAmmo();
                }
            }
            for (Aircrafts* aircraft : _carrierOfAircrafts) {
                if (!aircraft -> isPriority()) {
                    aircraft -> refill(aircraft -> getMaxAmmo());
                    _amountAmmo -= aircraft -> getMaxAmmo();    // problem: it will refills the aircraft to full even if there is not enough ammo
                }
            }
        }
        _amountAmmo = 0;
    }
}

bool Carrier::isEnoughAmmo() {
    int requiredAmmo = 0;
    for (Aircrafts *aircraft : _carrierOfAircrafts) {
        requiredAmmo += aircraft->getMaxAmmo();
    }
    return requiredAmmo <= _amountAmmo ? true : false;
}

void Carrier::fight(Carrier& otherCarrier) {

}

void Carrier::getStatus() {
    int totalDamageOfThisCarrier = totalDamage();
    std::cout << "HP: " << _healthPoint
              <<", Aircraft count: " << _carrierOfAircrafts.size()
              << ", Ammo Storage: " << _amountAmmo
              << ", Total Damage: " << totalDamageOfThisCarrier << std::endl;
    
    for (Aircrafts* aircraft : _carrierOfAircrafts) {
        aircraft -> getStatus();
    }
}

int Carrier::totalDamage() {
    int totalDamage = 0;
    for (Aircrafts* aircraft : _carrierOfAircrafts) {
        totalDamage += aircraft -> getBaseDamage();
    }
    return totalDamage;
}
