//
// Created by noname on 29.06.2024.
//

#ifndef WIZARD_H
#define WIZARD_H

#include "PartyMember.h"

namespace dp
{
class Wizard : public PartyMember
{
private:
    struct Private {};
public:
    constexpr Wizard(Private) noexcept : PartyMember() {}
    ~Wizard() override = default;
    static std::shared_ptr<Wizard> create() { return std::make_shared<Wizard>(Private()); }

public:
    constexpr std::string toString() const noexcept override { return "Wizard"; }
};
} // namespace dp

#endif //WIZARD_H
