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

    void promptValues();

    void endGame();

public:
    Game();

    void addPlayer(Player player);

    void startGame();

    void calculate();

    static void gameOverMessage();
};


#endif //OPVJEZBE_GAME_H
