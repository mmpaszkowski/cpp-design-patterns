//
// Created by Mateusz Paszkowski on 02.04.2024.
//

#ifndef HERO_FACTORY_H
#define HERO_FACTORY_H

#include "Beast.h"
#include "Mage.h"
#include "Warlord.h"
#include <memory>

namespace dp
{
class HeroFactory
{
public:
    constexpr virtual ~HeroFactory()                                               = default;
    [[nodiscard]] constexpr virtual std::unique_ptr<Mage>    createMage() const    = 0;
    [[nodiscard]] constexpr virtual std::unique_ptr<Warlord> createWarlord() const = 0;
    [[nodiscard]] constexpr virtual std::unique_ptr<Beast>   createBeast() const   = 0;
};
} // namespace dp


#endif //HERO_FACTORY_H
