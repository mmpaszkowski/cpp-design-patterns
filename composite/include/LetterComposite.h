//
// Created by Mateusz Paszkowski on 11.04.2024.
//

#ifndef LETTER_COMPOSITE_H
#define LETTER_COMPOSITE_H

#include <algorithm>
#include <memory>
#include <vector>

using std::ranges::for_each;

namespace dp
{
class LetterComposite
{
public:
    constexpr LetterComposite() : children{} {}
    constexpr virtual ~LetterComposite()                                                 = default;
    constexpr LetterComposite(const LetterComposite& letterComposite)                    = default;
    constexpr LetterComposite(LetterComposite&& letterComposite) noexcept                = default;
    constexpr LetterComposite&     operator=(const LetterComposite& letterComposite)     = default;
    constexpr LetterComposite&     operator=(LetterComposite&& letterComposite) noexcept = default;


    [[nodiscard]] constexpr size_t count() const { return children.size(); }

    constexpr virtual void         print() const
    { // NOLINT(*-no-recursion)
        printThisBefore();
        for_each(children, [](const auto& n) { n->print(); });
        printThisAfter();
    }

protected:
    constexpr virtual void printThisBefore() const {}
    constexpr virtual void printThisAfter() const {}
    constexpr void         add(std::shared_ptr<LetterComposite>&& letter) { children.push_back(std::move(letter)); }

private:
    std::vector<std::shared_ptr<LetterComposite>> children;
};
} // namespace dp

#endif //LETTER_COMPOSITE_H
