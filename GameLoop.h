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

using namespace std;

class GameLoop{

public:

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
    void startGame(int argc, char *argv[]);

    /**
     * Ends the game loop
     */
    void endGame();
};

#endif //CLUEGAME_GAMELOOP_H
