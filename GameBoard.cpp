//
// Created by wilip on 4/25/2019.
//

#include "GameBoard.h"


GameBoard::GameBoard(){
    for (int i = 0; i < 20; ++i) {
        vector<GameBoardSquare> newVector;
        for(int j = 0; j < 20; j++){
            if(i < 5 && j < 8) {
                GameBoardSquare newSquare(false, true, "", "Study");
                newVector.push_back(newSquare);
            } else if(i > 6 && i < 12 && j < 8){
                GameBoardSquare newSquare(false, true, "", "Library");
                newVector.push_back(newSquare);
            } else if(i > 12 && i < 18 && j < 8){
                GameBoardSquare newSquare(false, true, "", "Billiard Room");
                newVector.push_back(newSquare);
            } else if(i > 19 && j < 8){
                GameBoardSquare newSquare(false, true, "", "Conservatory");
                newVector.push_back(newSquare);
            } else if(i < 8 && j > 9 && j < 16){
                GameBoardSquare newSquare(false, true, "", "Hall");
                newVector.push_back(newSquare);
            } else if(i > 17 && j > 8 && j < 17){
                GameBoardSquare newSquare(false, true, "", "Ballroom");
                newVector.push_back(newSquare);
            } else if(i < 7 && j > 17){
                GameBoardSquare newSquare(false, true, "", "Lounge");
                newVector.push_back(newSquare);
            } else if(i > 9 && i < 16 && j > 16){
                GameBoardSquare newSquare(false, true, "", "Dining Room");
                newVector.push_back(newSquare);
            } else if(i > 18 && j > 17){
                GameBoardSquare newSquare(false, true, "", "Kitchen");
                newVector.push_back(newSquare);
            }
        }
        squares.push_back(newVector);
    }
};

vector<vector<GameBoardSquare>> GameBoard::getBoard(){
    return squares;
}

void GameBoard::draw(){
    int x =20;
    int y = 20;
    for (int i = 0; i < squares.size(); ++i){
        vector<GameBoardSquare> rows = squares[i];

        for (int j = 0; j < rows.size(); ++j){
            GameBoardSquare gbs = rows[j];
            gbs.draw(x,y);
            x += 25;
        }
        x=20;
        y += 25;
    }
}
