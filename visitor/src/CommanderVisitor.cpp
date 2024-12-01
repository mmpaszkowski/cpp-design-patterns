#include "CommanderVisitor.h"

namespace dp
{
    void CommanderVisitor::visit(const Soldier& soldier) const {}
    void CommanderVisitor::visit(const Sergeant& sergeant) const {}
    void CommanderVisitor::visit(const Commander& commander) const
    {
        spdlog::info("Good to see you " + commander.toString());
    }
} // namespace dp