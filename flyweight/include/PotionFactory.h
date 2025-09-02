//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#ifndef POTION_FACTORY_H
#define POTION_FACTORY_H

#include <map>
#include <memory>

#include "HealingPotion.h"
#include "HolyWaterPotion.h"
#include "InvisibilityPotion.h"
#include "PoisonPotion.h"
#include "Potion.h"
#include "PotionType.h"
#include "StrengthPotion.h"

namespace dp
{
class PotionFactory
{
public:
    [[nodiscard]] std::shared_ptr<const Potion> createPotion(PotionType type);

private:
    std::map<PotionType, std::shared_ptr<const Potion>> potions;
};
} // namespace dp

#endif //POTION_FACTORY_H
