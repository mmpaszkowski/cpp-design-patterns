#include "SergeantVisitor.h"

namespace dp
{
	void SergeantVisitor::visit(const Soldier& soldier) const {}
	void SergeantVisitor::visit(const Sergeant& sergeant) const 
	{
		spdlog::info("Hello " + sergeant.toString()); 
	}
	void SergeantVisitor::visit(const Commander& commander) const {}
} // namespace dp