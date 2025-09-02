//
// Created by Mateusz Paszkowski on 22.04.2024.
//

#include "IvoryTower.h"

namespace dp
{
void IvoryTower::enter(std::unique_ptr<Wizard>&& wizard)
{
    spdlog::info(wizard->getName() + " enters the tower.");
}
}