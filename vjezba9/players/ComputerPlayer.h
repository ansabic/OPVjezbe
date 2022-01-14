//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_COMPUTERPLAYER_H
#define OPVJEZBE_COMPUTERPLAYER_H

#include "Player.h"


class ComputerPlayer : public Player {
public:
    explicit ComputerPlayer(const std::string &newName);

    void generateGuess(int noOfPlayers);
    void generateValue();
};


#endif //OPVJEZBE_COMPUTERPLAYER_H
