//
// Created by noname on 4/16/24.
//


#include "SimpleTroll.h"

namespace dp
{

void SimpleTroll::attack() { spdlog::info("The troll tries to grab you!"); }
int  SimpleTroll::getAttackPower() { return 10; }
void SimpleTroll::fleeBattle() { spdlog::info("The troll shrieks in horror and runs away!"); }
}