//
// Created by noname on 4/21/24.
//

#include <AlchemistShop.h>
#include <gtest/gtest.h>
#include <set>

using namespace dp;

TEST(flyweight, shop_test)
{
    AlchemistShop shop;

    auto& bottom_shelf = shop.getBottomShelf();
    ASSERT_EQ(5, bottom_shelf.size());

    auto& top_shelf = shop.getTopShelf();
    ASSERT_EQ(8, top_shelf.size());

    std::vector<std::shared_ptr<const Potion>> allPotions;
    allPotions.insert(allPotions.end(), top_shelf.begin(), top_shelf.end());
    allPotions.insert(allPotions.end(), bottom_shelf.begin(), bottom_shelf.end());

    // There are 13 potion instances, but only 5 unique instance types
    ASSERT_EQ(13, allPotions.size());
    ASSERT_EQ(5, std::set<std::shared_ptr<const Potion>>(allPotions.begin(), allPotions.end()).size());
}