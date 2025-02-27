//
// Created by htech2 on 2025/02/27.
//

#ifndef GAME_BOARD_H
#define GAME_BOARD_H


class Board {
private:
    char grid[3][3];
public:
    Board();
    void display();
    void overRide(int,int,char);
    void underRide(int,int);
    bool makeMove(int,int,char);
    bool isFull();
    bool checkWin(char);

};


#endif //GAME_BOARD_H
