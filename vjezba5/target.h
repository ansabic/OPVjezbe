//
// Created by antonio on 12. 11. 2021..
//
#include "point.h"

#ifndef OPVJEZBE_TARGET_H
#define OPVJEZBE_TARGET_H


class target {
    point bottomLeftPoint;
    point upperRightPoint;
    bool hit;

    void kill();

public:
    target(point bl, point ur, bool hit = false);

    bool onTrajectory(double angle);
};


#endif //OPVJEZBE_TARGET_H
