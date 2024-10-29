//
// Created by noname on 6/29/24.
//

#ifndef MEMBER_H
#define MEMBER_H

#include "Party.h"

namespace dp
{
    class PartyMember {
    public:
        virtual void joinedParty(Party party) = 0;
        virtual void partyAction(Action action) = 0;
        virtual void act(Action action) = 0;
    };
}

#endif //MEMBER_H
