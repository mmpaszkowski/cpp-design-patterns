//
// Created by noname on 22/10/24.
//

#include "Target.h"

namespace dp
{
void Target::printStatus() const
{
    std::cout << this->toString() << ", [size=" << size_ << "], [visibility=" << visibility_ << "]" << std::endl;
}
}
