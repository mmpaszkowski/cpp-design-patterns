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
    constexpr explicit ElfWeapon(WeaponType weapon_type) noexcept;
    constexpr ElfWeapon(const ElfWeapon& other) noexcept;
    constexpr ElfWeapon(ElfWeapon&& other) noexcept;
    constexpr ElfWeapon& operator=(const ElfWeapon& other) noexcept;
    constexpr ElfWeapon& operator=(ElfWeapon&& other) noexcept;
    constexpr ~ElfWeapon() override;

    constexpr bool                      operator==(const ElfWeapon& other) const;
    [[nodiscard]] constexpr std::string toString() const override;
    [[nodiscard]] constexpr WeaponType  getWeaponType() const noexcept override;

private:
    WeaponType weapon_type_;
};

constexpr ElfWeapon::ElfWeapon(const WeaponType weapon_type) noexcept : weapon_type_(weapon_type) {}
constexpr ElfWeapon::ElfWeapon(const ElfWeapon& other) noexcept            = default;
constexpr ElfWeapon::ElfWeapon(ElfWeapon&& other) noexcept                 = default;
constexpr ElfWeapon& ElfWeapon::operator=(const ElfWeapon& other) noexcept = default;
constexpr ElfWeapon& ElfWeapon::operator=(ElfWeapon&& other) noexcept      = default;
constexpr ElfWeapon::~ElfWeapon()                                          = default;

constexpr bool        ElfWeapon::operator==(const ElfWeapon& other) const { return weapon_type_ == other.weapon_type_; }
constexpr std::string ElfWeapon::toString() const { return "an elven "s + dp::toString(this->weapon_type_); }
constexpr WeaponType  ElfWeapon::getWeaponType() const noexcept { return this->weapon_type_; }
} // namespace dp

#endif //ELF_WEAPON_H
