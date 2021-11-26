//
// Created by antonio on 26. 11. 2021..
//
#include "point.h"
#include "board.h"

#ifndef OPVJEZBE_CONTROLLER_H
#define OPVJEZBE_CONTROLLER_H


class controller {
    board myBoard;
public:
    void insertPoint(point newPoint);

    void insertLine(point p1, point p2);

    class board getBoard() const;
};


#endif //OPVJEZBE_CONTROLLER_H
