//
// Created by wilip on 4/25/2019.
//

#include "GameBoard.h"


GameBoard::GameBoard(){
    for (int i = 0; i < 20; ++i) {
        vector<GameBoardSquare> newVector;
        for(int j = 0; j < 20; j++){
            GameBoardSquare newSquare;
            newVector.push_back(newSquare);
        }
        squares.push_back(newVector);
    }
};


vector<vector<GameBoardSquare>> squares;

vector<Room> rooms;

