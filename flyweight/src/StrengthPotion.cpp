//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#include "StrengthPotion.h"

namespace dp
{
StrengthPotion::~StrengthPotion() = default;

void StrengthPotion::drink() const
{
    spdlog::info("You feel strong. (Potion=" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "\")");
}
} // namespace dp