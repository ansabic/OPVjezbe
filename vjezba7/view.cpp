//
// Created by antonio on 26. 11. 2021..
//

#include "view.h"
#include <iostream>

using namespace std;

void view::printBoard() {
    vector<bool> field = myController.getBoard()->getField();
    for (int k = 0; k < myController.getBoard()->getWidth() + 2; k++) {
        cout << myController.getBoard()->getChar() << " ";
    }
    cout << endl;
    for (int i = 0; i < myController.getBoard()->getHeight(); i++) {
        cout << myController.getBoard()->getChar() << " ";
        for (int j = 0; j < myController.getBoard()->getWidth(); j++) {
            if (field[i * myController.getBoard()->getWidth() + j])
                cout << myController.getBoard()->getChar() << " ";
            else
                cout << "  ";

        }
        cout << myController.getBoard()->getChar() << " ";
        cout << endl;
    }
    for (int k = 0; k < myController.getBoard()->getWidth() + 2; k++) {
        cout << myController.getBoard()->getChar() << " ";
    }
    cout << endl;
}

class controller view::getController() {
    return myController;
}

