//
// Created by Mateusz Paszkowski on 29.11.2024.
//
#include <utility>

#include "App.h"
#include "HalflingThief.h"
#include "HitAndRunMethod.h"
#include "SubtleMethod.h"

void App::run() const {

    dp::HalflingThief thief(std::make_shared<dp::HitAndRunMethod>());
    thief.steal();
    thief.changeMethod(std::make_shared<dp::SubtleMethod>());
    thief.steal();
}
