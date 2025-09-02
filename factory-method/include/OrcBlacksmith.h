//
// Created by Mateusz Paszkowski on 28.03.2024.
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
