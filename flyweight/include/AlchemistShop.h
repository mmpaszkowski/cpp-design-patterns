//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#ifndef ALCHEMIST_SHOP_H
#define ALCHEMIST_SHOP_H

#include "PotionFactory.h"
#include "spdlog/spdlog.h"
#include <algorithm>
#include <list>

namespace dp
{
class AlchemistShop
{
    std::vector<std::shared_ptr<const Potion>> top_shelf;
    std::vector<std::shared_ptr<const Potion>> bottom_shelf;

public:
    AlchemistShop()
    {
        PotionFactory factory;
        top_shelf.push_back(factory.createPotion(PotionType::Invisibility));
        top_shelf.push_back(factory.createPotion(PotionType::Invisibility));
        top_shelf.push_back(factory.createPotion(PotionType::Strength));
        top_shelf.push_back(factory.createPotion(PotionType::Healing));
        top_shelf.push_back(factory.createPotion(PotionType::Invisibility));
        top_shelf.push_back(factory.createPotion(PotionType::Strength));
        top_shelf.push_back(factory.createPotion(PotionType::Healing));
        top_shelf.push_back(factory.createPotion(PotionType::Healing));

        bottom_shelf.push_back(factory.createPotion(PotionType::Poison));
        bottom_shelf.push_back(factory.createPotion(PotionType::Poison));
        bottom_shelf.push_back(factory.createPotion(PotionType::Poison));
        bottom_shelf.push_back(factory.createPotion(PotionType::HolyWater));
        bottom_shelf.push_back(factory.createPotion(PotionType::HolyWater));
    }

    [[nodiscard]] constexpr const std::vector<std::shared_ptr<const Potion>>& getTopShelf() const noexcept
    {
        return top_shelf;
    }
    [[nodiscard]] constexpr const std::vector<std::shared_ptr<const Potion>>& getBottomShelf() const noexcept
    {
        return bottom_shelf;
    }

    void drinkPotions() const;
};
} // namespace dp


#endif //ALCHEMIST_SHOP_H
