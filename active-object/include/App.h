//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_APP_H
#define CPP_DESIGN_PATTERNS_APP_H

#include <cstddef>
#include <ActiveObject.h>
#include <list>
#include "Orc.h"

class App {

public:
    void run() const {
        std::list<Orc> v;
        for (int i = 0; i < NUM_CREATURES; i++) {
            v.emplace_back(std::string("Orc_") + std::to_string(i));
            v.back().eat();
            v.back().roam();
        }
    }

private:
    std::size_t NUM_CREATURES = 3;
};


#endif //CPP_DESIGN_PATTERNS_APP_H
