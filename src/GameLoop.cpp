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
            Suspect sus(static_cast<SuspectType>(i));
            suspects.push_back(sus);
        } catch(exception& e) {
            printf("An error occurred: %s\n", e);
        }
    }
}

/**
 * Build array of rooms
 */
void GameLoop::initRooms(){
    for (int i = Study; i != Ballroom; ++i) {
        try {
            Room room(static_cast<RoomType>(i));
            rooms.push_back(room);
        } catch(exception& e) {
            printf("An error occurred: %s\n", e);
        }
    }
}

/**
 * Ends the game loop
 */
void GameLoop::endGame(){
    setRunning(false);
};
