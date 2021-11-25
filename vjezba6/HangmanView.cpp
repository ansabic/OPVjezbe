//
// Created by antonio on 25. 11. 2021..
//

#include "HangmanView.h"
#include "constants.h"
#include <iostream>

void HangmanView::displayCurrentProgress() {
    cout << "Lives left: " << controller.getLives() << endl;
}

void HangmanView::displayUsedLetters() {
    cout << controller.getUsedLetters();
}

void HangmanView::displayHangman() {
    string result;
    switch (controller.getLives()) {
        case 8:
            result = hangmanStates[0];
            break;
        case 7:
            result = hangmanStates[1];
            break;
        case 6:
            result = hangmanStates[2];
            break;
        case 5:
            result = hangmanStates[3];
            break;
        case 4:
            result = hangmanStates[4];
            break;
        case 3:
            result = hangmanStates[5];
            break;
        case 2:
            result = hangmanStates[6];
            break;
        case 1:
            result = hangmanStates[7];
            break;
        case 0:
            result = hangmanStates[8];
            break;
    }
    cout << result << endl;
}

HangmanView::HangmanView() {
    controller = HangmanController();
}
