//
// Created by htech2 on 2025/02/27.
//

#include "Game.h"
#include <iostream>
using namespace std;


using namespace std;

// Pass Board reference to Human and Bot
Game::Game() : board(), human(&board), bot(&board, &human), player('X') {}

void Game::changePlayer() {
    player = (player == human.player) ? bot.player : human.player;
}

void Game::play() {
    board.display();
    while (true) {
        if (player == human.player) {
            human.humanPlay();
        } else {
            bot.botPlay();
        }

        board.display();

        if (board.checkWin(player)) {
            cout << "The " << (player == human.player ? "Human" : "Bot") << " won!" << endl;
            break;
        } else if (board.isFull()) {
            cout << "It's a draw!" << endl;
            break;
        }

        changePlayer();
    }
}

