//
// Created by antonio on 17. 12. 2021..
//

#ifndef OPVJEZBE_PLAYER_H
#define OPVJEZBE_PLAYER_H


#include <string>

class Player {
    int score;
    int value;
    int guess;
    std::string name;
public:
    Player();

    std::string getName() const;

    void setValue(int newValue);

    int getValue() const;

    void addScore();

    void setGuess(int newGuess);

    int getGuess() const;
};


#endif //OPVJEZBE_PLAYER_H
