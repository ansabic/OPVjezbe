//
// Created by antonio on 26. 11. 2021..
//

#include "board.h"
#include "point.h"

board::board() : border('*'), x(10), y(10) {}

vector<bool> board::getField() {
    return field;
}

int board::getHeight() const {
    return y;
}

int board::getWidth() const {
    return x;
}

char board::getChar() const {
    return border;
}

void board::updatePoint(point newPoint) {
    field[(int) (newPoint.getY() * y + newPoint.getX())] = true;
}

void board::insertLine(point p1, point p2) {
    double par1 = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
    double k = par1;
    double l = p1.getY() - par1 * p1.getX();
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (i == k * j + l)
                field[i * x + j] = true;
        }
    }
}

