//
// Created by noname on 4/10/24.
//
#include "FlyingEnchantment.h"

namespace dp
{
FlyingEnchantment::~FlyingEnchantment() = default;

void FlyingEnchantment::onActivate() const noexcept { std::cout << "The item begins to glow faintly." << std::endl; }
void FlyingEnchantment::apply() const noexcept
{
    std::cout << "The item flies and strikes the enemies finally returning to owner's hand." << std::endl;
}
void FlyingEnchantment::onDeactivate() const noexcept { std::cout << "The item's glow fades." << std::endl; }

} // namespace dp