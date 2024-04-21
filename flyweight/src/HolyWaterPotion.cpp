//
// Created by noname on 4/21/24.
//

#include "HolyWaterPotion.h"

namespace dp
{
HolyWaterPotion::~HolyWaterPotion() = default;

void HolyWaterPotion::drink() const
{
    spdlog::info("You feel healed. (Potion=" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "\")");
}
}