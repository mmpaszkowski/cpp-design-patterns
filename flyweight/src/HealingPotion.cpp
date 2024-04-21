//
// Created by noname on 4/21/24.
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