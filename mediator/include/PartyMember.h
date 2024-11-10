//
// Created by noname on 6/29/24.
//

#ifndef PARTY_MEMBER_H
#define PARTY_MEMBER_H

#include "Action.h"
#include <memory>
#include <spdlog/spdlog.h>
#include <string>

namespace dp
{
class Party;

class PartyMember : public std::enable_shared_from_this<PartyMember>
{
public:
    virtual ~PartyMember() = default;

public:
    virtual std::string toString() const noexcept = 0;
    virtual void        act(Action action);

protected: // Interface for Party class
    virtual void partyAction(Action action) const;
    virtual void joinedParty(std::weak_ptr<Party> party) noexcept;

private:
    std::weak_ptr<Party> party;

    friend Party;
};
}

#endif //PARTY_MEMBER_H
