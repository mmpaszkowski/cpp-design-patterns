//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#ifndef ELF_BLACKSMITH_H
#define ELF_BLACKSMITH_H
#include "Blacksmith.h"

namespace dp
{
class ElfBlacksmith : public Blacksmith
{
public:
    ~ElfBlacksmith() override {}

    [[nodiscard]] std::unique_ptr<Weapon> manufactureWeapon(WeaponType weaponType) const override;
    [[nodiscard]] std::string toString() const override;
};
}

#endif //ELF_BLACKSMITH_H
