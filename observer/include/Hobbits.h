//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef HOBBITS_H
#define HOBBITS_H

#include "WeatherObserver.h"
#include <iostream>
#include <spdlog/spdlog.h>

namespace dp
{
class Hobbits : public WeatherObserver
{
public:
    void update(const WeatherType currentWeather) const override
    {
        spdlog::info("The hobbits are facing " + toString(currentWeather) + " weather now.");
    }
};
} // namespace dp

#endif //HOBBITS_H