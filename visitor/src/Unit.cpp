#include "Unit.h"

namespace dp
{
Unit::Unit() noexcept : units() {}
Unit::Unit(std::initializer_list<std::shared_ptr<Unit>> units) : units(units) {}
Unit ::~Unit() noexcept = default;

inline void Unit::accept(const UnitVisitor& visitor) const
{
    for (auto&& unit : units)
        unit->accept(visitor);
}
} // namespace dp