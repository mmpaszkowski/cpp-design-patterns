//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef ORCS_H
#define ORCS_H

#include "WeatherObserver.h"
#include <iostream>
#include <spdlog/spdlog.h>

namespace dp
{
class Orcs : public WeatherObserver
{
public:
    void update(const WeatherType currentWeather) const override
    {
        spdlog::info("The orcs are facing " + toString(currentWeather) + " weather now.");
    }
};
} // namespace dp

#endif //ORCS_H
