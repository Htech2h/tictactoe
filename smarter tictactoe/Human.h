//
// Created by htech2 on 2025/02/27.
//

#ifndef GAME_HUMAN_H
#define GAME_HUMAN_H
#include "Board.h"


class Human {
private:
    Board* board;
public:
    char player= 'X';
    Human(Board* b) : board(b) {}
    void humanPlay();

};


#endif //GAME_HUMAN_H
