//
// Created by noname on 10.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_REMOTE_SERVICE_INTERFACE_H
#define CPP_DESIGN_PATTERNS_REMOTE_SERVICE_INTERFACE_H

class RemoteServiceInterface {
public:
    [[nodiscard]] virtual long doRemoteFunction(int value) const = 0;
};

#endif //CPP_DESIGN_PATTERNS_REMOTE_SERVICE_INTERFACE_H
