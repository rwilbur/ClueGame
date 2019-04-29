//
// Created by wilip on 4/3/2019.
//

#include "GameLoop.h"
#include "Graphics.h"

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
void GameLoop::startGame(int argc, char *argv[]){
    cout << "----------------------------- \n \n Welcome to Clue! \n \n----------------------------- " << endl;
    graphicsPlay(argc, argv);
    initRooms();
    initSuspects();
//    initWeapons();
    setRunning(true);
    
    while(getRunning()){
        // game logic goes here
    }
};

/**
 * Build array of suspects
 */
void GameLoop::initSuspects(){
    for (int i = Mustard; i != Plum; ++i) {
        try {
            SuspectType sus(static_cast<SuspectType>(i));
            suspects.push_back(sus);
        } catch(const std::exception &exc) {
            std::cerr << exc.what();
        }
    }
}

/**
 * Build array of rooms
 */
void GameLoop::initRooms(){
    for (int i = Study; i != Ballroom; ++i) {
        try {
            RoomType room(static_cast<RoomType>(i));
            rooms.push_back(room);
        } catch(const std::exception &exc) {
            std::cerr << exc.what();
        }
    }
}

/**
 * Ends the game loop
 */
void GameLoop::endGame(){
    setRunning(false);
};
