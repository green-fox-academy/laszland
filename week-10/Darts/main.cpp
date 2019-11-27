#include <iostream>
#include <vector>
#include "player.h"
#include "game.h"

int main() {
    int numberOfPlayers = game::getNumberOfPlayers();
    std::string playersName;
    for (int i = 0; i < numberOfPlayers; i++) {
        player createPlayer(playersName);
    }

    return 0;
}