//
// Created by noname on 4/21/24.
//

#ifndef IVORY_TOWER_H
#define IVORY_TOWER_H

#include "WizardTower.h"
#include <spdlog/spdlog.h>
namespace dp
{
class IvoryTower : public WizardTower
{
public:
    constexpr IvoryTower() noexcept = default;
    void enter(std::unique_ptr<Wizard>&& wizard) override;
};
} // namespace dp


#endif //IVORY_TOWER_H
