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
#include "Weapon.h"
#include "GameBoard.h"

using namespace std;

class GameLoop{

public:

    vector<Room> rooms;

    vector<Suspect> suspects;

    vector<Weapon> weapons;

    Weapon weapon;

    Suspect suspect;

    Room room;

    GameBoard board;

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
     * @param argc
     * @param argv
     */
    void startGame(int argc, char *argv[]);

    /**
     * Ends the game loop
     */
    void endGame();

    /**
     * Randomly choose a weapon, suspect, and room
     */
    void initScenario();

    /**
     * Build array of rooms
     */
    void initRooms();

    /**
     * Build array of suspects
     */
    void initSuspects();

    /**
     * Build array of weapons
     */
    void initWeapons();

    /**
     * Roll Dice
     */
    int rollDice();

    /**
     * Make an accusation and return whether it is valid
     * @return
     */
    bool makeAccusation(Suspect suspect, Room room, Weapon weapon);

    /**
     * Print the game board
     */
    void printBoard();
    };

#endif //CLUEGAME_GAMELOOP_H
