//
// Created by noname on 4/10/24.
//

#ifndef WEAPON_H
#define WEAPON_H

namespace dp
{
class Enchantment;

class Weapon
{
public:
    virtual ~Weapon()                                                                  = default;
    constexpr virtual void                             wield() const noexcept          = 0;
    constexpr virtual void                             swing() const noexcept          = 0;
    constexpr virtual void                             unwield() const noexcept        = 0;
    [[nodiscard]] constexpr virtual const Enchantment& getEnchantment() const noexcept = 0;
};
} // namespace dp

#endif //WEAPON_H
