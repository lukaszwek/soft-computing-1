cmake_minimum_required(VERSION 2.8.4)
project(soft_computing_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(soft_computing_1 ${SOURCE_FILES} Neuron.cpp Neuron.h ActivationFunction.h Defines.h SineFunction.cpp SineFunction.h LinearFunction.cpp LinearFunction.h)