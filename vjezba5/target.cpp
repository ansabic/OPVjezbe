//
// Created by antonio on 12. 11. 2021..
//

#include "target.h"
#include "trajectory.h"

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
        return tr.getParamY() >= bottomLeftPoint.getY() && tr.getParamY() <= upperRightPoint.getY();
    } else {
        point bottomRightPoint = point(upperRightPoint.getX(), bottomLeftPoint.getY(), 0);
        point upperLeftPoint = point(bottomLeftPoint.getX(), upperRightPoint.getY(), 0);
        trajectory left = trajectory(bottomLeftPoint, upperLeftPoint);
        trajectory bottom = trajectory(bottomLeftPoint, bottomRightPoint);
        trajectory right = trajectory(bottomRightPoint, upperRightPoint);
        trajectory up = trajectory(upperLeftPoint, upperRightPoint);
        if ((left.intersects(tr) && left.intersection(tr).getY() >= bottomLeftPoint.getY() &&
             left.intersection(tr).getY() <= upperLeftPoint.getY()) ||
            (bottom.intersects(tr) && bottom.intersection(tr).getX() >= bottomLeftPoint.getX() &&
             bottom.intersection(tr).getX() <= bottomRightPoint.getX()) ||
            (right.intersects(tr) && right.intersection(tr).getY() >= bottomRightPoint.getY() &&
             right.intersection(tr).getY() <= upperRightPoint.getY()) ||
            (up.intersects(tr) && up.intersection(tr).getX() >= upperLeftPoint.getX() &&
             up.intersection(tr).getX() <= upperRightPoint.getX()))
            return true;
        return false;
    }
}

target::target() : bottomLeftPoint(point()), upperRightPoint(point()) {

}
