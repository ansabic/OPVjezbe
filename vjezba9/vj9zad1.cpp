#include "game/Game.h"
#include "players/ComputerPlayer.h"

//
// Created by antonio on 17. 12. 2021..
//
int main() {
    Game newGame = Game();
    HumanPlayer humanPlayer1 = HumanPlayer("player1");
    HumanPlayer humanPlayer2 = HumanPlayer("player2");
    ComputerPlayer computerPlayer1 = ComputerPlayer("comp1");

    newGame.addPlayer(humanPlayer1);
}
