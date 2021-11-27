//
// Created by antonio on 26. 11. 2021..
//

#include "view.h"
#include <iostream>

using namespace std;

void view::printBoard() {
    vector<bool> field = myController.getBoard().getField();
    for (int i = 0; i < myController.getBoard().getHeight() + 2; i++) {
        for (int j = 0; j < myController.getBoard().getWidth() + 2; j++) {
            if (j == 0 || j == myController.getBoard().getWidth() + 1 || i == 0 ||
                i == myController.getBoard().getHeight() + 1)
                cout << myController.getBoard().getChar();
            else {
                if (field[i * myController.getBoard().getWidth() + j])
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

view::view() {
    myController = controller();
}

class controller view::getController() {
    return myController;
}
