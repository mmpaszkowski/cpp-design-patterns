//
// Created by Mateusz Paszkowski on 17.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_CASH_H
#define CPP_DESIGN_PATTERNS_CASH_H


class Cash {
private:
    int amount;

public:
    Cash(int amount);

    void plus(int addend);

    void minus(int subtrahend);

    [[nodiscard]] int count() const;
};

#endif //CPP_DESIGN_PATTERNS_CASH_H
