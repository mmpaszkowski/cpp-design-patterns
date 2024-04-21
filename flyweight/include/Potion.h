//
// Created by noname on 4/17/24.
//

#ifndef POTION_H
#define POTION_H

namespace dp
{
class Potion
{
public:
    virtual ~Potion() = default;
    virtual void drink() const = 0;
};
} // namespace dp


#endif //POTION_H
