//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#include "HealingPotion.h"

namespace dp
{
HealingPotion::~HealingPotion() = default;

void HealingPotion::drink() const
{
    spdlog::info("You feel healed. (Potion=" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "\")");
}
}