//
// Created by wilip on 4/5/2019.
//

#ifndef CLUEGAME_SUSPECT_H
#define CLUEGAME_SUSPECT_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

enum SuspectType {
    Mustard,
    Scarlet,
    Peacock,
    White,
    Plum
};

class Suspect : public Card{
public:

    /**
     * Default constructor
     */
    Suspect() = default;

    /**
     * Constructor with type
     * @param type
     */
    Suspect(SuspectType type);

    /**
     * Set the title
     * @param newTitle
     */
    void setTitle(string newTitle);

    bool operator<(const Suspect& other) const;
};

#endif //CLUEGAME_SUSPECT_H
