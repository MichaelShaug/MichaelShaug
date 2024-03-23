// Program: shaug_michael_percentage_calculation.cpp
// Author: Michael Shaug
// Class: CS 101 Section 16255
// Description: This program calculates the percentage of foreign and domestic cars in a car dealership based on user input.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables to store the number of foreign and domestic cars
    int foreignCars, domesticCars;
    
    // Prompt the user to input the number of foreign and domestic cars
    cout << "Enter the total number of foreign cars: ";
    cin >> foreignCars;
    cout << "Enter the total number of domestic cars: ";
    cin >> domesticCars;
    
    // Calculate the total number of cars
    int totalCars = foreignCars + domesticCars;
    
    // Calculate the percentage of foreign and domestic cars
    double foreignPercentage = (static_cast<double>(foreignCars) / totalCars) * 100;
    double domesticPercentage = (static_cast<double>(domesticCars) / totalCars) * 100;
    
    // Display the percentage of foreign and domestic cars
    cout << fixed << setprecision(2);
    cout << "Percentage of foreign cars: " << foreignPercentage << "%" << endl;
    cout << "Percentage of domestic cars: " << domesticPercentage << "%" << endl;
    
    return 0;
}
