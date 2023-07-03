//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "ConfigureForUnixVisitor.h"
#include "ConfigureForDosVisitor.h"
#include "Zoom.h"
#include "Hayes.h"

void App::run() const {
    ConfigureForUnixVisitor conUnix;
    ConfigureForDosVisitor conDos;

    Zoom zoom;
    Hayes hayes;

    hayes.accept(conDos); // Hayes modem with Dos configurator
    zoom.accept(conDos); // Zoom modem with Dos configurator
    hayes.accept(conUnix); // Hayes modem with Unix configurator
    zoom.accept(conUnix); // Zoom modem with Unix configurator
}
