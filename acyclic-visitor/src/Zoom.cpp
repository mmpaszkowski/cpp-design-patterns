//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "Zoom.h"
#include "ZoomVisitor.h"

void Zoom::accept(ModemVisitor &modem_visitor) {
    if (instanceof<ZoomVisitor>(modem_visitor)) {
        ((ZoomVisitor&) modem_visitor).visit(*this);
    } else {
        info("Only ZoomVisitor is allowed to visit Zoom modem");
    }
}

std::string Zoom::to_string() const {
    return "Zoom modem";
}
