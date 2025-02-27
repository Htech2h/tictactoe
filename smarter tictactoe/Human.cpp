//
// Created by htech2 on 2025/02/27.
//

#include "Human.h"
#include <iostream>
using namespace std;

void Human::humanPlay() {
    int row, col;
    cout << "Player " << player << ", enter your move (row and col): ";
    cin >> row >> col;
    if(board->makeMove(row,col,player)){
        cout<<""<<endl;
    }else{
        cout<<"Invalid Move try again";
        if(!board->isFull()){
            humanPlay();
        }
    }
}
