//
// Created by Mateusz Paszkowski on 17.04.2024.
//

#ifndef INVISIBILITY_POTION_H
#define INVISIBILITY_POTION_H

#include "Potion.h"
#include <spdlog/spdlog.h>

namespace dp
{
class InvisibilityPotion : public Potion
{
public:
    ~InvisibilityPotion() override;
    void drink() const override;
};
} // namespace dp

#endif //INVISIBILITY_POTION_H
