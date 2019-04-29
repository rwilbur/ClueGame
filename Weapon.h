//
// Created by rwilbur on 4/5/19.
//

#ifndef CLUEGAME_WEAPON_H
#define CLUEGAME_WEAPON_H

#include <string>

enum WeaponType {
    Rope,
    Candlestick,
    Revolver,
    Knife,
    Wrench,
    Pipe
};

class Weapon {


public:
    Weapon() = default;
    Weapon(WeaponType weapon);

    ~Weapon() = default;
    /**
     * Gets the name of the weapon as a string
     * @return string: The Weapon name
     */
    std::string getName();
    /**
     * Gets the weapon type as the WeaponType enum
     * @return WeaponType: The weapon type
     */
    WeaponType getType();

private:
    std::string name;
    WeaponType weaponType;

};


#endif //CLUEGAME_WEAPON_H
