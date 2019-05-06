//
// Created by rwilbur on 4/5/19.
//

#ifndef CLUEGAME_WEAPON_H
#define CLUEGAME_WEAPON_H

#include <string>
#include "Card.h"

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
     * Gets the name of the weapon as a string
     * @return string: The Weapon name
     */
    std::string getTitle();

    /**
     * Gets the weapon type as the WeaponType enum
     * @return WeaponType: The weapon type
     */
    WeaponType getType();

    bool operator<(const Weapon& other) const;

private:
    std::string title;
    WeaponType weaponType;

};


#endif //CLUEGAME_WEAPON_H
