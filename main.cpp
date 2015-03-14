#include <iostream>
#include "Neuron.h"
#include "SineFunction.h"
int main() {
    std::cout << "Soft computing - TASK 1" << std::endl;

    const int learningSetSize = 3;
    DataType inputs[][learningSetSize] =
            {
                    {1, 0, 0}, //1
                    {0, 1, 0}, //2
                    {0, 0, 1}, //3
            };
    DataType desiredOutputs[] = {1, 2, 3};


    std::vector<DataVector> learningInputs;
    for (int i = 0; i < sizeof(inputs) / (sizeof(DataType) * learningSetSize); ++i) {
        DataVector inputVector(inputs[i], inputs[i] + learningSetSize);
        learningInputs.push_back(inputVector);
    }


    Neuron neuron(new SineFunction(), learningSetSize, 1.0, 0.5);
    for (int i = 0; i < learningInputs.size(); ++i) {
        DataVector inputVector = learningInputs[i];
        std::cout << "Output" << i << "before learning: " << neuron.output(inputVector) << std::endl;
    }
    std::cout << std::endl;

    for(int i = 0; i < 30; ++i){
        for(int j=0; j< learningInputs.size(); ++j){
            neuron.train(learningInputs[j], desiredOutputs[j]);
        }
        for (int j = 0; j < learningInputs.size(); ++j) {
            DataVector inputVector = learningInputs[j];
            std::cout << "Output " << j <<" after " << i <<"epoch " << neuron.output(inputVector) << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}