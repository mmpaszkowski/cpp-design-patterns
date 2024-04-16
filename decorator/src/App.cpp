//
// Created by noname on 02.07.23.
//
#include "App.h"
#include "ClubbedTroll.h"
#include <SimpleTroll.h>
#include <spdlog/spdlog.h>

using namespace dp;

void App::run() const {
    // simple troll
    spdlog::info("A simple looking troll approaches.");
    SimpleTroll troll;
    troll.attack();
    troll.fleeBattle();
    spdlog::info("Simple troll power: {}.\n", troll.getAttackPower());

    // change the behavior of the simple troll by adding a decorator
    spdlog::info("A troll with huge club surprises you.");
    ClubbedTroll clubbedTroll(std::make_unique<SimpleTroll>());
    clubbedTroll.attack();
    clubbedTroll.fleeBattle();
    spdlog::info("Clubbed troll power: {}.\n", clubbedTroll.getAttackPower());
}
