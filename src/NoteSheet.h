//
// Created by rwilbur on 4/23/19.
//

#ifndef CLUEGAME_NOTESHEET_H
#define CLUEGAME_NOTESHEET_H


#include "Suspect.h"
#include "Weapon.h"
#include "Room.h"
#include <map>


class NoteSheet {
public:
    NoteSheet() = default;
    ~NoteSheet() = default;

protected:

    /**
     * False means has not been seen, true means it has been
     * checked of the list and isn't that thing
     */
    std::map<Suspect, bool> suspectList  =  {{Suspect(Mustard),     false},
                                             {Suspect(Scarlet),     false},
                                             {Suspect(Peacock),     false},
                                             {Suspect(White),       false},
                                             {Suspect(Plum),        false}};

    std::map<Weapon, bool>  weaponList   = {{Weapon(Candlestick),   false},
                                            {Weapon(Knife),         false},
                                            {Weapon(Revolver),      false},
                                            {Weapon(Rope),          false},
                                            {Weapon(Wrench),        false}};

    std::map<Room, bool>    roomList     = {{Room(Study),           false},
                                            {Room(Hall),            false},
                                            {Room(Lounge),          false},
                                            {Room(Library),         false},
                                            {Room(Billard),         false},
                                            {Room(Conservatory),    false},
                                            {Room(Dining),          false},
                                            {Room(Kitchen),         false},
                                            {Room(Ballroom),        false}};

};


#endif //CLUEGAME_NOTESHEET_H
