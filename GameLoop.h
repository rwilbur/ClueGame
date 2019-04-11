//
// Created by wilip on 4/3/2019.
//

#ifndef CLUEGAME_GAMELOOP_H
#define CLUEGAME_GAMELOOP_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Room.h"
#include "Suspect.h"

using namespace std;

class GameLoop{

public:

    vector<Room> rooms;

    vector<Suspect> suspects;

//    vector<Weapon> weapons;

    /**
     * Determines if the game loop should exit
     */
    bool running;

    /**
     * Default Constructor
     */
    GameLoop();

    /**
     * Get running
     * @return
     */
    bool getRunning();

    /**
     * Set running
     * @param value
     */
    void setRunning(bool value);

    /**
     * Starts the game loop
     */
    void startGame();

    /**
     * Ends the game loop
     */
    void endGame();

    /**
     * Build array of rooms
     */
    void initRooms();

    /**
     * Build array of suspects
     */
    void initSuspects();

    };

#endif //CLUEGAME_GAMELOOP_H
