//
// Created by Mateusz Paszkowski on 12.07.2023.
//

#include <ServiceAmbassador.h>
#include <spdlog/spdlog.h>

#include "RemoteService.h"

using spdlog::info;
using spdlog::error;

const int ServiceAmbassador::RETRIES = 3;
const int ServiceAmbassador::DELAY_MS = 3000;

ServiceAmbassador::ServiceAmbassador() noexcept = default;


long ServiceAmbassador::doRemoteFunction(int value) const {
    return safeCall(value);
}

long ServiceAmbassador::checkLatency(int value) const {
    auto startTime = std::chrono::system_clock::now();
    auto result = RemoteService::getRemoteService()->doRemoteFunction(value);
    auto timeTaken = std::chrono::system_clock::now() - startTime;

    info("Time taken (ms): {}", timeTaken.count());
    return result;
}

long ServiceAmbassador::safeCall(int value) const {
    size_t retries = 0;
    long result = -1;

    for (int i = 0; i < RETRIES; i++) {
        if (retries >= RETRIES) {
            return -1;
        }

        if ((result = checkLatency(value)) == -1) {
            info("Failed to reach remote: ({})", i + 1);
            retries++;
            std::this_thread::sleep_for(std::chrono::milliseconds(DELAY_MS));
        } else {
            break;
        }
    }
    return result;
}
