//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const std::string& newName) : Player("human", newName) {

}

int HumanPlayer::askForGuess() {
    int guess;
    std::cout<< "Enter guess:" << std::endl;
    std:: cin >> guess;
    return guess;
}

int HumanPlayer::askForValue() {
    int value;
    std::cout<< "Enter value:" << std::endl;
    std:: cin >> value;
    return value;
}
