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
    std::string type;
public:
    explicit Player(const std::string &newType,const std::string &newName);

    std::string getType() const;

    void setValue(int newValue);

    int getValue() const;

    void addScore();

    int getScore() const;

    void setGuess(int newGuess);

    int getGuess() const;

    std::string getName();
};


#endif //OPVJEZBE_PLAYER_H
