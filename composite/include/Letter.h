//
// Created by Mateusz Paszkowski on 12.04.2024.
//

#ifndef LETTER_H
#define LETTER_H

#include "LetterComposite.h"
#include <iostream>

namespace dp
{

class Letter : public LetterComposite
{
public:
    constexpr explicit Letter(char character) noexcept : character_(character) {}
    constexpr Letter(const Letter& letter)                = default;
    constexpr Letter(Letter&& letter) noexcept            = default;
    constexpr ~Letter() override                          = default;
    constexpr Letter& operator=(const Letter& letter)     = default;
    constexpr Letter& operator=(Letter&& letter) noexcept = default;

protected:
    void printThisBefore() const override;

private:
    char character_;
};

} // namespace dp

#endif //LETTER_H
