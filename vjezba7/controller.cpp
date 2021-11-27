//
// Created by antonio on 26. 11. 2021..
//

#include "controller.h"
#include "board.h"

void controller::insertPoint(point newPoint) {
    myBoard->updatePoint(newPoint);
}

void controller::insertLine(point p1, point p2) {
    myBoard->insertLine(p1, p2);
}

board *controller::getBoard() const {
    return myBoard;
}

