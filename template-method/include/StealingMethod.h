//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#ifndef STEALING_METHOD_H
#define STEALING_METHOD_H

#include <string>
#include <spdlog/spdlog.h>

namespace dp
{
class StealingMethod
{
public:
    virtual ~StealingMethod() noexcept = default;
    void steal()
    {
        std::string target = pickTarget();
        spdlog::info("The target has been chosen as " + target + ".");
        confuseTarget(target);
        stealTheItem(target);
    };

protected:
    virtual std::string pickTarget() const                       = 0;
    virtual void        confuseTarget(const std::string& target) = 0;
    virtual void        stealTheItem(const std::string& target)  = 0;
};
} // namespace dp
#endif //STEALING_METHOD_H
