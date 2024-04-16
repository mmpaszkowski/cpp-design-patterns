//
// Created by noname on 4/13/24.
//

#ifndef TROLL_H
#define TROLL_H

namespace
{
class Troll
{
public:
    virtual constexpr ~Troll()    = default;
    virtual void attack()         = 0;
    virtual int  getAttackPower() = 0;
    virtual void fleeBattle()     = 0;
};
} // namespace


#endif //TROLL_H
