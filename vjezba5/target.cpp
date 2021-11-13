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

bool target::isHit() const {
    return hit;
}

bool target::onTrajectory(trajectory tr) {
    if (tr.isParametrized()) {
        if (tr.isParametrizedX())
            return tr.getParamX() >= bottomLeftPoint.getX() && tr.getParamX() <= upperRightPoint.getX();
        else
            return tr.getParamY() >= bottomLeftPoint.getY() && tr.getParamY() <= upperRightPoint.getY();
    } else {
        if (bottomLeftPoint.getX())
    }
}
