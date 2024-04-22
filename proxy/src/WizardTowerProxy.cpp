//
// Created by noname on 4/22/24.
//

#include "WizardTowerProxy.h"
#include "Wizard.h"
#include <spdlog/spdlog.h>

namespace dp
{
WizardTowerProxy::WizardTowerProxy(std::unique_ptr<WizardTower>&& tower) noexcept
    : tower(std::move(tower)), num_wizards{0}
{
}
void WizardTowerProxy::enter(std::unique_ptr<Wizard>&& wizard)
{
    if (num_wizards < num_wizard_allowed)
    {
        tower->enter(std::move(wizard));
        num_wizards++;
    }
    else
    {
        spdlog::info(wizard->getName() + " is not allowed to enter!");
    }
}


} // namespace dp