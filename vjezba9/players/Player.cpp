//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "Player.h"

void Player::setValue(int newValue) {
    value = newValue;
}

int Player::getValue() const {
    return value;
}

void Player::addScore() {
    score++;
    std::cout << "Congrats" << " " << name << ", 1 point added!" << "Your score is " << score << "." << std::endl;
}

void Player::setGuess(int newGuess) {
    guess = newGuess;
}

int Player::getGuess() const {
    return guess;
}

std::string Player::getType() const {
    return type;
}

Player::Player(const std::string& newType,const std::string &newName) {
    value = 0;
    score = 0;
    guess = 0;
    name = newName;
    type = newType;
}

std::string Player::getName(){
    return name;
}

int Player::getScore() const {
    return score;
}
