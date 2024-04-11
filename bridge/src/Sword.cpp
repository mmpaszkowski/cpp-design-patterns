//
// Created by noname on 4/10/24.
//

#include "Sword.h"

namespace dp
{

Sword::~Sword() = default;

void Sword::wield() const noexcept
{
    std::cout << "The sword is wielded." << std::endl;
    enchantment->onActivate();
}
void Sword::swing() const noexcept
{
    std::cout << "The sword is swung." << std::endl;
    enchantment->apply();
}
void Sword::unwield() const noexcept
{
    std::cout << "The sword is unwielded." << std::endl;
    enchantment->onDeactivate();
}

} // namespace dp