//
// Created by noname on 3/28/24.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include "WeaponType.h"

namespace dp
{

class Weapon
{
public:
    [[nodiscard]] constexpr virtual WeaponType getWeaponType() const noexcept = 0;
    [[nodiscard]] constexpr virtual std::string toString() const = 0;
    virtual ~Weapon() = default;
};
}

#endif //WEAPON_H
