//
// Created by noname on 4/21/24.
//

#ifndef WIZARD_TOWER_H
#define WIZARD_TOWER_H

#include "Wizard.h"
#include <memory>

namespace dp
{
class WizardTower
{
public:
    virtual constexpr ~WizardTower() noexcept            = default;
    virtual void enter(std::unique_ptr<Wizard>&& wizard) = 0;
};
} // namespace dp

#endif //WIZARD_TOWER_H
