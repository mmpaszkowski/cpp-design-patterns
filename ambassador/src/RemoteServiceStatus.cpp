//
// Created by noname on 14.07.23.
//

#include "RemoteServiceStatus.h"

RemoteServiceStatus::RemoteServiceStatus(long remoteServiceStatusValue) {
    this->remoteServiceStatusValue = remoteServiceStatusValue;
}

long RemoteServiceStatus::getRemoteServiceStatusValue() const {
    return remoteServiceStatusValue;
}
