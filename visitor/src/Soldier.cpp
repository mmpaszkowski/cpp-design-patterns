#include "Soldier.h"
#include "UnitVisitor.h"

namespace dp
{
Soldier::Soldier() noexcept : Unit() {}
Soldier::~Soldier() noexcept = default;
void Soldier::accept(const UnitVisitor& visitor) const
{
    visitor.visit(*this);
    Unit::accept(visitor);
}
std::string Soldier::toString() const { return "soldier"; }
} // namespace dp