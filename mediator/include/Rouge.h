//
// Created by noname on 6/29/24.
//

#ifndef ROUGE_H
#define ROUGE_H

#include "PartyMemberBase.h"

namespace dp
{
class Rouge : public PartyMemberBase
{
public:
    std::string toString() override { return "Rouge"; }
};
} // namespace dp

#endif //ROUGE_H
