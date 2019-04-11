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

using namespace std;

enum Type {
    study,
    hall,
    lounge,
    library,
    billard,
    conservatory,
    dining,
    kitchen,
    ballroom
};


class Room{
public:


    /**
     * Name of the room
     */
    string title;


    /**
     * Default constructor
     */
    Room();


    /**
     * Constructor with Type definition
     * @param type
     */
    Room(Type type);


        /**
         * Get the title of the room
         * @return
         */
    string getTitle();


    /**
     * Set title of the room
     * @param newTitle
     */
    void setTitle(string newTitle);
};

#endif //CLUEGAME_ROOM_H
