//
// Created by rwilbur on 5/5/19.
//

#include "Player.h"

bool Player::haveCard(Card card) {
    for(Card checkCard: playerCards){
        if (card.getTitle() == checkCard.getTitle()){
            return true;
        }
    }
    return false;
}

bool Player::haveCard(Card card1, Card card2, Card card3) {
    for(Card checkCard: playerCards){
        if (card1.getTitle() == checkCard.getTitle()
            or card2.getTitle() == checkCard.getTitle()
            or card3.getTitle() == checkCard.getTitle())
        {
            return true;
        }
    }
    return false;
}

std::string Player::getName(){
    return character.getTitle();
}