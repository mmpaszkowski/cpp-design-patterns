//
// Created by noname on 3/28/24.
//

#ifndef WEAPON_TYPE_H
#define WEAPON_TYPE_H

#include <iostream>
#include <string>

namespace dp
{

enum class WeaponType
{
    ShostSword,
    Spear,
    Axe,
    Undefined
};

std::ostream& operator << (std::ostream& os, WeaponType weapon_type);
[[nodiscard]] std::string toString(WeaponType weapon_type);

}

#endif //WEAPON_TYPE_H
