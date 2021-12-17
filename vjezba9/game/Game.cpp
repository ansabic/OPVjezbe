//
// Created by antonio on 17. 12. 2021..
//

#include <iostream>
#include "Game.h"

void Game::startGame() {
    if (players.empty())
        std::cout << "Players not inserted!" << std::endl;
    else {
        gameState = true;
        while (gameState) {

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
    for (Player player: players) {
        if (player)
    }
}
