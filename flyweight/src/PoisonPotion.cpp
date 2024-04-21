//
// Created by noname on 4/21/24.
//

#include "PoisonPotion.h"

namespace dp
{
PoisonPotion::~PoisonPotion() = default;

void PoisonPotion::drink() const
{
    spdlog::info("Urgh! This is poisonous. (Potion=" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "\")");
}
} // namespace dp