//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef WEATHER_OBSERVER_H
#define WEATHER_OBSERVER_H

#include "WeatherType.h"
#include <iostream>

namespace dp
{
class WeatherObserver
{
public:
    virtual ~WeatherObserver() = default;
    virtual void update(const WeatherType currentWeather) const = 0;
};
} // namespace dp

#endif //WEATHER_OBSERVER_H
