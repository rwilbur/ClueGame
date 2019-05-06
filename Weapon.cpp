//
// Created by rwilbur on 4/5/19.
//

#include "Weapon.h"

#include <stdexcept>

Weapon::Weapon(WeaponType weapon){
    weaponType = weapon;
    switch(weapon){
        case Candlestick:   title = "Candlestick";
        case Revolver:      title = "Revolver";
        case Rope:          title = "Rope";
        case Knife:         title = "Knife";
        case Wrench:        title = "Wrench";
        default: throw std::invalid_argument("Unknown weapon type");
    }
}

WeaponType Weapon::getType() {
    return weaponType;
}

bool Weapon::operator<(const Weapon& other) const
{
    return weaponType < other.weaponType;
}