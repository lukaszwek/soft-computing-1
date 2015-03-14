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
    Neuron(ActivationFunction *func, int inputNumber, DataType defaultWeight = 1.0, DataType learningRate = 0.1);
    DataType output(DataVector const &inputs) const;
    DataVector train(DataVector const &inputs, DataType const &desiredOutput);
private:
    void inline checkInputNumber(DataVector const &inputs) const;
    DataType inline computeH(DataType x);
    ActivationFunction  * function;
    DataVector inputWeights;
    DataType learningRate;
};


#endif //_SOFT_COMPUTING_1_NEURON_H_
