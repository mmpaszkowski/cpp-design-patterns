//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_APP_H
#define CPP_DESIGN_PATTERNS_APP_H

#include <memory>
#include "Kingdom.h"

class App {

public:
    App();
    ~App() { delete kingdom; }

public:
    [[nodiscard]] Kingdom *getKingdom() { return kingdom; }

    void run();
    void createKingdom(KingdomType kingdomType);

private:
    Kingdom *kingdom;
};

#endif //CPP_DESIGN_PATTERNS_APP_H
