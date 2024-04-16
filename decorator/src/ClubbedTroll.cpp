//
// Created by noname on 4/16/24.
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