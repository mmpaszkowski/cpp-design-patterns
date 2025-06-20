//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_APP_H
#define CPP_DESIGN_PATTERNS_APP_H

#include "Kingdom.h"
#include <memory>

namespace dp
{
class App
{
public:
    [[nodiscard]] const Kingdom& getKingdom() const { return *kingdom_; }
    void                         run();
    void                         setUpKingdom(KingdomType kingdomType);

protected:
    void logKingdomDetails(KingdomType kingdomType);

private:
    std::unique_ptr<Kingdom> kingdom_;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_APP_H
