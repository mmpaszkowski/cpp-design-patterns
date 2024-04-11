//
// Created by noname on 4/10/24.
//

#ifndef HAMMER_H
#define HAMMER_H

#include "Enchantment.h"
#include "Weapon.h"
#include <iostream>
#include <memory>
namespace dp
{
class Hammer : public Weapon
{
public:
    constexpr explicit Hammer(std::unique_ptr<Enchantment> enchantment) noexcept : enchantment(std::move(enchantment)) {}
    ~Hammer() override;
    void wield() const noexcept override;
    void swing() const noexcept override;
    void unwield() const noexcept override;
    [[nodiscard]] constexpr const Enchantment& getEnchantment() const noexcept override;

private:
    std::unique_ptr<Enchantment> enchantment;
};

constexpr const Enchantment& Hammer::getEnchantment() const noexcept { return *enchantment; }


} // namespace dp


#endif //HAMMER_H
