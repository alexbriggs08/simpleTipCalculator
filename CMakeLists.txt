cmake_minimum_required(VERSION 3.29)
project(tipCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(tipCalculator main.cpp
        tc_getUserPriceInput.cpp
        tc_getUserTipPercentageInput.cpp
        tc_errorMessage.cpp
        tc_tipPercentageOutput.cpp)
