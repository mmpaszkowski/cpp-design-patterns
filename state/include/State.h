//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef STATE_H
#define STATE_H

#include <memory>
#include <string>

namespace dp
{
class State
{
public:
    virtual ~State() noexcept = default;
    virtual void onEnterState() const = 0;
    virtual void observe() const      = 0;
};
} // namespace dp

#endif //STATE_H
