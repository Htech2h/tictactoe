//
// Created by htech2 on 2025/02/27.
//

#include "Board.h"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = ' ';
        }
    }
}

void Board::display() {
    cout << "       " << endl;
    for (int i = 0; i < 3; i++) {
        cout  << "  ";
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -----" << endl;
    }
    cout << endl;
}

void Board::overRide(int row, int col, char player) {
    grid[row][col] = player;
}

void Board::underRide(int row, int col) {
    grid[row][col] = ' ';
}

bool Board::makeMove(int row, int col, char player) {
    if(row >=0 && row < 3 && col >= 0 && col<3 && grid[row][col] == ' '){
        grid[row][col] = player;
        return true;
    }
    return  false;
}

bool Board::isFull() {
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool Board::checkWin(char player) {
    for(int i=0; i<3; i++) {
        if ((grid[i][0] == player && grid[i][1] == player && grid[i][2] == player)
            || (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player)) {
            return true;
        }
    }
    if((grid[0][2]==player && grid[1][1]==player && grid[2][0]==player) ||
       (grid[0][0] == player && grid[1][1] == player && grid[2][2] == player)){
        return true;
    }

    return false;
}
