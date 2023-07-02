//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CAR_H
#define CPP_DESIGN_PATTERNS_CAR_H

#include "AbstractDocument.h"
#include "HasModel.h"
#include "HasParts.h"
#include "HasPrice.h"

class Car : public AbstractDocument, public HasModel, public HasPrice, public HasParts {
public:
    explicit Car(const std::map<std::string, std::any>& properties) : AbstractDocument(properties) {}
    explicit Car(std::map<std::string, std::any>&& properties) : AbstractDocument(properties) {}
};

#endif //CPP_DESIGN_PATTERNS_CAR_H
