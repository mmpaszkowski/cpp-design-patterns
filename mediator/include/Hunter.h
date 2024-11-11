//
// Created by noname on 04.11.2024
//

#ifndef HUNTER_H
#define HUNTER_H

#include "PartyMember.h"

namespace dp
{
class Hunter : public PartyMember
{
private:
    constexpr Hunter() noexcept : PartyMember() {}

public:
    ~Hunter() override = default;
    static std::shared_ptr<Hunter> create() { 
        struct TemporaryPublicConstructor : public Hunter { };
        return std::make_shared<TemporaryPublicConstructor>(); 
    }

public:
    constexpr std::string toString() const noexcept override { return "Hunter"; }
};
} // namespace dp

#endif //HUNTER_H
