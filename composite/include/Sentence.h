//
// Created by noname on 4/12/24.
//

#ifndef SENTENCE_H
#define SENTENCE_H

#include "LetterComposite.h"
#include "Word.h"
#include <vector>

using std::ranges::for_each;

namespace dp
{
class Sentence : public LetterComposite
{
public:
    constexpr Sentence(const Sentence& letter)                = default;
    constexpr Sentence(Sentence&& letter) noexcept            = default;
    constexpr ~Sentence() override                            = default;
    constexpr Sentence& operator=(const Sentence& letter)     = default;
    constexpr Sentence& operator=(Sentence&& letter) noexcept = default;
    constexpr explicit Sentence(std::vector<Word> words)
    {
        for_each(words, [this](Word& word) { add(std::make_unique<Word>(std::move(word))); });
    }

protected:
    void printThisAfter() const override;
};
} // namespace dp


#endif //SENTENCE_H
