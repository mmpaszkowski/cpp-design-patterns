//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "Hayes.h"
#include "HayesVisitor.h"

void Hayes::accept(ModemVisitor &modem_visitor) {
    if (instanceof<HayesVisitor>(modem_visitor)) {
        dynamic_cast<HayesVisitor&>(modem_visitor).visit(*this);
    } else {
        info("Only HayesVisitor is allowed to visit Hayes modem");
    }
}

std::string Hayes::to_string() const {
    return "Hayes modem";
}
