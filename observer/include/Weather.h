//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef WEATHER_H
#define WEATHER_H

#include "WeatherType.h"
#include "WeatherObserver.h"
#include <memory>
#include <list>
#include <spdlog/spdlog.h>

namespace dp
{
class Weather
{
public:
    Weather();

    void addObserver(std::shared_ptr<WeatherObserver> observer);
    void removeObserver(std::shared_ptr<WeatherObserver> observer);
    void timePasses();
    [[nodiscard]] size_t      size() const noexcept;
    [[nodiscard]] WeatherType getCurrentWeather() const noexcept;

private:
    void notifyObservers();

private:
    WeatherType                                 currentWeather;
    std::list<std::shared_ptr<WeatherObserver>> observers;
};
} // namespace dp

#endif //WEATHER_H
