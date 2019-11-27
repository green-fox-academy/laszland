#ifndef DARTS_GAME_H
#define DARTS_GAME_H

#include "player.h"
#include <iostream>
#include <vector>


class game {
public:
    void setNumberOfPlayers(int numberOfPlayers);

    static int getNumberOfPlayers() const;

private:
    int _numberOfPlayers;
    std::vector<player*> _listOfPlayers;
};


#endif //DARTS_GAME_H
