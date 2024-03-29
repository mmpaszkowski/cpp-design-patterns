//
// Created by noname on 3/28/24.
//

#ifndef BLACKSMITH_H
#define BLACKSMITH_H

#include <memory>
#include "Weapon.h"

namespace dp
{
class Blacksmith
{
public:
    [[nodiscard]] virtual std::unique_ptr<Weapon> manufactureWeapon(WeaponType weaponType) const = 0;
    [[nodiscard]] virtual std::string toString() const = 0;
    virtual ~Blacksmith() = default;
};
}
#endif //BLACKSMITH_H
