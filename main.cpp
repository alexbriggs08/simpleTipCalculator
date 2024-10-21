#include <iostream>
#include <cmath>

// custom functions
double getUserPrice() {
    double price {};
    std::cout << "Please enter a price: \n";
    std::cin >> price;
    return price;
}
int getUserTipPercentage() {
    int tipPercentage {};
    std::cout << "Please enter a tip percentage: 15, 18, 20, 25 \n";
    std::cin >> tipPercentage;
    return tipPercentage;
}

// main function
int main() {
    // variables
    double price = getUserPrice();
    double tipAmmount;
    int tipPercentage = getUserTipPercentage();
    double total {}; // sum of the tip and price


    /* a switch is good to use in the this case because using repated if statement is not optimal
     so using a switch command where you only need to switch out one variable is okay and reduces
     memory load */
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

    total = tipAmmount + price;
    std::cout << "The total including tip is \n" << total << '\n';
    std::cout << "The tip ammount is: \n" << tipAmmount << std::endl;

    return 0;
}