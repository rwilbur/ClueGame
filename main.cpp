#include <iostream>
#include "GameLoop.h"
#include "Graphics.h"
//#include "Card.h"


int main(int argc, char *argv[]) {

    GameLoop game;

    game.printBoard();

    game.startGame(argc, argv);

    return 0;
}