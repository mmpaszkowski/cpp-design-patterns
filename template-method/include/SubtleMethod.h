//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef SUBTLE_METHOD_H
#define SUBTLE_METHOD_H

#include <string>
#include <spdlog/spdlog.h>
#include "StealingMethod.h"

namespace dp
{
class SubtleMethod : public StealingMethod
{
public:
    virtual ~SubtleMethod() noexcept = default;
    void steal()
    {
        std::string target = pickTarget();
        spdlog::info("The target has been chosen as " + target + ".");
        confuseTarget(target);
        stealTheItem(target);
    };

protected:
    std::string pickTarget() const override { return "shop keeper"; }
    void        confuseTarget(const std::string& target) override
    {
        spdlog::info("Approach the " + target + " with tears running and hug him!");
    };
    void        stealTheItem(const std::string& target) override{
        spdlog::info("While in close contact grab the " + target + "'s wallet.");
    };
};
} // namespace dp
#endif //SUBTLE_METHOD_H
