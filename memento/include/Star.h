//
// Created by noname on 23.10.2024
//

#ifndef STAR_H
#define STAR_H

#include "StarType.h"
#include "StarMemento.h"
#include <iostream>
#include <format>

using namespace std::literals::string_literals;

namespace dp
{
class Star
{
private:
    class StarMementoInternal : public StarMemento
    {
    public:
        constexpr StarMementoInternal(StarType starType, size_t starAge, size_t starMass) noexcept;

        constexpr StarType getType() const noexcept { return this->type; }
        constexpr int      getAge()  const noexcept { return this->ageYears; }
        constexpr int      getMass() const noexcept { return this->massTons; }

    private:
        StarType type;
        size_t   ageYears;
        size_t   massTons;
    };

public:
    constexpr Star(StarType starType, size_t starAge, size_t startMass) noexcept;
    constexpr void               timePasses();
    std::unique_ptr<StarMemento> getMemento();
    void                         setMemento(StarMemento& memento);
    std::string                  toString();

private:
    StarType type;
    size_t   ageYears;
    size_t   massTons;
};

inline constexpr Star::StarMementoInternal::StarMementoInternal(StarType starType,
                                                                size_t   starAge,
                                                                size_t   starMass) noexcept
    : type(starType), ageYears(starAge), massTons(starMass)
{
}

inline constexpr Star::Star(StarType starType, size_t starAge, size_t startMass) noexcept
    : type(starType), ageYears(starAge), massTons(startMass)
{
}

inline constexpr void Star::timePasses()
{
    ageYears *= 2;
    massTons *= 8;
    switch (type)
    {
        case StarType::RedGiant: type = StarType::WhiteDwarf; break;
        case StarType::Sun: type = StarType::RedGiant; break;
        case StarType::Supernova: type = StarType::Dead; break;
        case StarType::WhiteDwarf: type = StarType::Supernova; break;
        case StarType::Dead:
            ageYears *= 2;
            massTons = 0;
            break;
        default: throw std::runtime_error("Unexpected StarType enum value");
    }
}
} // namespace dp

#endif //STAR_H
