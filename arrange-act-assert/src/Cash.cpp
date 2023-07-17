//
// Created by noname on 17.07.23.
//

#include "../include/Cash.h"

Cash::Cash(int amount) : amount(amount) {
}

void Cash::plus(int addend) {
    amount += addend;
}

bool Cash::minus(int subtrahend) {
    if (amount >= subtrahend) {
        amount -= subtrahend;
        return true;
    } else {
        return false;
    }
}

int Cash::count() const {
    return amount;
}


