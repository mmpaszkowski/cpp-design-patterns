//
// Created by noname on 29.06.2024
//

#ifndef PARTY_H
#define PARTY_H

#include "Action.h"
#include <memory>
#include <vector>

namespace dp
{
class PartyMember;

class Party : public std::enable_shared_from_this<Party>
{    
protected:
    Party() : std::enable_shared_from_this<Party>(){};

public:
    virtual ~Party() = default;
    static std::shared_ptr<Party> create() {
        struct TemporaryPublicConstructor : public Party {};
        return std::make_shared<TemporaryPublicConstructor>(); 
    }

public:
    void addMember(std::shared_ptr<PartyMember> member) ;
    size_t size() const noexcept { return members.size(); }

protected:
    virtual void act(std::shared_ptr<PartyMember> actor, Action action) const;

private:
    std::vector<std::shared_ptr<PartyMember>> members;
    friend PartyMember;
};
}

#endif //PARTY_H
