//
// Created by Mateusz Paszkowski on 14.07.2023.
//

#include "RemoteServiceStatus.h"

RemoteServiceStatus::RemoteServiceStatus(long remoteServiceStatusValue) {
    this->remoteServiceStatusValue = remoteServiceStatusValue;
}

long RemoteServiceStatus::getRemoteServiceStatusValue() const {
    return remoteServiceStatusValue;
}
