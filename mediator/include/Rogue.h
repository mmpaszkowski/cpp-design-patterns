//
// Created by noname on 6/29/24.
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
    constexpr std::string toString() const noexcept override { return "Rouge"; }
};
} // namespace dp

#endif //ROGUE_H
