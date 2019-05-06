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


    // Set player in a square
    board.squares[0][8].setContainsPlayer("Scarlet");  //Scarlet is the player
    playerCoordinatesXY[0] = 0;
    playerCoordinatesXY[1] = 8;

    bool moveNotAccuse = true;

    while(getRunning()){


        //moveNotAccuse = true; // Todo: Player needs to decide this

        //If the player is in a room and you have decided to accuse
        if(board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].getIsRoom() && not moveNotAccuse){
            //Todo: accusation screen
        }
        else{
            playerMoveTurn();
        }

        //Todo: move computer player


    }
};


void GameLoop::playerMoveTurn(){


    int numSpacesAllowedToMove = rollDice();
    for(; numSpacesAllowedToMove > 0; numSpacesAllowedToMove--){

        //Todo: Move player to an adjacent space via gui


        if(board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].getIsRoom()){
            numSpacesAllowedToMove++; //Make it so we can move without a penalty if we are in a room
        }
    }

};

void GameLoop::movePlayer(Direction dir){
    switch(dir){
        case north:
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].containsPlayer = false;
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].playerName = "";

            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]--].setContainsPlayer("Scarlet");
        case east:
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].containsPlayer = false;
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].playerName = "";

            board.squares[playerCoordinatesXY[0]++][playerCoordinatesXY[1]].setContainsPlayer("Scarlet");
        case south:
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].containsPlayer = false;
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].playerName = "";

            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]++].setContainsPlayer("Scarlet");
        case west:
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].containsPlayer = false;
            board.squares[playerCoordinatesXY[0]][playerCoordinatesXY[1]].playerName = "";

            board.squares[playerCoordinatesXY[0]--][playerCoordinatesXY[1]].setContainsPlayer("Scarlet");




    }
}

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
    return suspectGuess.title == suspect.title && roomGuess.title == room.title && weaponGuess.getTitle() == weapon.getTitle();
}

//////////////////// UTILITY FUNCTIONS /////////////////////

int GameLoop::rollDice(){
    int roll;
    int min = 1;
    int max = 6;

    roll = rand() % (max - min + 1) + min;

    return roll;
};

void GameLoop::printBoard() {
    for (int i = 0; i < board.getBoard().size(); ++i) {
        for (int j = 0; j < board.getBoard()[i].size(); j++) {
            GameBoardSquare currentSquare = board.getBoard()[i][j];
            cout << currentSquare.getRoomName() << endl;
        }
    }
}