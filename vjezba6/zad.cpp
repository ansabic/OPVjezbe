#include <iostream>
#include "constants.h"
#include "HangmanView.h"

using namespace std;

int main() {
    HangmanView view = HangmanView();
    cout << "HANGMAN GAME" << endl;
    cout << "You have " << LIVES << " lives." << " Good luck!" << endl;
    //"Game" Loop
    while (view.controller.checkIfGameIsOver()) {
        view.displayCurrentProgress();
        view.displayUsedLetters();
        cout << "Write a single letter or guess the whole word:" << endl;
        string s;
        cin >> s;
        if (s.size() != 1)
            view.controller.userEntry(s.c_str());
        else
            view.controller.checkLetter(s, 0);
        view.displayHangman();
    }
    cout << "GAME ENDED!" << endl;
    cout << "The movie was: " << view.getMovie() << endl;

}
