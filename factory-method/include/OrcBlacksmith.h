//
// Created by noname on 3/28/24.
//

#ifndef ORC_BLACKSMITH_H
#define ORC_BLACKSMITH_H
#include "Blacksmith.h"

namespace dp
{
class OrcBlacksmith : public Blacksmith
{
public:
    ~OrcBlacksmith() override {}

    [[nodiscard]] std::unique_ptr<Weapon> manufactureWeapon(WeaponType weaponType) const override;
    [[nodiscard]] std::string toString() const override;
};
}

#endif //ORC_BLACKSMITH_H
