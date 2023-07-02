//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_H
#define CPP_DESIGN_PATTERNS_ORC_H

#include "ActiveObject.h"

class Orc : public ActiveObject {

public:
    explicit Orc(const std::string& name) : ActiveObject(name) { }
    Orc(const Orc&) = delete;
    Orc(Orc&& other) noexcept = default;
    Orc& operator=(const Orc&) = delete;
    Orc& operator=(Orc&&) = delete;
    virtual ~Orc() = default;
};

#endif //CPP_DESIGN_PATTERNS_ORC_H
