//
// Created by wilip on 4/25/2019.
//

#ifndef CLUEGAME_GAMEBOARDSQUARE_H
#define CLUEGAME_GAMEBOARDSQUARE_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class GameBoardSquare{
public:

    /**
     * Default Constructor
     */
    GameBoardSquare() = default;
    ~GameBoardSquare() = default;

    /**
     * True if a player is currently on this square
     */
    bool containsPlayer = false;

    /**
     * True if this squre is within a room on the board
     */
    bool isRoom = false;

    /**
     * If this square is within a room on the gameboard, this is the name of the room
     */
    std::string roomName = "";
};

#endif //CLUEGAME_GAMEBOARDSQUARE_H
