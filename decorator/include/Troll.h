//
// Created by Mateusz Paszkowski on 13.04.2024.
//

#ifndef TROLL_H
#define TROLL_H

namespace dp {

class Troll {
public:
    virtual ~Troll()             = default;
    virtual void attack()        = 0;
    virtual int getAttackPower() = 0;
    virtual void fleeBattle()    = 0;
};

} // namespace dp


#endif //TROLL_H
