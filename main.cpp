#include <iostream>
#include <cmath>

// calling functions from functions.cpp
double getUserPriceInput();
int getUserTipPercetangeInput();
char getUserConformationInput();

// main function
int main() {
    double price { getUserPriceInput() };
    if (price <= 0) {
        return 1;
    }

    double tipAmmount;
    int tipPercentage { getUserTipPercetangeInput() };
    switch (tipPercentage) {
        case 15:
            tipAmmount = (price * .15);
        break;
        case 18:
            tipAmmount = (price * .18);
        break;
        case 20:
            tipAmmount = price * .20;
        break;
        case 25:
            tipAmmount = price * .25;
        break;
        default:
            std::cout << "Something went wrong: Please enter a valid tip percentage." << std::endl;
        return 1; //exit with an error code
    }
    double total {};
    total = tipAmmount + price;
    std::cout << "The total including tip is \n" << total << '\n';
    std::cout << "The tip ammount is: \n" << tipAmmount << std::endl;

    return 0;
}
