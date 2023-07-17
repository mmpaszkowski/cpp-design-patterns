//
// Created by noname on 10.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_REMOTE_SERVICE_H
#define CPP_DESIGN_PATTERNS_REMOTE_SERVICE_H

#include <thread>
#include "RemoteServiceInterface.h"
#include "util/RandomProvider.h"
#include "RemoteServiceStatus.h"

class RemoteService : public RemoteServiceInterface {
private:
    static int THRESHOLD;
    static RemoteService *service;
    RandomProvider* randomProvider;

public:
    RemoteService();
    ~RemoteService();
    explicit RemoteService(RandomProvider* randomProvider);
    static RemoteService *getRemoteService();
    [[nodiscard]] long doRemoteFunction(int value) const override;
};

#endif //CPP_DESIGN_PATTERNS_REMOTE_SERVICE_H
