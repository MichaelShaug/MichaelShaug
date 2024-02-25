// Introductory comments: [Michael Shaug], CS [CS_101_16255SP24V]

// Program name: Shaug_Michael_RestaurantBill
// Description: This program calculates the tax and tip on a restaurant bill for a patron with a given meal charge.
// The tax is 6.75% of the meal cost, and the tip is 20% of the total after adding the tax.
// The program displays the meal cost, tax amount, tip amount, and total bill on the screen.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double mealCost = 88.67;
    double taxRate = 0.0675; // 6.75%
    double tipRate = 0.20;   // 20%

    // Calculate tax and total with tax
    double taxAmount = mealCost * taxRate;
    double totalWithTax = mealCost + taxAmount;

    // Calculate tip and total bill
    double tipAmount = totalWithTax * tipRate;
    double totalBill = totalWithTax + tipAmount;

    // Display the results
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;

    // Answer to questions:
    // 1. The presenter is removing the subtotal variable and changing the total equation to simplify the code.
    //    Since subtotal is only used temporarily and immediately added to get the total, it can be omitted.
    
    // 2. At the end, the presenter is adding comments to explain each section of the code for better readability.

    return 0;
}
