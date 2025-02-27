//
// Created by htech2 on 2025/02/27.
//

#include "Bot.h"
#include <iostream>
using namespace std;

void Bot::botPlay() {
    // CHECK IF BOT CAN MAKE WINNING MOVE
    for(int i=0; i<3; i++)
    {
        for(int j=0; j <3; j++)
        {
            if(board->makeMove(i,j,player)){
                if(board->checkWin(player)){
                    return;
                }
                board->underRide(i,j);
            }
        }
    }
    // CHECK IF BOT CAN PREVENT HUMAN FROM WINNING
    for(int i=0; i<3; i++)
    {
        for(int j=0; j <3; j++)
        {
            if(board->makeMove(i,j,human->player)){
                if(board->checkWin(human->player)){
                    board->overRide(i,j,player);
                    return;
                }
                board->underRide(i,j);
            }
        }
    }

    //play any empty position
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board->makeMove(i,j,player)){
                return;
            }
        }
    }
}
