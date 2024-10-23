//
// Created by Alex Briggs on 10/23/24.
//
#include <iostream>

int getUserTipPercetangeInput() {
    std::cout << "Please enter a tip percentage: 15, 18, 20, 25 \n";
    int tipPercentage {};
    std::cin >> tipPercentage;
    return tipPercentage;
}