//
// Created by Peter on 2019. 11. 26..
//

#ifndef DARTS_PLAYER_H
#define DARTS_PLAYER_H

#include <iostream>
#include <string>


class player {
public:
    player(const std::string &name);
    void threwPoint(int target);

    const std::string &getName() const;
    int getPoint() const;

    bool isTheWinner();
    bool isOverflow();

private:
    std::string _name;
    int _point;


};


#endif //DARTS_PLAYER_H
