#include "Commander.h"

namespace dp
{
Commander::Commander() noexcept = default;
Commander::Commander(std::initializer_list<std::shared_ptr<Unit>> units) : Unit(units) {}
Commander::~Commander() noexcept = default;
void Commander::accept(const UnitVisitor& visitor) const
{
    visitor.visit(*this);
    Unit::accept(visitor);
}

std::string Commander::toString() const { return "commander"; }
} // namespace dp