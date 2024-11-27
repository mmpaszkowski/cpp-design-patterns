//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef PEACEFUL_STATE_H
#define PEACEFUL_STATE_H

#include <memory>
#include <string>
#include <spdlog/spdlog.h>
#include "State.h"

namespace dp
{
class Mammoth;

class PeacefulState : public State
{
public:
    PeacefulState(std::weak_ptr<Mammoth> mammoth);
    ~PeacefulState() noexcept override = default;
    void onEnterState() const override;
    void observe() const override;

private:
    std::weak_ptr<Mammoth> mammoth;
};
} // namespace dp

#endif //PEACEFUL_STATE_H