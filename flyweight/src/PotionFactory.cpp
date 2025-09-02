//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#include "PotionFactory.h"

namespace dp
{
std::shared_ptr<const Potion> PotionFactory::createPotion(PotionType type)
{
    if (!potions.contains(type))
    {
        switch (type)
        {
            case PotionType::Healing: potions[PotionType::Healing] = std::make_shared<const HealingPotion>(); break;
            case PotionType::HolyWater: potions[PotionType::HolyWater] = std::make_shared<const HolyWaterPotion>(); break;
            case PotionType::Invisibility: potions[PotionType::Invisibility] = std::make_shared<const InvisibilityPotion>(); break;
            case PotionType::Poison: potions[PotionType::Poison] = std::make_shared<const PoisonPotion>(); break;
            case PotionType::Strength: potions[PotionType::Strength] = std::make_shared<const StrengthPotion>(); break;
            default: throw std::runtime_error("Undefined potion type");
        }
    }
    return potions[type];
}
}