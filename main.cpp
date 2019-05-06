#include <iostream>
#include "GameLoop.h"

int main(int argc, char *argv[]) {

    GameLoop game;

//    game.printBoard();

    game.startGame(argc, argv);

    return 0;
}