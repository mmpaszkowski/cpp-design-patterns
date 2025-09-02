//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_HAYES_H
#define CPP_DESIGN_PATTERNS_HAYES_H

#include <spdlog/spdlog.h>

#include "Modem.h"

using spdlog::info;

class Hayes : public Modem
{
public:
    void accept(ModemVisitor& modem_visitor) override;

    [[nodiscard]] std::string to_string() const override;
};

#endif //CPP_DESIGN_PATTERNS_HAYES_H
