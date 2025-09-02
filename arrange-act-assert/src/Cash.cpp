//
// Created by Mateusz Paszkowski on 17.07.2023.
//

#include <Cash.h>
#include <stdexcept>

Cash::Cash(int amount) : amount(amount) {}

void Cash::plus(int addend) { amount += addend; }

void Cash::minus(int subtrahend) {
    if (amount < subtrahend)
        throw std::runtime_error("Insufficient funds");
    amount -= subtrahend;
}

int Cash::count() const { return amount; }
