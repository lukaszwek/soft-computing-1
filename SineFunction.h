//
// Created by Michał Gutowski on 14.03.15.
//

#ifndef _SOFT_COMPUTING_1_SINEFUNCTION_H_
#define _SOFT_COMPUTING_1_SINEFUNCTION_H_

#include <cmath>
#include "ActivationFunction.h"


class SineFunction : public ActivationFunction{

public:
    virtual DataType computeDervative(DataType x);

    virtual DataType compute(DataType x);

private:
    DataType inline degreesToRadians(DataType x);
};


#endif //_SOFT_COMPUTING_1_SINEFUNCTION_H_
