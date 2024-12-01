//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef COMMANDER_VISITOR_H
#define COMMANDER_VISITOR_H

#include "UnitVisitor.h"
#include <spdlog/spdlog.h>
#include "Commander.h"

namespace dp
{
class CommanderVisitor : public UnitVisitor
{
public:
    void visit(const Soldier& soldier) const override;
    void visit(const Sergeant& sergeant) const override;
    void visit(const Commander& commander) const override;
};
} // namespace dp

#endif //COMMANDER_VISITOR_H