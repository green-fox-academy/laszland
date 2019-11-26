#include "player.h"


player::player(const std::string &name) : _name(name), _point(301) {}

void player::threwPoint(int target) {
    _point -= target;
}

const std::string &player::getName() const {
    return _name;
}

