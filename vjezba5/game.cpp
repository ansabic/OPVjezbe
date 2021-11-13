//
// Created by antonio on 13. 11. 2021..
//

#include "game.h"
#include "constants.h"
#include <iostream>

game::game(gun g, target *t, int n, trajectory tr) : myGun(g), myTargets(t), myTrajectory(tr), noTargets(n) {}

void game::execute(const string &command, const double *angle) {
    switch (command) {
        case SHOOT: {
            this->myGun.shoot();
            for (int i = 0; i < noTargets; i++) {
                if (!myTargets[i].isHit() && myTargets[i].onTrajectory(myTrajectory))
                    myTargets[i].kill();
            }
        }
            break;
        case RELOAD:
            this->myGun.reload();
            break;
        case ROTATE:
            this->myTrajectory = trajectory(myGun.getPosition(), *angle);
            break;
        case EXIT:
            this->endGame();
            break;
        default:
            showError();
            break;
    }
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
