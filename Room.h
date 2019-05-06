//
// Created by wilip on 4/5/2019.
//

#ifndef CLUEGAME_ROOM_H
#define CLUEGAME_ROOM_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

enum RoomType {
    Study,
    Hall,
    Lounge,
    Library,
    Billiard,
    Conservatory,
    Dining,
    Kitchen,
    Ballroom
};


class Room : public Card{
public:

    /**
     * Name of the room
     */
    string doorDestination;

    /**
     * Default constructor
     */
    Room() = default;

    /**
     * Constructor with Type definition
     * @param type
     */
    Room(RoomType type);

    /**
     * Set title of the room
     * @param newTitle
     */
    void setTitle(string newTitle);


    bool operator<(const Room& other) const;
};

#endif //CLUEGAME_ROOM_H
