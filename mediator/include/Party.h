//
// Created by noname on 29.06.2024
//

#ifndef PARTY_H
#define PARTY_H

#include "Action.h"
#include "PartyMember.h"
#include <memory>
#include <spdlog/spdlog.h>
#include <vector>

namespace dp
{
class Party : public std::enable_shared_from_this<Party>
{    
private:
    struct Private{};

public:
    Party(Private) : std::enable_shared_from_this<Party>(){};
    virtual ~Party() = default;
    static std::shared_ptr<Party> create() { return std::make_shared<Party>(Private()); }

public:
    virtual void act(std::shared_ptr<PartyMember> actor, Action action) const ;
    virtual void addMember(std::shared_ptr<PartyMember> member) ;
    virtual size_t size() const noexcept { return members.size(); }

private:
    std::vector<std::shared_ptr<PartyMember>> members;
};
}

#endif //PARTY_IMPL_H
