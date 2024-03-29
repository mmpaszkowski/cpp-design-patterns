//
// Created by noname on 3/28/24.
//

#ifndef ELF_WEAPON_H
#define ELF_WEAPON_H
#include "Weapon.h"

namespace dp
{

class ElfWeapon : public Weapon
{
public:
    constexpr explicit ElfWeapon(const WeaponType weapon_type) noexcept  : weapon_type_(weapon_type) { }
    ~ElfWeapon() override;
    [[nodiscard]] std::string toString() const override;
    [[nodiscard]] WeaponType getWeaponType() const noexcept override;

private:
    WeaponType weapon_type_;
};

}

#endif //ELF_WEAPON_H
