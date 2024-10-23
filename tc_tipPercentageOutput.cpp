//
// Created by Alex Briggs on 10/23/24.
//
#include <iostream>

double tipPercentageOutput(const int tipPercentage, const double price) {
    double tipAmount;
    switch (tipPercentage) {
        case 15:
            tipAmount = (price * .15);
        return tipAmount;
        case 18:
            tipAmount = (price * .18);
        return tipAmount;case 20:
            tipAmount = (price * .20);
        return tipAmount;
        case 25:
            tipAmount = (price * .25);
        return tipAmount;
        default:
            std::cout << "Error: Something went wrong when trying to find out tip amount \n";
        return 1;

    }

}
