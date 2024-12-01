//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef HALFLING_THIEF_H
#define HALFLING_THIEF_H

#include "StealingMethod.h"
#include <spdlog/spdlog.h>
#include <string>
#include <memory>

namespace dp
{
class HalflingThief
{
public:
    HalflingThief(std::shared_ptr<StealingMethod> method) { this->method = method; }
    virtual ~HalflingThief() noexcept = default;
    void changeMethod(std::shared_ptr<StealingMethod> method) { this->method = method; }

    void steal() 
    { 
        method->steal();
    };

    const StealingMethod& getStealingMethod() const { return *method; }

private:
    std::shared_ptr<StealingMethod> method;
};
} // namespace dp
#endif //HALFLING_THIEF_H
