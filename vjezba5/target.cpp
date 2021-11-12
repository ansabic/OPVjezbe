//
// Created by antonio on 12. 11. 2021..
//

#include "target.h"

target::target(point bl, point ur, bool hit) {
    bottomLeftPoint = bl;
    upperRightPoint = ur;
    this->hit = hit;
}

void target::kill() {
    hit = true;
}

bool target::onTrajectory(double angle) {
    if ()
}
