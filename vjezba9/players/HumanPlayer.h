//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_HUMANPLAYER_H
#define OPVJEZBE_HUMANPLAYER_H


#include "Player.h"

class HumanPlayer : public Player {
public:
    explicit HumanPlayer(const std::string &newName);

    static int askForGuess();
    static int askForValue();
};


#endif //OPVJEZBE_HUMANPLAYER_H
