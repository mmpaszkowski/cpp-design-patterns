//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef UNIT_VISITOR_H
#define UNIT_VISITOR_H

#include <memory>
#include <string>
#include <vector>
#include "Unit.h"

namespace dp
{
class Soldier;
class Sergeant;
class Commander;

class UnitVisitor
{
public:
    virtual void visit(const Unit& soldier) const {};
    virtual void visit(const Soldier& soldier) const = 0;
    virtual void visit(const Sergeant& sergeant) const = 0;
    virtual void visit(const Commander& commander) const = 0;

};
} // namespace dp

#endif //UNIT_VISITOR_H