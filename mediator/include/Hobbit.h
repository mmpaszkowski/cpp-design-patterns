//
// Created by noname on 6/29/24.
//

#ifndef HOBBIT_H
#define HOBBIT_H

#include "PartyMemberBase.h"

namespace dp
{
class Hobbit : public PartyMemberBase
{
public:
    std::string toString() override { return "Hobbit"; }
};
} // namespace dp


#endif //HOBBIT_H
