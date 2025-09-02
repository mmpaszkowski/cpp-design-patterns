//
// Created by Mateusz Paszkowski on 17.04.2024.
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
