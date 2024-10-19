#include <iostream>
#include <cmath>

// variables
int tipPercentage {};
double price {};
double tipAmmount;
double total {}; // sum of the tip and price

int main() {
    std::cout << "Please enter a price: " << std::endl;
    std::cin >> price;
    std::cout << "Please enter your tip percentage: 15, 18, 20, 25 " << std::endl;
    std::cin >> tipPercentage;

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
            std::cout << "Please enter a valid tip percentage." << std::endl;
            return 1; //exit with an error code


    }
    total = tipAmmount + price;
    std::cout << "The price with tip is: " << total << std::endl;

    return 0;
}