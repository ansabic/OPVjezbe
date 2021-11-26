//
// Created by antonio on 25. 11. 2021..
//


#include <string>
#include <utility>
#include "HangmanModel.h"

string HangmanModel::getMovie() {
    return movie;
}

void HangmanModel::setMovie(string newMovie) {
    HangmanModel::movie = std::move(newMovie);
}

int HangmanModel::getLives() const {
    return lives;
}

void HangmanModel::setLives(int newLives) {
    HangmanModel::lives = newLives;
}

bool HangmanModel::isInGame() const {
    return inGame;
}

void HangmanModel::setInGame(bool newInGame) {
    HangmanModel::inGame = newInGame;
}

const std::__cxx11::basic_string<char> &HangmanModel::getGuessMovie() const {
    return guessMovie;
}

void HangmanModel::setGuessMovie(const std::__cxx11::basic_string<char> &newGuessMovie) {
    HangmanModel::guessMovie = newGuessMovie;
}

