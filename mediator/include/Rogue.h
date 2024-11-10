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
    struct Private {};
public:
    constexpr Rogue(Private) noexcept : PartyMember() {}
    ~Rogue() override = default;
    static std::shared_ptr<Rogue> create() { return std::make_shared<Rogue>(Private()); }

public:
    constexpr std::string toString() const noexcept override { return "Rouge"; }
};
} // namespace dp

#endif //ROGUE_H
