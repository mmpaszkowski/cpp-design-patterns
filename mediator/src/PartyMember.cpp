//
// Created by Mateusz Paszkowski on 29.10.2024.
//

#include "Party.h"
#include "PartyMember.h"

namespace dp
{
void PartyMember::joinedParty(std::weak_ptr<Party> party) noexcept
{
    spdlog::info(this->toString() + " joins the party");
    this->party = party;
}

void PartyMember::partyAction(Action action) const
{ 
    spdlog::info(this->toString() + " " + getDescription(action));
}

void PartyMember::act(Action action)
{
    if (auto party_ptr = party.lock())
    {
        spdlog::info(this->toString() + " " + getTitle(action));
        party_ptr->act(shared_from_this(), action);
    }
}
} // namespace dp
