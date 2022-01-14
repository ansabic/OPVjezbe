//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_HUMANPLAYER_H
#define OPVJEZBE_HUMANPLAYER_H


#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(const std::string &newName);

    void askForGuess();
    void askForValue();
};


#endif //OPVJEZBE_HUMANPLAYER_H
