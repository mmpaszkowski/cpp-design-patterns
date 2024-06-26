//
// Created by noname on 10.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_REMOTE_SERVICE_STATUS_H
#define CPP_DESIGN_PATTERNS_REMOTE_SERVICE_STATUS_H

class RemoteServiceStatus {
private:
    long remoteServiceStatusValue;

public:
    explicit RemoteServiceStatus(long remoteServiceStatusValue);

    [[nodiscard]] long getRemoteServiceStatusValue() const;
};

#endif //CPP_DESIGN_PATTERNS_REMOTE_SERVICE_STATUS_H
