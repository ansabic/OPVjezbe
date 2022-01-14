//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_COMPUTERPLAYER_H
#define OPVJEZBE_COMPUTERPLAYER_H

#include "Player.h"


class ComputerPlayer : public Player {
public:
    explicit ComputerPlayer(const std::string &newName);

    int generateGuess(int noOfPlayers);
    static int generateValue();
};


#endif //OPVJEZBE_COMPUTERPLAYER_H
