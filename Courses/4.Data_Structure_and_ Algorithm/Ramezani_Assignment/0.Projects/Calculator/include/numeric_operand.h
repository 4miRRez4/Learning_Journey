#ifndef NUMERIC_OPERAND_H
#define NUMERIC_OPERAND_H

#include "operand.h"

class NumericOperand : public Operand{
public:
    NumericOperand();

    double getValue() const override;
};

#endif