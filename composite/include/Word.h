//
// Created by noname on 4/12/24.
//

#ifndef WORD_H
#define WORD_H

#include "Letter.h"
#include "LetterComposite.h"
#include <algorithm>
#include <vector>
namespace dp
{
class Word : public LetterComposite
{
public:
    constexpr Word(const Word& letter)                = default;
    constexpr Word(Word&& letter) noexcept            = default;
    constexpr ~Word() override                        = default;
    constexpr Word& operator=(const Word& letter)     = default;
    constexpr Word& operator=(Word&& letter) noexcept = default;

    constexpr explicit Word(std::vector<Letter>&& letters)
    {
        std::ranges::for_each(letters,
                              [this](Letter& letter) { add(std::move(std::make_unique<Letter>(std::move(letter)))); });
    }

    constexpr Word(std::initializer_list<char> letters)
    {
        std::ranges::for_each(letters, [this](char letter) { add(std::move(std::make_unique<Letter>(letter))); });
    }

    void printThisBefore() const override;
};
} // namespace dp


#endif //WORD_H
