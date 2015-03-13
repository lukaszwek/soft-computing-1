//
// Created by Michał Gutowski on 13.03.15.
//

#include "Neuron.h"


Neuron::Neuron(ActivationFunction *func, int inputNumber, DataType defaultWeight)
        : function(func), inputWeights(inputNumber, defaultWeight)
{

}

DataType Neuron::output(DataVector inputs) {
    if(inputs.size() != inputWeights.size()){
        throw std::invalid_argument("input number mismatch");
    }
    DataType weightedSum = 0;
    for(unsigned long i =0; i< inputs.size(); ++i){
        weightedSum += inputs[i] * inputWeights[i];
    }
    return function->execute(weightedSum);
}
