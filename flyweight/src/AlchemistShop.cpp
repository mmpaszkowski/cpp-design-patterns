//
// Created by noname on 4/21/24.
//

#include "AlchemistShop.h"

namespace dp
{
void AlchemistShop::drinkPotions() const
{
    spdlog::info("Drinking top shelf potions");
    std::ranges::for_each(top_shelf, [](const auto& elem) { elem->drink(); });
    spdlog::info("Drinking bottom shelf potions");
    std::ranges::for_each(bottom_shelf, [](const auto& elem) { elem->drink(); });
}
} // namespace dp