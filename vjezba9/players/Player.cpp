//
// Created by antonio on 17. 12. 2021..
//

#include "Player.h"

void Player::setValue(int newValue) {
    value = newValue;
}

int Player::getValue() const {
    return value;
}

void Player::addScore() {
    score++;
}

void Player::setGuess(int newGuess) {
    guess = newGuess;
}

int Player::getGuess() const {
    return guess;
}

std::string Player::getName() const {
    return name;
}

Player::Player() {

}
