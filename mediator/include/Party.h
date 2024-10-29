//
// Created by noname on 6/29/24.
//

#ifndef PARTY_H
#define PARTY_H

#include "Action.h"
#include "PartyMember.h"
#include <memory>

namespace dp
{
class Party {
public:
    virtual void addMember(std::shared_ptr<PartyMember> member) = 0;
    virtual void act(PartyMember& actor, Action action) = 0;
};
}

#endif //PARTY_H
