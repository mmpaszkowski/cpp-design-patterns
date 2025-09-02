//
// Created by Mateusz Paszkowski on 10.04.2024.
//

#include "SoulEatingEnchantment.h"

namespace dp
{
SoulEatingEnchantment::~SoulEatingEnchantment() = default;
void SoulEatingEnchantment::onActivate() const noexcept { std::cout << "The item spreads bloodlust." << std::endl; }
void SoulEatingEnchantment::apply() const noexcept { std::cout << "The item eats the soul of enemies." << std::endl; }
void SoulEatingEnchantment::onDeactivate() const noexcept { std::cout << "Bloodlust slowly disappears." << std::endl; }
} // namespace dp