//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_DENIED_H
#define DESIGN_PATTERNS_DENIED_H


#include "Status.h"

class Denied : public Status {
public:
    std::ostream &output(std::ostream &os) const override;
    void analyze(Budget *) override;
};


#endif //DESIGN_PATTERNS_DENIED_H
