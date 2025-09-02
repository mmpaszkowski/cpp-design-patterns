//
// Created by Mateusz Paszkowski on 17.04.2024.
//

#ifndef HOLY_WATER_POTION_H
#define HOLY_WATER_POTION_H

#include "Potion.h"
#include <spdlog/spdlog.h>

namespace dp
{
class HolyWaterPotion : public Potion
{
public:
    ~HolyWaterPotion() override;
    void drink() const override;
};
} // namespace dp

#endif //HOLY_WATER_POTION_H
