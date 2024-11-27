//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#include "PeacefulState.h"
#include "Mammoth.h"

namespace dp
{
PeacefulState::PeacefulState(std::weak_ptr<Mammoth> mammoth) : mammoth(mammoth) {}

void PeacefulState::onEnterState() const { spdlog::info(mammoth.lock()->toString() + " calms down."); }
void PeacefulState::observe() const { spdlog::info(mammoth.lock()->toString() + " is calm and peaceful."); }
} // namespace dp
