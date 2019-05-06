//
// Created by rwilbur on 4/5/19.
//

#ifndef CLUEGAME_WEAPON_H
#define CLUEGAME_WEAPON_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

enum WeaponType {
    Rope,
    Candlestick,
    Revolver,
    Knife,
    Wrench,
    Pipe
};

class Weapon : public Card {


public:

    /**
     * Default constructor
     */
    Weapon() = default;
    ~Weapon() = default;

    /**
     * Constructor with WeaponType
     * @param weapon
     */
    Weapon(WeaponType weapon);

    /**
     * Gets the weapon type as the WeaponType enum
     * @return WeaponType: The weapon type
     */
    WeaponType getType();

    bool operator<(const Weapon& other) const;

private:
    WeaponType weaponType;

};


#endif //CLUEGAME_WEAPON_H
