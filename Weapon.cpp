//
// Created by rwilbur on 4/5/19.
//

#include "Weapon.h"

#include <stdexcept>

Weapon::Weapon(WeaponType weapon){
    weaponType = weapon;
    switch(weapon){
        case Candlestick:   name = "Candlestick";
        case Revolver:      name = "Revolver";
        case Rope:          name = "Rope";
        case Knife:         name = "Knife";
        case Wrench:        name = "Wrench";
        case Pipe:          name = "Pipe";

        default: throw std::invalid_argument("Unknown weapon type");
    }
}

std::string Weapon::getName() {
    return name;
}

WeaponType Weapon::getType() {
    return weaponType;
}
