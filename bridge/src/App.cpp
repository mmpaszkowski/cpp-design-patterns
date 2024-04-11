//
// Created by noname on 02.07.23.
//

#include <iostream>
#include "App.h"
#include "Sword.h"
#include "Hammer.h"
#include "SoulEatingEnchantment.h"
#include "FlyingEnchantment.h"

using namespace dp;

void App::run() const {
    std::cout << "The knight receives an enchanted sword." << std::endl;
    auto enchantedSword = Sword(std::make_unique<SoulEatingEnchantment>());
    enchantedSword.wield();
    enchantedSword.swing();
    enchantedSword.unwield();

    std::cout << "The valkyrie receives an enchanted hammer." << std::endl;
    auto hammer = Hammer(std::make_unique<FlyingEnchantment>());
    hammer.wield();
    hammer.swing();
    hammer.unwield();
}
