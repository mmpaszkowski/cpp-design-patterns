//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "Client.h"

void App::run() const {
    Client host1;
    Client host2;
    host1.useService(12);
    host2.useService(73);
}
