//
// Created by antonio on 25. 11. 2021..
//
#ifndef OPVJEZBE_HANGMANMODEL_H
#define OPVJEZBE_HANGMANMODEL_H
using namespace std;

class HangmanModel {
    string movie;
    int lives;
    bool inGame;
    string guessMovie;

public:
    string getMovie();

    void setMovie(string newMovie);

    int getLives() const;

    void setLives(int newLives);

    bool isInGame() const;

    void setInGame(bool newInGame);

    const string &getGuessMovie() const;

    void setGuessMovie(const string &newGuessMovie);

    HangmanModel();
};


#endif //OPVJEZBE_HANGMANMODEL_H
