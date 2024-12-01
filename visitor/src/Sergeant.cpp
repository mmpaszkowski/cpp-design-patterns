#include "Sergeant.h"
#include "UnitVisitor.h"

namespace dp
{
Sergeant::Sergeant() noexcept : Unit() {}
Sergeant::Sergeant(std::initializer_list<std::shared_ptr<Unit>> units) : Unit(units) {}
Sergeant::~Sergeant() noexcept = default;
void Sergeant::accept(const UnitVisitor& visitor) const
{
    visitor.visit(*this);
    Unit::accept(visitor);
}
std::string Sergeant::toString() const { return "sergeant"; }
} // namespace dp