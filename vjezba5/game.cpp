//
// Created by antonio on 13. 11. 2021..
//

#include "game.h"
#include "constants.h"
#include <iostream>

game::game(gun g, target *t, int n, trajectory tr) : myGun(g), myTargets(t), myTrajectory(tr), noTargets(n),
                                                     state(true) {}

void game::execute(const string &command, const double angle) {
    if (command == SHOOT) {
        this->myGun.shoot();
        if (!myGun.isEmpty()) {
            for (int i = 0; i < noTargets; i++) {
                if (!myTargets[i].isHit() && myTargets[i].onTrajectory(myTrajectory))
                    myTargets[i].kill();
            }
        }
    } else if (command == RELOAD)
        this->myGun.reload();

    else if (command == ROTATE)
        this->myTrajectory = trajectory(myGun.getPosition(), angle);

    else if (command == EXIT)
        this->endGame();

    else
        showError();
}

bool game::allCleared() {
    for (int i = 0; i < noTargets; i++) {
        if (myTargets[i].isHit())
            return false;
    }
    return true;
}

void game::startGame() {
    state = true;
}

void game::endGame() {
    state = false;
}

bool game::getState() const {
    return state;
}

void game::showError() {
    cout << "Wrong input, try again!" << endl;
}

