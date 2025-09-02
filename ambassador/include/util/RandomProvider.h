//
// Created by Mateusz Paszkowski on 10.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_RANDOM_PROVIDER_H
#define CPP_DESIGN_PATTERNS_RANDOM_PROVIDER_H

#include <functional>
#include <random>

class RandomProvider {
public:
    [[nodiscard]] virtual double random() = 0;
};

class RandDouble : public RandomProvider {
private:
    std::uniform_real_distribution<double> distribution;
    std::mt19937 generator;
public:
    RandDouble();
    [[nodiscard]] double random() override;

private:
    std::function<double()> r;
};

class StaticRandomProvider : public RandomProvider {
private:
    double value;
public:
    explicit StaticRandomProvider(double value);
    [[nodiscard]] double random() override;

private:
    std::function<double()> r;
};

#endif //CPP_DESIGN_PATTERNS_RANDOM_PROVIDER_H
