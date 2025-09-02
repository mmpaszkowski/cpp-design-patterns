//
// Created by Mateusz Paszkowski on 29.06.2024.
//

#ifndef ROGUE_H
#define ROGUE_H

#include "PartyMember.h"

namespace dp
{
class Rogue : public PartyMember
{
private:
    constexpr Rogue() noexcept : PartyMember() {}

public:
    ~Rogue() override = default;
    static std::shared_ptr<Rogue> create() { 
        struct TemporaryPublicConstructor : public Rogue {};
        return std::make_shared<TemporaryPublicConstructor>();
    }

public:
    constexpr std::string toString() const noexcept override { return "Rogue"; }
};
} // namespace dp

#endif //ROGUE_H
