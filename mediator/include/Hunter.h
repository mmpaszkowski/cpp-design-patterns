//
// Created by noname on 6/29/24.
//

#ifndef HUNTER_H
#define HUNTER_H

#include "PartyMemberBase.h"

namespace dp
{
class Hunter : public PartyMemberBase
{
public:
    std::string toString() override { return "Hunter"; }
};
} // namespace dp

#endif //HUNTER_H
