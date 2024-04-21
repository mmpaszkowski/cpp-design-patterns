//
// Created by noname on 4/17/24.
//

#ifndef POISON_POTION_H
#define POISON_POTION_H

#include "Potion.h"
#include <spdlog/spdlog.h>

namespace dp
{
class PoisonPotion : public Potion
{
public:
    ~PoisonPotion() override;
    void drink() const override;
};
} // namespace dp

#endif //POISON_POTION_H
