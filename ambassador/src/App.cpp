//
// Created by Mateusz Paszkowski on 02.07.2023.
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
