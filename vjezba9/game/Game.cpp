//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "Game.h"
#include "../players/ComputerPlayer.h"
#include "game_constants.h"
#include "../players/HumanPlayer.h"

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

void Game::addPlayer(const Player& player) {
    players.push_back(player);
}

void Game::endGame() {
    gameState = false;
}

void Game::promptValues() {
    std::vector<Player> newPlayers;
    for(Player player: players) {
        int value = 0;
        int guess = 0;
        if (player.getType() == "human") {
            system("CLS");
            system("clear");
            std::cout << player.getName() << " it' your turn!" << std::endl;

            value = HumanPlayer::askForValue();
            guess = HumanPlayer::askForGuess();
        } else if (player.getType() == "computer") {
            value = ComputerPlayer::generateValue();
            guess = ((ComputerPlayer&&) player).generateGuess((int) players.size());
        }
        player.setValue(value);
        player.setGuess(guess);
        Player newPlayer = player;
        newPlayers.push_back(newPlayer);
    }
    players = newPlayers;
}

void Game::calculate() {
    int sum = 0;
    for(Player player: players) {
        sum += player.getValue();
        std::cout << player.getName() << "picked " << player.getScore() << std::endl;
    }
    std::cout << "Sum was " << sum << "." << std::endl;
    for(Player& player: players) {
        std::cout << player.getName() << " guessed " << player.getGuess() << std::endl;
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
