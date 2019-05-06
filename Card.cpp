//
// Created by wilip on 5/5/2019.
//

#include "Card.h"

Card::Card(std::string titleVar) {
    title = titleVar;
}

std::string Card::getTitle() const {
    return title;
}