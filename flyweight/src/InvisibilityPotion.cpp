//
// Created by noname on 4/21/24.
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