//
// Created by wilip on 4/5/2019.
//

#include "Room.h"


Room::Room(){};

string Room::getTitle(){
    return title;
}

void Room::setTitle(string newTitle) {
    title = newTitle;
}