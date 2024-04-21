//
// Created by noname on 4/17/24.
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
