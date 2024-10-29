//
// Created by noname on 6/29/24.
//

#ifndef WIZARD_H
#define WIZARD_H

#include "PartyMemberBase.h"

namespace dp
{
class Wizard : public PartyMemberBase
{
public:
    std::string toString() override { return "Wizard"; }
};
} // namespace dp

#endif //WIZARD_H
