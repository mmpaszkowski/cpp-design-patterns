#include "Weather.h"

namespace dp
{
    Weather::Weather() : currentWeather(dp::WeatherType::Sunny) {}

    void Weather::addObserver(std::shared_ptr<WeatherObserver> observer) {
        observers.push_back(observer);
    }

    void Weather::removeObserver(std::shared_ptr<WeatherObserver> observer) {
        observers.remove(observer); 
    }

    void Weather::timePasses()
    {
        this->currentWeather = next(this->currentWeather);
        spdlog::info("The weather changed to " + toString(this->currentWeather) + ".");
        notifyObservers();
    }

    void Weather::notifyObservers()
    {
        for (auto&& obs : this->observers)
            obs->update(currentWeather);
    }

    size_t Weather::size() const noexcept 
    { 
        return this->observers.size(); 
    }

    WeatherType Weather::getCurrentWeather() const noexcept 
    { 
        return this->currentWeather;
    }
} // namespace dp