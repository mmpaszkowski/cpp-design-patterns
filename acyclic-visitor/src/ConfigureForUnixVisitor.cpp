//
// Created by noname on 02.07.23.
//

#include "ConfigureForUnixVisitor.h"
#include "Zoom.h"

void ConfigureForUnixVisitor::visit(Zoom &zoom) {
    info(zoom.to_string() + " used with Unix configurator.");
}
