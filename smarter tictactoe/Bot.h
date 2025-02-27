//
// Created by htech2 on 2025/02/27.
//

#ifndef GAME_BOT_H
#define GAME_BOT_H
#include "Board.h"
#include "Human.h"


class Bot {
private:
    Board* board;
    Human* human;
public:
    char player = 'O';
    Bot(Board* b, Human* h) : board(b), human(h) {}
    void botPlay();

};


#endif //GAME_BOT_H
