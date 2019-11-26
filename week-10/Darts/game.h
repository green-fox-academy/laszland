#include "player.h"
#include <iostream>
#include <vector>


class game {
public:
    void setNumberOfPlayers(int numberOfPlayers);

private:
    int _numberOfPlayers;
    std::vector<player*> _listOfPlayers;
};


#endif //DARTS_GAME_H
