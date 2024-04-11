//
// Created by noname on 4/10/24.
//

#ifndef SOUL_EATING_ENCHANTMENT_H
#define SOUL_EATING_ENCHANTMENT_H

#include "Enchantment.h"
#include <iostream>

namespace dp
{
class SoulEatingEnchantment : public Enchantment
{
public:
    ~SoulEatingEnchantment() override;
    void onActivate() const noexcept override;
    void apply() const noexcept override;
    void onDeactivate() const noexcept override;
};

} // namespace dp


#endif //SOUL_EATING_ENCHANTMENT_H
