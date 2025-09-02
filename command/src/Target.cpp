//
// Created by Mateusz Paszkowski on 10.22.2024.
//

#include "Target.h"

namespace dp
{
void Target::printStatus() const
{
    std::cout << this->toString() << ", [size=" << size_ << "], [visibility=" << visibility_ << "]" << std::endl;
}
}
