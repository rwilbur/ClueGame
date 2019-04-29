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

using namespace std;

enum SuspectType {
    Mustard,
    Scarlet,
    Peacock,
    White,
    Plum
};

class Suspect{
public:


    /**
     * Name of the suspect
     */
    string title;


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
     * Get the title
     * @return
     */
    string getTitle() const;


    /**
     * Set the title
     * @param newTitle
     */
    void setTitle(string newTitle);

    bool operator<(const Suspect& other) const;
};

#endif //CLUEGAME_SUSPECT_H
