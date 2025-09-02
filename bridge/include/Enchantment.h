//
// Created by Mateusz Paszkowski on 10.04.2024.
//

#ifndef ENCHANTMENT_H
#define ENCHANTMENT_H

namespace dp
{
class Enchantment
{
public:
    virtual ~Enchantment() = default;
    virtual void onActivate() const noexcept   = 0;
    virtual void apply() const noexcept        = 0;
    virtual void onDeactivate() const noexcept = 0;
};
} // namespace dp

#endif //ENCHANTMENT_H
