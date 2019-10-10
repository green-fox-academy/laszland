#include "Aircrafts.h"


Aircrafts::Aircrafts(int maxAmmo, int amountAmmo, int baseDamage, std::string type) : _maxAmmo(maxAmmo), _amountAmmo(amountAmmo),
                                                                    _baseDamage(baseDamage), _type(type){}

int Aircrafts::fight() {
    int damage = _baseDamage * _amountAmmo;
    _amountAmmo = 0;
    return damage;
}

int Aircrafts::refill(int ammosForRefill) {
    if (ammosForRefill > _maxAmmo) {
        _amountAmmo = _maxAmmo;
        return ammosForRefill - _amountAmmo;
    } else {
        _amountAmmo = ammosForRefill;
        return 0;
    }

}

std::string Aircrafts::getType() {
    return _type;
}

std::string Aircrafts::getStatus() {
    std::string statusOFAircraft;
    statusOFAircraft = "Type: " + _type +
                       ", Ammo: " + std::to_string(_amountAmmo) +
                       ", Base Damage: " + std::to_string(_baseDamage) +
                       ", All Damage: " + std::to_string(_baseDamage * _amountAmmo);

}

bool Aircrafts::isPriority() {
    return _type == "F35" ? true : false;

}

int Aircrafts::getMaxAmmo() const {
    return _maxAmmo;
}
