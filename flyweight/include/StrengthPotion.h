//
// Created by noname on 4/17/24.
//

#ifndef STRENGTH_POTION_H
#define STRENGTH_POTION_H

#include "Potion.h"
#include <spdlog/spdlog.h>

namespace dp
{
class StrengthPotion : public Potion
{
public:
    ~StrengthPotion() override;
    void drink() const override;
};
} // namespace dp

#endif //STRENGTH_POTION_H
