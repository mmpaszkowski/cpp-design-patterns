//
// Created by noname on 03.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_CLASS_CAPITAN_H
#define CPP_DESIGN_PATTERNS_CLASS_CAPITAN_H

#include "RowingBoat.h"

class Captain {
private:
    RowingBoat *rowingBoat;
public:
    Captain() { rowingBoat = nullptr; }
    explicit Captain(RowingBoat *rowingBoat) : rowingBoat(rowingBoat) {}
    ~Captain() { delete rowingBoat; }

public:
    void row() {
        rowingBoat->row();
    }
};

#endif //CPP_DESIGN_PATTERNS_CLASS_CAPITAN_H
