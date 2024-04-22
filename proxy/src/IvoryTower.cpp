//
// Created by noname on 4/22/24.
//

#include "IvoryTower.h"

namespace dp
{
void IvoryTower::enter(std::unique_ptr<Wizard>&& wizard)
{
    spdlog::info(wizard->getName() + " enters the tower.");
}
}