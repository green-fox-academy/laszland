//
// Created by Peter on 2019. 11. 26..
//

#include "game.h"

void game::setNumberOfPlayers(int numberOfPlayers) {
    _numberOfPlayers = numberOfPlayers;
}

int game::getNumberOfPlayers() const {
    return _numberOfPlayers;
}
