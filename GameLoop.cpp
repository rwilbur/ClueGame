//
// Created by wilip on 4/3/2019.
//

#include "GameLoop.h"
#include "Graphics.h"
#include "GameBoard.h"

/**
 * Default Constructor
 */
GameLoop::GameLoop(): running(false){};

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
    initWeapons();
    initScenario();
    setRunning(true);

    while(getRunning()){
        // game logic goes here
    }
};

void GameLoop::initScenario(){
    int randomWeapon = rand() % (5 - 1 + 1) + 1;
    int randomSuspect = rand() % (5 - 1 + 1) + 1;
    int randomRoom = rand() % (9 - 1 + 1) + 1;

    weapon = weapons[randomWeapon];
    suspect = suspects[randomSuspect];
    room = rooms[randomRoom];
};

/**
 * Build array of suspects
 */
void GameLoop::initSuspects() {
    for (int i = Mustard; i != Plum; ++i) {
        try {
            Suspect sus(static_cast<SuspectType>(i));
            suspects.push_back(sus);
        } catch (int &e) {
            cout << "An exception occurred in initSuspects. Exception: " << e << '\n';
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
        } catch (int &e) {
            cout << "An exception occurred in initRooms. Exception: " << e << '\n';
        }
    }
}

/**
 * Build array of weapons
 */
void GameLoop::initWeapons(){
    for (int i = Rope; i != Pipe; ++i) {
        try {
            Weapon weapon(static_cast<WeaponType>(i));
            weapons.push_back(weapon);
        } catch (int &e) {
            cout << "An exception occurred in initRooms. Exception: " << e << '\n';
        }
    }
}

/**
 * Ends the game loop
 */
void GameLoop::endGame(){
    setRunning(false);
};


//////////////////// GAME EVENTS /////////////////////


bool GameLoop::makeAccusation(Suspect suspectGuess, Room roomGuess, Weapon weaponGuess){
    return suspectGuess.title == suspect.title && roomGuess.title == room.title && weaponGuess.getName() == weapon.getName();
}

//////////////////// UTILITY FUNCTIONS /////////////////////

int GameLoop::rollDice(){
    int roll;
    int min = 1;
    int max = 6;

    roll = rand() % (max - min + 1) + min;

    return roll;
};

void GameLoop::printBoard(){
    for (int i = 0; i < board.getBoard().size(); ++i) {
        for(int j = 0; j < board.getBoard()[i].size(); j++){
            GameBoardSquare currentSquare = board.getBoard()[i][j];
            cout << currentSquare.getRoomName() << endl;
        }
    }
}




