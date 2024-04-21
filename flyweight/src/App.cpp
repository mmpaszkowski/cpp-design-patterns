//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "AlchemistShop.h"

using namespace dp;

void App::run() const {
    // create the alchemist shop with the potions
    AlchemistShop alchemistShop;
    // a brave visitor enters the alchemist shop and drinks all the potions
    alchemistShop.drinkPotions();
}
