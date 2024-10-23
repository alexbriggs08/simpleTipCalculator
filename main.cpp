#include <iostream>
#include <cmath>

// calling functions from their respective file
double getUserPriceInput();
int getUserTipPercetangeInput();
char getUserConformationInput();
void errorMessage (const std::string     &message);
double tipPercentageOutput(int, double);

// this shit is pissing me off TODO: make the switch work
int main() {
    double price { getUserPriceInput() };
    if (price <= 0) {
        errorMessage("Please enter a valid price!");
        return 1;
    }

    int tipPercentage { getUserTipPercetangeInput() };
    tipPercentageOutput(tipPercentage, price);
    double tipAmmount { tipPercentageOutput(tipPercentage, price) };
    double total {};
    total = tipAmmount + price;
    std::cout << "The total including tip is \n" << total << '\n';
    std::cout << "The tip ammount is: \n" << tipAmmount << std::endl;

    return 0;
}
