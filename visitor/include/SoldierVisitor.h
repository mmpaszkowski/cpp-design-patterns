//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef SOLDIER_VISITOR_H
#define SOLDIER_VISITOR_H

#include "UnitVisitor.h"
#include "Soldier.h"
#include <spdlog/spdlog.h>


namespace dp
{
class SoldierVisitor : public UnitVisitor
{
public:
    void visit(const Soldier& soldier) const override;
    void visit(const Sergeant& sergeant) const override;
    void visit(const Commander& commander) const override;
};
} // namespace dp

#endif //SOLDIER_VISITOR_H