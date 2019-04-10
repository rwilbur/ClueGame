//
// Created by rwilbur on 4/5/19.
//

#include "Weapon.h"

Weapon::Weapon() {
    weaponName = "";
}

Weapon::Weapon(std::string name) {
    weaponName = name;
}

std::string Weapon::getWeaponName() {
    return weaponName;
}

