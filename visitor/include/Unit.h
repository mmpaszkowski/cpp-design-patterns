//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef UNIT_H
#define UNIT_H

#include <memory>
#include <list>
#include <string>

namespace dp
{
class UnitVisitor;
class Unit
{
public:
    Unit() noexcept;
    explicit Unit(std::initializer_list<std::shared_ptr<Unit>> units);
    virtual ~Unit() noexcept;
    
    virtual void        accept(const UnitVisitor& visitor) const;
    virtual std::string toString() const = 0;
    size_t              size() const { return units.size(); }
private:
    std::list<std::shared_ptr<Unit>> units;
};
} // namespace dp

#endif //UNIT_H