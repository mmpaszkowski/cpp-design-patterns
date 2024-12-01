//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef SERGEANT_H
#define SERGEANT_H

#include "Unit.h"

namespace dp
{
class Sergeant : public Unit
{
public:
    Sergeant() noexcept;
    Sergeant(std::initializer_list<std::shared_ptr<Unit>> units);
    ~Sergeant() noexcept override;
    void        accept(const UnitVisitor& visitor) const override;
    std::string toString() const override;
};
} // namespace dp

#endif //SERGEANT_H