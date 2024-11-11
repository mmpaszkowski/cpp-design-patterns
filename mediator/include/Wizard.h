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
    constexpr Wizard() noexcept : PartyMember() {}

public:
    ~Wizard() override = default;
    static std::shared_ptr<Wizard> create() { 
        struct TemporaryPublicConstructor : public Wizard {};
        return std::make_shared<TemporaryPublicConstructor>(); 
    }

public:
    constexpr std::string toString() const noexcept override { return "Wizard"; }
};
} // namespace dp

#endif //WIZARD_H
