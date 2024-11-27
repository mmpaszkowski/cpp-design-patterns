//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef ANGRY_STATE_H
#define ANGRY_STATE_H

#include <memory>
#include <string>
#include <spdlog/spdlog.h>
#include "State.h"

namespace dp
{
class Mammoth;

class AngryState : public State
{
public:
    AngryState(std::weak_ptr<Mammoth> mammoth);
    ~AngryState() noexcept override = default;
    void onEnterState() const override;
    void observe() const override;

private:
    std::weak_ptr<Mammoth> mammoth;
};
} // namespace dp

#endif //PEACEFUL_STATE_H