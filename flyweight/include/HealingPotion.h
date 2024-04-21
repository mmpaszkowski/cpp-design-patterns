//
// Created by noname on 4/17/24.
//

#ifndef HEALING_POTION_H
#define HEALING_POTION_H

#include "Potion.h"
#include <spdlog/spdlog.h>

namespace dp
{
class HealingPotion : public Potion
{
public:
    ~HealingPotion() override;
    void drink() const override;
};
} // namespace dp

#endif //HEALING_POTION_H
