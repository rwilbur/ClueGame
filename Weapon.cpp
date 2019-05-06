//
// Created by rwilbur on 4/5/19.
//

#include "Weapon.h"

Weapon::Weapon(WeaponType weapon){
    weaponType = weapon;
    try {
        switch (weapon) {
            case Candlestick:
                title = "Candlestick";
                break;
            case Revolver:
                title = "Revolver";
                break;
            case Rope:
                title = "Rope";
                break;
            case Knife:
                title = "Knife";
                break;
            case Wrench:
                title = "Wrench";
                break;
            case Pipe:
                title = "Pipe";
                break;
        }
    } catch (int &e) {
        cout << "An exception occurred in initSuspects. Exception: " << e << '\n';
    }
}

WeaponType Weapon::getType() {
    return weaponType;
}

bool Weapon::operator<(const Weapon& other) const
{
    return weaponType < other.weaponType;
}