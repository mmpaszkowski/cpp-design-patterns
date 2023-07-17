//
// Created by noname on 12.07.23.
//

#include "Client.h"
#include <spdlog/spdlog.h>

using spdlog::info;

Client::Client() : serviceAmbassador(new ServiceAmbassador()){}

long Client::useService(int value) const {
    auto result = serviceAmbassador->doRemoteFunction(value);
    info("Service result: {}", result);
    return result;
}

