//
// Created by Mateusz Paszkowski on 16.04.2024.
//

#include "ClubbedTroll.h"

namespace dp
{

void ClubbedTroll::attack()
{
    decorated->attack();
    spdlog::info("The troll swings at you with a club!");
}
}