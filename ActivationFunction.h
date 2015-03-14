//
// Created by Michał Gutowski on 13.03.15.
//
#ifndef _SOFT_COMPUTING_1_ACTIVATIONFUNCTION_H_
#define _SOFT_COMPUTING_1_ACTIVATIONFUNCTION_H_

#include "Defines.h"

class ActivationFunction{
public:
    virtual DataType compute(DataType x) = 0;
    virtual DataType computeDervative(DataType x) =0;
};
#endif //_SOFT_COMPUTING_1_ACTIVATIONFUNCTION_H_
