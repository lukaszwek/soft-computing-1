//
// Created by Michał Gutowski on 13.03.15.
//

#ifndef _SOFT_COMPUTING_1_NEURON_H_
#define _SOFT_COMPUTING_1_NEURON_H_
#include <stdexcept>
#include "ActivationFunction.h"
#include "Defines.h"

class Neuron {
public:
    Neuron(ActivationFunction * func, int inputNumber, DataType defaultWeight = 1.0);
    DataType output(DataVector inputs);
private:
    ActivationFunction * function;
    DataVector inputWeights;
};


#endif //_SOFT_COMPUTING_1_NEURON_H_
