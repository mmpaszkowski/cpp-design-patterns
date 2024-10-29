//
// Created by noname on 6/29/24.
//

#ifndef PARTY_MEMBER_BASE_H
#define PARTY_MEMBER_BASE_H

#include "Party.h"
#include "PartyMember.h"
#include <spdlog/spdlog.h>
#include <memory>

namespace dp
{
    class PartyMemberBase : public PartyMember
    {
    public:
    void joinedParty(std::shared_ptr<Party> party) {
        spdlog::info(this->toString() + " joins the party");
        this->party = party;
    }

    void partyAction(Action action) {
        spdlog::info(this->toString() +  getDescription(action));
    }

    void act(Action action) override {
        if (party) {
            spdlog::info(this->toString() +  getDescription(action));
            party->act(*this, action);
        }
    }

    virtual std::string toString() = 0;

    protected:
        std::shared_ptr<Party> party;
};
}

#endif //PARTY_MEMBER_BASE_H
