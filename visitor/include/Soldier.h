//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "UnitVisitor.h"

namespace dp
{
class Soldier : public Unit
{
public:
    Soldier() noexcept;
    ~Soldier() noexcept override;
    void        accept(const UnitVisitor& visitor) const override;
    std::string toString() const override;
};
} // namespace dp

#endif //SOLDIER_H