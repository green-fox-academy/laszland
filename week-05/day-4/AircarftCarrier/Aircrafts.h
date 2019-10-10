#ifndef AIRCARFTCARRIER_AIRCRAFTS_H
#define AIRCARFTCARRIER_AIRCRAFTS_H

#include <string>

class Aircrafts {
public:
    Aircrafts(int maxAmmo, int amountAmmo, int baseDamage, std::string type);

    int fight();
    int refill(int);
    std::string getType();
    std::string getStatus();
    bool isPriority();

    int getMaxAmmo() const;


private:
    int _maxAmmo;
    int _amountAmmo;
    int _baseDamage;
    std::string _type;
};


#endif //AIRCARFTCARRIER_AIRCRAFTS_H
