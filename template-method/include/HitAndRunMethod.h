//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef HIT_AND_RUN_METHOD_H
#define HIT_AND_RUN_METHOD_H

#include <string>
#include <spdlog/spdlog.h>
#include "StealingMethod.h"

namespace dp
{
class HitAndRunMethod : public StealingMethod
{
public:
    virtual ~HitAndRunMethod() noexcept = default;
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
        spdlog::info("Approach the " + target + " from behind.");
    };
    void        stealTheItem(const std::string& target) override{
        spdlog::info("Grab the "+ target + "'s handbag and run away fast!");
    };
};
} // namespace dp
#endif //HIT_AND_RUN_METHOD_H
