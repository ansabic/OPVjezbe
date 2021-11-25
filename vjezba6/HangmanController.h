//
// Created by antonio on 25. 11. 2021..
//

#include "string"
#include "HangmanModel.h"

using namespace std;

#ifndef OPVJEZBE_HANGMANCONTROLLER_H
#define OPVJEZBE_HANGMANCONTROLLER_H

class HangmanController {
public:
    const string &getUsedLetters();

    HangmanController();

private:
    string usedLetters;
    HangmanModel model;

public:
    void loadMovie();

    bool userEntry(const char *entry);

    void checkLetter(char letter, int start);

    void updateLives();

    bool checkIfGameIsOver();

    int getLives();
};


#endif //OPVJEZBE_HANGMANCONTROLLER_H
