//
// Created by Mateusz Paszkowski on 21.04.2024.
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