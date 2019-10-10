#ifndef AIRCARFTCARRIER_CARRIER_H
#define AIRCARFTCARRIER_CARRIER_H


#include <vector>
#include "Aircrafts.h"

class Carrier {
public:
    Carrier(int storageAmmo, int amountAmmo, int healthPoint);

    void add(Aircrafts*);
    void fill();
    void fight();
    bool isEnoughAmmo();

private:
    int _storageAmmo;
    int _amountAmmo;
    int _healthPoint;

    std::vector<Aircrafts*> _carrierOfAircrafts;
};


#endif //AIRCARFTCARRIER_CARRIER_H
