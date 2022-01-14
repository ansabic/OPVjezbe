//
// Created by antonio on 17. 12. 2021..
//

#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer(const std::string& newName) : Player("computer", newName) {

}

void ComputerPlayer::generateGuess(int noOfPlayers) {
    int sum = getValue();
    for(int i = 0; i < noOfPlayers - 1; i++) {
        int rand = (int)( random() % 3);
        switch(rand) {
            case 0:
                sum += 1;
                break;
            case 1:
                sum += 2;
                break;
            case 2:
                sum += 5;
                break;
            default:
                sum += 1;
        }
    }
    setGuess(sum);
}

void ComputerPlayer::generateValue() {
    int rand = (int)( random() % 3) + 1;
    setValue(rand);
}
