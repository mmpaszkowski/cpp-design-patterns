//
// Created by Mateusz Paszkowski on 29.10.2024.
//

#include "Party.h"
#include "PartyMember.h"

namespace dp
{
void Party::act(std::shared_ptr<PartyMember> actor, Action action) const
{
    for (auto member : members)
        if (member != actor)
            member->partyAction(action);
}

void Party::addMember(std::shared_ptr<PartyMember> member)
{
    members.push_back(member);
    member->joinedParty(weak_from_this());
}
} // namespace dp
