//
// Created by Alex Briggs on 10/22/24.
//

#include <iostream>
#include <cmath>

double getUserPriceInput() {
    std::cout << "Please enter your price: \n";
    double price;
    std::cin >> price;

    return price;

}

int getUserTipPercetangeInput() {
    std::cout << "Please enter a tip percentage: 15, 18, 20, 25 \n";
    int tipPercentage {};
    std::cin >> tipPercentage;
    return tipPercentage;
}

void errorMessage (const std::string &message) {
    std::cout << "Error: " << message << std::endl;
}

