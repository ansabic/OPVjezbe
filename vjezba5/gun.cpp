//
// Created by antonio on 12. 11. 2021..
//

#include "gun.h"

gun::gun(point p, int maxLoad, int currentLoad) {
    position = p;
    this->maxLoad = maxLoad;
    this->currentLoad = currentLoad;
}

void gun::shoot() {
    if (currentLoad != 0)
        currentLoad--;
}

void gun::reload() {
    currentLoad = maxLoad;
}
