//
// Created by noname on 02.07.23.
//
#include <utility>
#include <spdlog/spdlog.h>

#include "App.h"
#include "DragonSlayer.h"
#include "MeleeStrategy.h"
#include "ProjectileStrategy.h"
#include "SpellStrategy.h"

const std::string App::red_dragon_emerges = "Red dragon emerges.";
const std::string App::green_dragon_spotted = "Green dragon spotted ahead!";
const std::string App::black_dragon_lands = "Black dragon lands before you.";

void App::run() const 
{
    spdlog::info(green_dragon_spotted);
    dp::DragonSlayer dragonSlayer(std::make_shared<dp::MeleeStrategy>());
    dragonSlayer.goToBattle();
    spdlog::info(red_dragon_emerges);
    dragonSlayer.changeStrategy(std::make_shared<dp::ProjectileStrategy>());
    dragonSlayer.goToBattle();
    spdlog::info(black_dragon_lands);
    dragonSlayer.changeStrategy(std::make_shared<dp::SpellStrategy>());
    dragonSlayer.goToBattle();
}
