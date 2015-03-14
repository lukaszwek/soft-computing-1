//
// Created by Michał Gutowski on 14.03.15.
//

#include "SineFunction.h"

DataType SineFunction::compute(DataType x) {
    return std::sin(degreesToRadians(x));
}

DataType SineFunction::computeDervative(DataType x) {
    return std::cos(degreesToRadians(x));
}

DataType SineFunction::degreesToRadians(DataType x) {
    return (x*180/M_1_PI);
}
