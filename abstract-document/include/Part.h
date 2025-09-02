//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_PART_H
#define CPP_DESIGN_PATTERNS_PART_H

#include <utility>

#include "AbstractDocument.h"
#include "HasModel.h"
#include "HasPrice.h"
#include "HasType.h"

namespace dp
{
class Part : public AbstractDocument, public HasType, public HasModel, public HasPrice
{
public:
    explicit Part(const std::map<std::string, std::any>& properties) : AbstractDocument(properties) {}
    explicit Part(std::map<std::string, std::any>&& properties) : AbstractDocument(std::move(properties)) {}
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_PART_H
