//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#include "AngryState.h"
#include "Mammoth.h"
#include "PeacefulState.h"

namespace dp
{

Mammoth::Mammoth() : std::enable_shared_from_this<Mammoth>()
{ 
    state = std::make_shared<PeacefulState>(this->weak_from_this());
}

[[nodiscard]] std::shared_ptr<Mammoth> Mammoth::create()
{
    struct TemporaryPublicConstructor : public Mammoth { };
    return std::make_shared<TemporaryPublicConstructor>();
}

void Mammoth::timePasses()
{
    if (std::dynamic_pointer_cast<PeacefulState>(state))
        changeStateTo(std::make_shared<AngryState>(this->weak_from_this()));
    else
        changeStateTo(std::make_shared<PeacefulState>(this->weak_from_this()));
}
void Mammoth::observe() const
{
    this->state->observe(); 
}

void Mammoth::changeStateTo(std::shared_ptr<State> newState)
{
    this->state = newState;
    this->state->onEnterState();
}
} // namespace dp
