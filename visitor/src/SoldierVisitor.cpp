#include "SoldierVisitor.h"

namespace dp
{
	void SoldierVisitor::visit(const Soldier& soldier) const 
	{ 
		spdlog::info("Greetings " + soldier.toString()); 
	}
	void SoldierVisitor::visit(const Sergeant& sergeant) const {}
	void SoldierVisitor::visit(const Commander& commander) const {}
} // namespace dp