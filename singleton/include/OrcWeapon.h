//
// Created by noname on 3/28/24.
//

#ifndef ORC_WEAPON_H
#define ORC_WEAPON_H
#include "Weapon.h"

namespace dp
{
class OrcWeapon : public Weapon
{
public:
    constexpr explicit OrcWeapon(WeaponType weapon_type) noexcept;
    constexpr OrcWeapon(const OrcWeapon& other) noexcept;
    constexpr OrcWeapon(OrcWeapon&& other) noexcept;
    constexpr OrcWeapon& operator=(const OrcWeapon& other) noexcept;
    constexpr OrcWeapon& operator=(OrcWeapon&& other) noexcept;
    constexpr ~OrcWeapon() override;

    constexpr bool                      operator==(const OrcWeapon& other) const;
    [[nodiscard]] constexpr std::string toString() const override;
    [[nodiscard]] constexpr WeaponType  getWeaponType() const noexcept override;

private:
    WeaponType weapon_type_;
};

constexpr OrcWeapon::OrcWeapon(const WeaponType weapon_type) noexcept : weapon_type_(weapon_type) {}
constexpr OrcWeapon::OrcWeapon(const OrcWeapon& other) noexcept            = default;
constexpr OrcWeapon::OrcWeapon(OrcWeapon&& other) noexcept                 = default;
constexpr OrcWeapon& OrcWeapon::operator=(const OrcWeapon& other) noexcept = default;
constexpr OrcWeapon& OrcWeapon::operator=(OrcWeapon&& other) noexcept      = default;
constexpr OrcWeapon::~OrcWeapon()                                          = default;
constexpr std::string OrcWeapon::toString() const { return "an orcish "s + dp::toString(this->weapon_type_); }
constexpr WeaponType  OrcWeapon::getWeaponType() const noexcept { return this->weapon_type_; }
constexpr bool        OrcWeapon::operator==(const OrcWeapon& other) const { return this->weapon_type_ == other.weapon_type_; }
} // namespace dp

#endif //ORC_WEAPON_H
