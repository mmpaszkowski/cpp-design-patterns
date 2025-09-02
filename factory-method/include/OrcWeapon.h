//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#ifndef ORC_WEAPON_H
#define ORC_WEAPON_H
#include "Weapon.h"

namespace dp
{
class OrcWeapon : public Weapon
{
public:
    constexpr explicit OrcWeapon(const WeaponType weapon_type) noexcept  : weapon_type_(weapon_type) { }
    ~OrcWeapon() override;
    [[nodiscard]] std::string toString() const override;
    [[nodiscard]] WeaponType getWeaponType() const noexcept override;

private:
    WeaponType weapon_type_;
};
}

#endif //ORC_WEAPON_H
