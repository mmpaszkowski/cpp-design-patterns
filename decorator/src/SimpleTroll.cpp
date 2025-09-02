//
// Created by Mateusz Paszkowski on 16.04.2024.
//

#include "SimpleTroll.h"

namespace dp
{

void SimpleTroll::attack() { spdlog::info("The troll tries to grab you!"); }
int  SimpleTroll::getAttackPower() noexcept { return 10; }
void SimpleTroll::fleeBattle() { spdlog::info("The troll shrieks in horror and runs away!"); }
} // namespace dp