//
// Created by antonio on 25. 11. 2021..
//
#include "string"
#include "vector"
#include "constants.h"
#include "HangmanController.h"
#include <fstream>
#include <algorithm>

using namespace std;

void HangmanController::loadMovie() {
    ifstream file;
    file.open(FILE_LOCATION);
    vector<string> movies;
    string tempMovie;
    do {
        getline(file, tempMovie);
        movies.emplace_back(tempMovie);
    } while (!tempMovie.empty());
    int randomIndex = (int) ((random() * clock() / CLOCKS_PER_SEC) % movies.size());
    model.setMovie(movies[randomIndex]);
    model.setLives(LIVES);
    model.setInGame(true);
    string tempString;
    for (int i = 0; i < model.getMovie().length() - 1; i++) {
        tempString.append("*");
    }
    model.setGuessMovie(tempString);
    file.close();
}

void HangmanController::userEntry(const char *entry) {
    string movie = model.getMovie();
    movie.resize(movie.size() - 1);
    if (entry == movie)
        model.setInGame(false);
    else
        updateLives();
}

void HangmanController::checkLetter(const string &letter, int start = 0) {
    if (usedLetters.find(letter) == string::npos)
        usedLetters.append(letter);
    if (model.getGuessMovie().find(letter, start) == string::npos) {
        string newMovie = model.getGuessMovie();
        u_long result = model.getMovie().find(letter, start);
        if (result != string::npos) {
            int pos = (int) result;
            newMovie[pos] = letter[0];
            model.setGuessMovie(newMovie);
            if (model.getGuessMovie().find('*') == string::npos) {
                model.setInGame(false);
                return;
            }
            return checkLetter(letter, pos + 1);
        }
        if (start == 0)
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

string HangmanController::getGuessMovie() {
    return model.getGuessMovie();
}

string HangmanController::getMovie() {
    return model.getMovie();
}

