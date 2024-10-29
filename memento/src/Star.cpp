//
// Created by noname on 4/8/24.
//
#include "Star.h"

namespace dp
{
std::unique_ptr<StarMemento> Star::getMemento()
{
    return std::make_unique<StarMementoInternal>(type, ageYears, massTons);
}

void Star::setMemento(StarMemento& memento)
{
    StarMementoInternal& state = dynamic_cast<StarMementoInternal&>(memento);
    this->type                 = state.getType();
    this->ageYears             = state.getAge();
    this->massTons             = state.getMass();
}

std::string Star::toString()
{
    return std::format("{} age: {} years mass: {} tons", to_string(type), ageYears, massTons);
}
} // namespace dp
