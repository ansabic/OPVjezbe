//
// Created by antonio on 26. 11. 2021..
//

#include "vector"
#include "point.h"

using namespace std;

#ifndef OPVJEZBE_BOARD_H
#define OPVJEZBE_BOARD_H


class board {
    char border;
    int x;
    int y;
    vector<bool> field;
public:
    board();

    vector<bool> getField() const;

    int getHeight() const;

    int getWidth() const;

    char getChar() const;

    void updatePoint(point newPoint);

    void insertLine(point p1, point p2);
};


#endif //OPVJEZBE_BOARD_H
