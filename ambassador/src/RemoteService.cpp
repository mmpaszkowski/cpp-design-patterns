//
// Created by Mateusz Paszkowski on 12.07.2023.
//

#include "RemoteService.h"

int RemoteService::THRESHOLD = 200;
RemoteService *RemoteService::service = nullptr;

RemoteService::RemoteService(RandomProvider *randomProvider) : randomProvider(randomProvider) { }
RemoteService::RemoteService() : randomProvider(new RandDouble()) { }

RemoteService::~RemoteService()
{
    delete randomProvider;
}

long RemoteService::doRemoteFunction(int value) const {
    long waitTime = std::floor(randomProvider->random() * 1000);
    std::this_thread::sleep_for(std::chrono::milliseconds(waitTime));
    return waitTime <= THRESHOLD ? value * 10 : -1;
}

RemoteService *RemoteService::getRemoteService() { // Add mutex here
    if (!service) {
        service = new RemoteService();
    }
    return service;
}

