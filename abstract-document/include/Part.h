//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_PART_H
#define CPP_DESIGN_PATTERNS_PART_H

#include <utility>

#include "AbstractDocument.h"
#include "HasType.h"
#include "HasModel.h"
#include "HasPrice.h"

class Part : public AbstractDocument, public HasType, public HasModel, public HasPrice {
public:
    explicit Part(const std::map<std::string, std::any>& properties) : AbstractDocument(properties) { }
    explicit Part(std::map<std::string, std::any>&& properties) : AbstractDocument(properties) { }
};

#endif //CPP_DESIGN_PATTERNS_PART_H
