//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef COMMANDER_H
#define COMMANDER_H

#include "Unit.h"
#include "UnitVisitor.h"

namespace dp
{
class Commander : public Unit
{
public:
    Commander() noexcept;
    explicit Commander(std::initializer_list<std::shared_ptr<Unit>> units);
    ~Commander() noexcept override;

    void        accept(const UnitVisitor& visitor) const override;
    std::string toString() const override;
};
} // namespace dp

#endif //COMMANDER_H