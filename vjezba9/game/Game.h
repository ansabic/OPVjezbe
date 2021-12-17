//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_GAME_H
#define OPVJEZBE_GAME_H


#include <vector>
#include "../players/Player.h"

class Game {
    bool gameState;
    std::vector<Player> players;

    void addPlayer(Player player);

    void promptValues();

    void endGame();

public:
    Game();

    void startGame();
};


#endif //OPVJEZBE_GAME_H
