//
// Created by Mateusz Paszkowski on 10.04.2024.
//

#include "Hammer.h"

namespace dp
{

Hammer::~Hammer() = default;

void Hammer::wield() const noexcept
{
    std::cout << "The hammer is wielded." << std::endl;
    enchantment->onActivate();
}
void Hammer::swing() const noexcept
{
    std::cout << "The hammer is swung." << std::endl;
    enchantment->apply();
}
void Hammer::unwield() const noexcept
{
    std::cout << "The hammer is unwielded." << std::endl;
    enchantment->onDeactivate();
}
} // namespace dp
