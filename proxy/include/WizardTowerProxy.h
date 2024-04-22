//
// Created by noname on 4/21/24.
//

#ifndef WIZARD_TOWER_PROXY_H
#define WIZARD_TOWER_PROXY_H


#include "WizardTower.h"

namespace dp
{
class WizardTowerProxy : public WizardTower
{
public:
    explicit WizardTowerProxy(std::unique_ptr<WizardTower>&& tower) noexcept;
    void enter(std::unique_ptr<Wizard>&& wizard) override;

private:
    std::unique_ptr<WizardTower> tower;
    size_t                       num_wizards;

private:
    static const int num_wizard_allowed = 3;
};
} // namespace dp

#endif //WIZARD_TOWER_PROXY_H
