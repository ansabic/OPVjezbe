//
// Created by antonio on 12. 11. 2021..
//
#include "point.h"

#ifndef OPVJEZBE_GUN_H
#define OPVJEZBE_GUN_H


class gun {
    point position;
    int maxLoad;
    int currentLoad;
public:
    gun(point p, int maxLoad, int currentLoad);

    void shoot();

    void reload();
};


#endif //OPVJEZBE_GUN_H
