//
// Created by htech2 on 2025/02/27.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H
#include "Board.h"
#include "Human.h"
#include "Bot.h"


class Game {
private:
    Board board;
    Human human;
    Bot bot;
    char player;
public:
    Game();
    void play();
    void changePlayer();
};


#endif //GAME_GAME_H
