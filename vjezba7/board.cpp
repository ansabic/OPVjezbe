//
// Created by antonio on 26. 11. 2021..
//

#include <cmath>
#include "board.h"
#include "point.h"

board::board() : border('*'), x(10), y(10) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            field.push_back(false);
        }
    }
}

vector<bool> board::getField() const {
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
    if (p1.getX() != p2.getX() && p1.getY() != p2.getY()) {
        double par1 = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
        double k = par1;
        double l = p1.getY() - par1 * p1.getX();
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                if (i - round(k * j + l) == 0 && i <= max(p1.getY(), p2.getY()) && i >= min(p1.getY(), p2.getY())
                    && j <= max(p1.getX(), p2.getX()) && j >= min(p1.getX(), p2.getX()))
                    field[i * x + j] = true;
            }
        }
    } else if (p1.getX() == p2.getX()) {
        int j = (int) round(p1.getX());
        for (int i = 0; i < y; i++) {
            if (i <= max(p1.getY(), p2.getY()) && i >= min(p1.getY(), p2.getY())
                && j <= max(p1.getX(), p2.getX()) && j >= min(p1.getX(), p2.getX()))
                field[i * x + j] = true;
        }
    } else if (p1.getY() == p2.getY()) {
        int i = (int) round(p1.getY());
        for (int j = 0; j < x; j++) {
            if (j <= max(p1.getX(), p2.getX()) && j >= min(p1.getX(), p2.getX()))
                field[i * x + j] = true;
        }
    }
}

