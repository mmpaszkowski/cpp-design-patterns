//
// Created by Mateusz Paszkowski on 29.06.2024.
//

#ifndef WEATHER_TYPE_H
#define WEATHER_TYPE_H

#include <iostream>

namespace dp
{
    using namespace std::literals::string_literals;

    enum class WeatherType
    {
        Sunny,
        Rainy,
        Windy,
        Cold
    };

    constexpr std::ostream& operator<<(std::ostream& os, const WeatherType weatherType)
    {
        switch (weatherType)
        {
            case WeatherType::Sunny: os << "Sunny"; break;
            case WeatherType::Rainy: os << "Rainy"; break;
            case WeatherType::Windy: os << "Windy"; break;
            case WeatherType::Cold: os << "Cold"; break;
            default: throw std::runtime_error("Unexpected WeatherType enum value");
        }
        return os;
    }

    [[nodiscard]] constexpr std::string toString(const WeatherType weatherType)
    {
        switch (weatherType)
        {
            case WeatherType::Sunny: return "Sunny"s;
            case WeatherType::Rainy: return "Rainy"s;
            case WeatherType::Windy: return "Windy"s;
            case WeatherType::Cold: return "Cold"s;
            default: throw std::runtime_error("Unexpected WeatherType enum value");
        }
    }

    [[nodiscard]] constexpr WeatherType next(const WeatherType weatherType)
    {
        switch (weatherType)
        {
            case WeatherType::Sunny: return WeatherType::Rainy;
            case WeatherType::Rainy: return WeatherType::Windy;
            case WeatherType::Windy: return WeatherType::Cold;
            case WeatherType::Cold: return WeatherType::Sunny;
            default: throw std::runtime_error("Unexpected WeatherType enum value");
        }
    }
} // namespace dp


#endif //WEATHER_TYPE_H
