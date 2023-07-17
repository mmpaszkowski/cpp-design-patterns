//
// Created by noname on 12.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_SERVICE_AMBASSADOR_H
#define CPP_DESIGN_PATTERNS_SERVICE_AMBASSADOR_H

#include "RemoteServiceInterface.h"

class ServiceAmbassador : public RemoteServiceInterface {

private:
    static const int RETRIES;
    static const int DELAY_MS;

public:
    ServiceAmbassador() noexcept;
    [[nodiscard]] long doRemoteFunction(int value) const override;

private:
    [[nodiscard]] long checkLatency(int value) const;
    [[nodiscard]] long safeCall(int value) const;
};

#endif //CPP_DESIGN_PATTERNS_SERVICE_AMBASSADOR_H
