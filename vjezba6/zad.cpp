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
        cout << "Write a single letter, guess the whole word or write \"status\" to check current state:" << endl;
        string s;
        cin >> s;
        if (s == "status") {
            view.displayCurrentProgress();
            view.displayUsedLetters();
        } else if (s.size() == 1)
            view.controller.checkLetter(s[0], 0);
        else
            view.controller.userEntry(s.c_str());
        view.displayHangman();
        view.displayCurrentProgress();
    }
    cout << "GAME ENDED!" << endl;

}
