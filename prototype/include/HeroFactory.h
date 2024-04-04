//
// Created by noname on 4/2/24.
//

#ifndef HERO_FACTORY_H
#define HERO_FACTORY_H

#include "Mage.h"
#include "Warlord.h"
#include "Beast.h"
#include <memory>

namespace dp {
    class HeroFactory
    {
    public:
        [[nodiscard]] constexpr virtual std::unique_ptr<Mage> createMage() const = 0;
        [[nodiscard]] constexpr virtual std::unique_ptr<Warlord> createWarlord() const = 0;
        [[nodiscard]] constexpr virtual std::unique_ptr<Beast> createBeast() const = 0;
        constexpr virtual ~HeroFactory() = default;
    };
}



#endif //HERO_FACTORY_H
