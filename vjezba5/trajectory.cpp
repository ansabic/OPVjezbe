//
// Created by antonio on 13. 11. 2021..
//

#include "trajectory.h"

trajectory::trajectory(point gunPosition, double angle) {
    if ((int) (angle) % 90 != 0) {
        k = tan(angle);
        l = gunPosition.getY() - k * gunPosition.getX();
        parametrized = false;
    } else if ((int) (angle) % 270 == 0 || (int) (angle) % 270 == 90) {
        paramX = gunPosition.getX();
        parametrized = true;
        parametrizedX = true;
    } else if ((int) (angle) % 180 == 0) {
        paramY = gunPosition.getY();
        parametrized = true;
        parametrizedX = false;
    }
}

trajectory::trajectory(point p1, point p2) {
    if (p1.getX() == p2.getX()) {
        parametrized = true;
        parametrizedX = true;
        paramX = p1.getX();
    }
    if (p1.getY() == p2.getY()) {
        parametrized = true;
        parametrizedX = false;
        paramY = p1.getY();
    } else {
        k = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
        l = p1.getY() - k * p1.getX();
    }
}

bool trajectory::isParametrized() const {
    return parametrized;
}

bool trajectory::isParametrizedX() const {
    return parametrizedX;
}

double trajectory::getParamY() const {
    return paramY;
}

double trajectory::getParamX() const {
    return paramX;
}

double trajectory::getK() const {
    return k;
}

double trajectory::getL() const {
    return l;
}

point trajectory::intersection(trajectory tr2) const {
    if (this->isParametrized() && tr2.isParametrized()) {
        if (this->isParametrizedX() && !tr2.isParametrizedX())
            return {this->getParamX(), tr2.getParamY(), 0};
        else
            return {this->getParamY(), tr2.getParamX(), 0};
    } else {
        return {(tr2.getL() - this->getL()) / (this->k - tr2.getK()),
                (tr2.getL() - this->getL()) / (this->k - tr2.getK()) *
                this->getK() + this->getL(), 0};
    }
}

bool trajectory::intersects(trajectory tr2) const {
    if (this->isParametrized() && tr2.isParametrized()) {
        if (this->isParametrizedX() && tr2.isParametrizedX())
            return false;
        if (!this->isParametrizedX() && !tr2.isParametrizedX())
            return false;
        return true;
    } else if (!this->isParametrized() && !tr2.isParametrized()) {
        if (this->getK() == tr2.getK())
            return false;
        return true;
    }
    return true;
}


