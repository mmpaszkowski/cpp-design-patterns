//
// Created by Mateusz Paszkowski on 13.04.2024.
//

#ifndef MESSENGER_H
#define MESSENGER_H

#include "LetterComposite.h"
#include "Sentence.h"
#include "Word.h"
#include <vector>


namespace dp
{
class Messenger
{
public:
    static Sentence messageFromOrcs()
    {
        std::vector<Word> words;
        words.push_back(Word{'W', 'h', 'e', 'r', 'e'});
        words.push_back(Word{'t', 'h', 'e', 'r', 'e'});
        words.push_back(Word{'i', 's'});
        words.push_back(Word{'a'});
        words.push_back(Word{'w', 'h', 'i', 'p'});
        words.push_back(Word{'t', 'h', 'e', 'r', 'e'});
        words.push_back(Word{'i', 's'});
        words.push_back(Word{'a'});
        words.push_back(Word{'w', 'a', 'y'});

        return Sentence(std::move(words));
    }

    static Sentence messageFromElves()
    {
        std::vector<Word> words;
        words.push_back(Word{'M', 'u', 'c', 'h'});
        words.push_back(Word{'w', 'i', 'n', 'd'});
        words.push_back(Word{'p', 'o', 'u', 'r', 's'});
        words.push_back(Word{'f', 'r', 'o', 'm'});
        words.push_back(Word{'y', 'o', 'u', 'r'});
        words.push_back(Word{'m', 'o', 'u', 't', 'h'});

        return Sentence(std::move(words));
    }
};
} // namespace dp

#endif //MESSENGER_H
