//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#include <Weather.h>
#include <Hobbits.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(weather, add_observer)
{
    dp::Weather weather;
    auto        hobbits = std::make_shared<dp::Hobbits>();
    weather.addObserver(hobbits);

    ASSERT_EQ(weather.size(), 1);
}

TEST(weather, remove_observer)
{
    dp::Weather weather;
    auto        hobbits = std::make_shared<dp::Hobbits>();
    weather.addObserver(hobbits);
    weather.removeObserver(hobbits);

    ASSERT_EQ(weather.size(), 0);
}

TEST(weather, timePasses)
{
    dp::Weather weather;
    weather.timePasses();

    ASSERT_EQ(weather.getCurrentWeather(), dp::WeatherType::Rainy);
}

class MockWeatherObserver : public dp::WeatherObserver
{
public:
    MockWeatherObserver() = default;
    ~MockWeatherObserver() = default;

public:
    MOCK_METHOD(void, update, (const dp::WeatherType currentWeather), (const, override));
};

TEST(weather, notifyObservers)
{
    dp::Weather weather;
    auto        mockWeatherObserver = std::make_shared<MockWeatherObserver>();
    weather.addObserver(mockWeatherObserver);

    EXPECT_CALL(*mockWeatherObserver, update(dp::WeatherType::Rainy)).Times(1);
    weather.timePasses();
}