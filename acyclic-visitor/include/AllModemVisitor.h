//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_ALL_MODEM_VISITOR_H
#define CPP_DESIGN_PATTERNS_ALL_MODEM_VISITOR_H

#include "HayesVisitor.h"
#include "ZoomVisitor.h"

class AllModemVisitor : public ZoomVisitor, public HayesVisitor
{

};


#endif //CPP_DESIGN_PATTERNS_ALL_MODEM_VISITOR_H
