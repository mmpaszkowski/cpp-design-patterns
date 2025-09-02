//
// Created by Mateusz Paszkowski on 12.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_CLIENT_H
#define CPP_DESIGN_PATTERNS_CLIENT_H

#include "ServiceAmbassador.h"

class Client {
private:
    ServiceAmbassador* serviceAmbassador;

public:
    Client();
    long useService(int value) const;
};

#endif //CPP_DESIGN_PATTERNS_CLIENT_H
