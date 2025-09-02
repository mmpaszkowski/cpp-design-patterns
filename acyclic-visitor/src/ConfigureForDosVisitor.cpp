//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "ConfigureForDosVisitor.h"
#include "Hayes.h"

void ConfigureForDosVisitor::visit(Hayes &hayes) {
    info(hayes.to_string() + " used with Unix configurator.");
}
