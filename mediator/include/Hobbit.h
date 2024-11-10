//
// Created by noname on 04.11.2024.
//

#ifndef HOBBIT_H
#define HOBBIT_H

#include "PartyMember.h"

namespace dp
{
class Hobbit : public PartyMember
{
private:
    struct Private {};

public:
    constexpr Hobbit(Private) noexcept : PartyMember() {}
    ~Hobbit() override = default;
    static std::shared_ptr<Hobbit> create() { return std::make_shared<Hobbit>(Private()); }

public:
    constexpr std::string toString() const noexcept override { return "Hobbit"; }
};
} // namespace dp


#endif //HOBBIT_H
