//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_ZOOM_VISITOR_H
#define CPP_DESIGN_PATTERNS_ZOOM_VISITOR_H

#include "ModemVisitor.h"

class Zoom;

class ZoomVisitor : public ModemVisitor {
public:
    virtual void visit(Zoom& zoom) = 0;
    ~ZoomVisitor() override = default;
};

#endif //CPP_DESIGN_PATTERNS_ZOOM_VISITOR_H
