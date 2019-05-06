//
// Created by rwilbur on 5/5/19.
//

#ifndef CLUEGAME_PLAYER_H
#define CLUEGAME_PLAYER_H

#include "Suspect.h"
#include "Card.h"
#include <string>

class Player {
public:
    Player():playerCoordinatesX(0), playerCoordinatesY(0){

    };

    Player(Suspect &playerChar, unsigned int x, unsigned int y){
        character = playerChar;
        playerCoordinatesX = x;
        playerCoordinatesY = y;
    };

    ~Player() = default;

    std::string getName();

    vector<Card> playerCards;

    bool haveCard(Card card);
    bool haveCard(Card card1, Card card2, Card card3);

    Suspect character;

    unsigned int playerCoordinatesX;
    unsigned int playerCoordinatesY;

};


#endif //CLUEGAME_PLAYER_H
