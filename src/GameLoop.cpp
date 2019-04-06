//
// Created by wilip on 4/3/2019.
//

#include "GameLoop.h"


/**
 * Default Constructor
 */
GameLoop::GameLoop(): running(false){

};

/**
 * Get running
 * @return
 */
bool GameLoop::getRunning(){
    return running;
};

/**
 * Set running
 * @param value
 */
void GameLoop::setRunning(bool value){
    running = value;
};

/**
 * Starts the game loop
 */
void GameLoop::startGame(){
    cout << "----------------------------- \n \n Welcome to Clue! \n \n----------------------------- " << endl;
    setRunning(true);
    while(getRunning()){
        // game logic goes here
    }
};

/**
 * Ends the game loop
 */
void GameLoop::endGame(){
    setRunning(false);
};
