//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#include "AngryState.h"
#include "Mammoth.h"

namespace dp
{
AngryState::AngryState(std::weak_ptr<Mammoth> mammoth) : mammoth(mammoth) {}


void AngryState::onEnterState() const { spdlog::info(mammoth.lock()->toString() + " is furious!"); }
void AngryState::observe() const { spdlog::info(mammoth.lock()->toString() + " gets angry!"); }
} // namespace dp
