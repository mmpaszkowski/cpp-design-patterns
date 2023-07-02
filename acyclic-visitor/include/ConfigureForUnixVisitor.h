//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CONFIGURE_FOR_UNIX_VISITOR_H
#define CPP_DESIGN_PATTERNS_CONFIGURE_FOR_UNIX_VISITOR_H

#include "ZoomVisitor.h"

class ConfigureForUnixVisitor: public ZoomVisitor
{
public:
    void visit(Zoom &zoom) override;
};

#endif //CPP_DESIGN_PATTERNS_CONFIGURE_FOR_UNIX_VISITOR_H
