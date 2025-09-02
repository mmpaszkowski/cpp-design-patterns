//
// Created by Mateusz Paszkowski on 10.04.2024.
//

#ifndef FLYING_ENCHANTMENT_H
#define FLYING_ENCHANTMENT_H

#include "Enchantment.h"
#include <iostream>

namespace dp
{
class FlyingEnchantment : public Enchantment
{
public:
    ~FlyingEnchantment() override;
    void onActivate() const noexcept override;
    void apply() const noexcept override;
    void onDeactivate() const noexcept override;
};
} // namespace dp


#endif //FLYING_ENCHANTMENT_H
