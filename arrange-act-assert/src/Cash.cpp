//
// Created by Mateusz Paszkowski on 17.07.2023.
//

#include "Cash.h"

Cash::Cash(int amount) : amount(amount) {}

void Cash::plus(int addend) { amount += addend; }

bool Cash::minus(int subtrahend)
{
    if (amount >= subtrahend)
    {
        amount -= subtrahend;
        return true;
    }
    else
    {
        return false;
    }
}

int Cash::count() const { return amount; }
