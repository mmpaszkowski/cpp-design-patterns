//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef SERGEANT_VISITOR_H
#define SERGEANT_VISITOR_H

#include "UnitVisitor.h"
#include "Sergeant.h"
#include <spdlog/spdlog.h>


namespace dp
{
class SergeantVisitor : public UnitVisitor
{
public:
    void visit(const Soldier& soldier) const override;
    void visit(const Sergeant& sergeant) const override;
    void visit(const Commander& commander) const override;
};
} // namespace dp

#endif //SERGEANT_VISITOR_H