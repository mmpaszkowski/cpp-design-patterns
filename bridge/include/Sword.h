//
// Created by noname on 4/10/24.
//

#ifndef SWORD_H
#define SWORD_H

#include "Enchantment.h"
#include "Weapon.h"
#include <iostream>
#include <memory>
namespace dp
{
class Sword : public Weapon
{
public:
    constexpr explicit Sword(std::unique_ptr<Enchantment> enchantment) noexcept : enchantment(std::move(enchantment)) {}
    ~Sword() override;
    void                                       wield() const noexcept override;
    void                                       swing() const noexcept override;
    void                                       unwield() const noexcept override;
    [[nodiscard]] constexpr const Enchantment& getEnchantment() const noexcept override;

private:
    std::unique_ptr<Enchantment> enchantment;
};

constexpr const Enchantment& Sword::getEnchantment() const noexcept { return *enchantment; }

} // namespace dp


#endif //SWORD_H
