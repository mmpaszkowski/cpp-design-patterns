//
// Created by Mateusz Paszkowski on 04.11.2024.
//

#ifndef HOBBIT_H
#define HOBBIT_H

#include "PartyMember.h"

namespace dp
{
class Hobbit : public PartyMember
{
private:
    constexpr Hobbit() noexcept : PartyMember() {}

public:
    ~Hobbit() override = default;
    static std::shared_ptr<Hobbit> create() { 
        struct TemporaryPublicConstructor : public Hobbit { };
        return std::make_shared<TemporaryPublicConstructor>(); 
    }

public:
    constexpr std::string toString() const noexcept override { return "Hobbit"; }
};
} // namespace dp


#endif //HOBBIT_H
