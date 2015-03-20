//
// Created by Michał Gutowski on 20.03.15.
//

#ifndef _SOFT_COMPUTING_1_LINEARFUNCTION_H_
#define _SOFT_COMPUTING_1_LINEARFUNCTION_H_

#include "ActivationFunction.h"

class LinearFunction : public ActivationFunction{

public:
    virtual DataType computeDervative(DataType x);

public:
    virtual DataType compute(DataType x);
};


#endif //_SOFT_COMPUTING_1_LINEARFUNCTION_H_
