//
// Created by noname on 11.11.2024.
//
#include <utility>
#include <spdlog/spdlog.h>
#include "App.h"
#include "Hobbits.h"
#include "Weather.h"
#include "Orcs.h"

void App::run() const {

	dp::Weather weather;
    auto orcs = std::make_shared<dp::Orcs>();
    auto hobbits = std::make_shared<dp::Hobbits>();
    weather.addObserver(orcs);
    weather.addObserver(hobbits);

    weather.timePasses();
    weather.timePasses();
    weather.timePasses();
    weather.timePasses();
}
