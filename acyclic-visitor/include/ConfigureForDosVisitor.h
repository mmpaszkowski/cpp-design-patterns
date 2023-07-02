//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CONFIGURE_FOR_DOS_VISITOR_H
#define CPP_DESIGN_PATTERNS_CONFIGURE_FOR_DOS_VISITOR_H

#include "HayesVisitor.h"

class ConfigureForDosVisitor: public HayesVisitor
{
public:
    void visit(Hayes &hayes) override;
};

#endif //CPP_DESIGN_PATTERNS_CONFIGURE_FOR_DOS_VISITOR_H
