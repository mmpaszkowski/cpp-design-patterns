//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "ConfigureForUnixVisitor.h"
#include "Zoom.h"

void ConfigureForUnixVisitor::visit(Zoom &zoom) {
    info(zoom.to_string() + " used with Unix configurator.");
}
