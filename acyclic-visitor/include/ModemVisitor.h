//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_MODEM_VISITOR_H
#define CPP_DESIGN_PATTERNS_MODEM_VISITOR_H

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

template<typename Base, typename T>
inline bool instanceof(const T &ref) {
    return dynamic_cast<const Base*>(&ref) != nullptr;
}

class ModemVisitor
{
public:
    virtual ~ModemVisitor() = default;
};

#endif //CPP_DESIGN_PATTERNS_MODEM_VISITOR_H
