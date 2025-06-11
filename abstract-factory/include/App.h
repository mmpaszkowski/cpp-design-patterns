//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_APP_H
#define CPP_DESIGN_PATTERNS_APP_H

#include "Kingdom.h"
#include <memory>

class App
{

public:
    [[nodiscard]] const Kingdom& getKingdom() const { return *kingdom; }

    void                         run();
    void                         createKingdom(KingdomType kingdomType);

private:
    std::unique_ptr<Kingdom> kingdom;
};

#endif //CPP_DESIGN_PATTERNS_APP_H
