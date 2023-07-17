//
// Created by noname on 12.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CLIENT_H
#define CPP_DESIGN_PATTERNS_CLIENT_H

#include "ServiceAmbassador.h"

class Client {
private:
    ServiceAmbassador* serviceAmbassador;

public:
    Client();
    [[nodiscard]] long useService(int value) const;
};

#endif //CPP_DESIGN_PATTERNS_CLIENT_H
