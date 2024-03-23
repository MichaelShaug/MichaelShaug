// Program: shaug_michael_monthly_bills.cpp
// Author: Michael Shaug
// Class: CS 101 Section [Your Section Number]
// Description: This program calculates the total monthly and annual expenses based on the user's input for various bills.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store monthly bills
    double rent, utilities, carPayment, carInsurance, groceries, miscellaneous;
    
    // Prompt the user to enter monthly bills
    cout << "Enter the monthly cost for the following bills:" << endl;
    cout << "Rent: $";
    cin >> rent;
    cout << "Utilities: $";
    cin >> utilities;
    cout << "Car payment: $";
    cin >> carPayment;
    cout << "Car insurance: $";
    cin >> carInsurance;
    cout << "Groceries: $";
    cin >> groceries;
    cout << "Miscellaneous: $";
    cin >> miscellaneous;
    
    // Calculate total monthly cost
    double monthlyCost = rent + utilities + carPayment + carInsurance + groceries + miscellaneous;
    
    // Calculate total annual cost
    double annualCost = monthlyCost * 12;
    
    // Display total monthly and annual expenses
    cout << fixed << setprecision(2);
    cout << "Total monthly cost: $" << monthlyCost << endl;
    cout << "Total annual cost: $" << annualCost << endl;
    
    return 0;
}
