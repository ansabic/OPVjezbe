//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "Game.h"
#include "../players/ComputerPlayer.h"
#include "game_constants.h"

void Game::startGame() {
    if (players.empty())
        std::cout << "Players not inserted!" << std::endl;
    else {
        gameState = true;
        while (gameState) {
            promptValues();
            calculate();
        }
    }
}

Game::Game() {
    gameState = false;
}

void Game::addPlayer(Player player) {
    players.push_back(player);
}

void Game::endGame() {
    gameState = false;
}

void Game::promptValues() {
    for(Player player: players) {
        if(player.getType() == "human") {
            system("CLS");
            system("clear");
            std::cout << player.getName() << " it' your turn! Press any key to continue!" << std::endl;
            getchar();
            HumanPlayer human = player.asHuman();
            human.askForValue();
            human.askForGuess();
        }
        else if(player.getType() == "computer") {
            ComputerPlayer computer = player.asComputer();
            computer.generateValue();
            computer.generateGuess((int)players.size());
        }
    }

}

void Game::calculate() {
    int sum = 0;
    for(const Player& player: players) {
        sum += player.getValue();
    }
    for(Player& player: players) {
        if(player.getGuess() == sum)
            player.addScore();
        if(player.getScore() == GOAL_SCORE){
            gameOverMessage();
            endGame();
        }
    }

}

void Game::gameOverMessage() {
    std::cout << "GAME OVER!" << std::endl;
}
