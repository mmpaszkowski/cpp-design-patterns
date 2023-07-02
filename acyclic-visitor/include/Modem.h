//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_MODEM_H
#define CPP_DESIGN_PATTERNS_MODEM_H

#include "ModemVisitor.h"

class Modem {
    virtual void accept(ModemVisitor& modem_visitor) = 0;
    [[nodiscard]] virtual std::string to_string() const = 0;
};

#endif //CPP_DESIGN_PATTERNS_MODEM_H
