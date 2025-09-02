//
// Created by Mateusz Paszkowski on 21.04.2024.
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