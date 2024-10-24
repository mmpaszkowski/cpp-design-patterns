//
// Created by noname on 6/29/24.
//

#ifndef PARTY_IMPL_H
#define PARTY_IMPL_H


#include "Party.h"
#include <vector>

namespace dp
{
class PartyImpl : public Party {



public:
    PartyImpl() {
        members = new std::vector<PartyMember>();
    }

    void act(PartyMember actor, Action action) override {
        for (auto member : members) {
            if (!member.equals(actor)) {
                member.partyAction(action);
            }
        }
    }

    void addMember(PartyMember member) override {
        members.add(member);
        member.joinedParty(this);
    }

private:
    std::vector<PartyMember> members;
};

}

#endif //PARTY_IMPL_H
