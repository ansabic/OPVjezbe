//
// Created by antonio on 25. 11. 2021..
//

#ifndef OPVJEZBE_HANGMANVIEW_H
#define OPVJEZBE_HANGMANVIEW_H


#include "HangmanController.h"

class HangmanView {
public:
    void displayCurrentProgress();

    void displayUsedLetters();

    void displayHangman();

    HangmanView();

    HangmanController controller;
};


#endif //OPVJEZBE_HANGMANVIEW_H
