//
// Created by rwilbur on 4/5/19.
//

#ifndef CLUEGAME_WEAPON_H
#define CLUEGAME_WEAPON_H

#include <string>
class Weapon {

public:
    std::string weaponName;

    Weapon();

    Weapon(std::string name);

    ~Weapon(){};

    std::string getWeaponName();

};


#endif //CLUEGAME_WEAPON_H
