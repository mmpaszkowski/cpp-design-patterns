//
// Created by noname on 17.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CASH_H
#define CPP_DESIGN_PATTERNS_CASH_H


class Cash {
private:
    int amount;

public:
    Cash(int amount);

    void plus(int addend);

    [[maybe_unused]] bool minus(int subtrahend);

    [[nodiscard]] int count() const;
};

#endif //CPP_DESIGN_PATTERNS_CASH_H
