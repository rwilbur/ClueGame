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

    vector<GameBoardSquare> squares;

    vector<Room> rooms;


};

#endif //CLUEGAME_GAMEBOARD_H


