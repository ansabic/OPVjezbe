//
// Created by antonio on 25. 11. 2021..
//
#include "string"
#include "vector"
#include "constants.h"
#include "HangmanController.h"

using namespace std;

void HangmanController::loadMovie() {
    FILE *file = fopen(FILE_LOCATION, "rt");
    vector<string> movies;
    char *tempMovie;
    do {
        fgets(tempMovie, 1, file);
        movies.emplace_back(tempMovie);
    } while (*tempMovie != '\0');
    int randomIndex = (int) (random() % movies.size());
    model.setMovie(movies[randomIndex]);
    model.setLives(LIVES);
    model.setInGame(true);
    string tempString;
    for (int i = 0; i < model.getMovie().length(); i++) {
        tempString.append("*");
    }
    model.setGuessMovie(tempString);
}

bool HangmanController::userEntry(const char *entry) {
    if (entry == model.getMovie())
        return true;
    return false;
}

void HangmanController::checkLetter(const char letter, int start = 0) {
    if (usedLetters.find(letter) == string::npos)
        usedLetters.append(&letter);
    if (model.getGuessMovie().find(letter) == string::npos) {
        string newMovie = model.getGuessMovie();
        u_long result = model.getMovie().find(letter, start);
        if (result != string::npos) {
            int pos = (int) result;
            newMovie[pos] = letter;
            model.setGuessMovie(newMovie);
            if (model.getGuessMovie().find('*') == string::npos) {
                model.setInGame(false);
                return;
            }
            checkLetter(letter, pos + 1);
        }
        updateLives();
    }
}

void HangmanController::updateLives() {
    model.setLives(model.getLives() - 1);
    if (model.getLives() == 0)
        model.setInGame(false);
}

bool HangmanController::checkIfGameIsOver() {
    return model.isInGame();
}

HangmanController::HangmanController() {
    loadMovie();
}

int HangmanController::getLives() {
    return model.getLives();
}

const string &HangmanController::getUsedLetters() {
    return usedLetters;
}

