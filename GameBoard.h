//
// Created by wilip on 4/25/2019.
//

#ifndef CLUEGAME_GAMEBOARD_H
#define CLUEGAME_GAMEBOARD_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Room.h"
#include "GameBoardSquare.h"

class GameBoard{
public:

    /**
     * Default Constructor
     */
    GameBoard();

    /**
     * Two-dimensional vector of board squares that models the game board
     */
    vector<vector<GameBoardSquare>> squares;

    /**
     * Get vector of squares on the board
     * @return
     */
    vector<vector<GameBoardSquare>> getBoard();

    /**
     * Get vector of rooms on the board
     * @return
     */
    vector<Room> getRooms();

    /**
     * draws all squares in gameboard
     */
     void draw();

    /**
     * Game Board
     *
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] [] [] [] x  x  x  x  x  x  [] x  [] [] [] [] []
     * x x x x  x  x  [] [] [] [] [] [] [] [] [] [] x x x  x  x  x
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []
     * x x x x  x  x  [] [] [] [] [] [] [] [] [] [] x x x  x  x  x
     * [] [] [] [] x  [] [] x  x x  x  x x x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     * [] [] [] [] x  [] [] x  [] [] [] [] x  [] x  [] [] [] [] []
     */
};

#endif //CLUEGAME_GAMEBOARD_H


