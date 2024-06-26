//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_HAYES_VISITOR_H
#define CPP_DESIGN_PATTERNS_HAYES_VISITOR_H

#include "ModemVisitor.h"

class Hayes;

class HayesVisitor : public ModemVisitor {
public:
    virtual void visit(Hayes& zoom) = 0;
    ~HayesVisitor() override = default;
};

#endif //CPP_DESIGN_PATTERNS_HAYES_VISITOR_H
