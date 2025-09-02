//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#include "InvisibilityPotion.h"

namespace dp
{
InvisibilityPotion::~InvisibilityPotion() = default;

void InvisibilityPotion::drink() const
{
    spdlog::info("You become invisible. (Potion=" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "\")");
}
} // namespace dp