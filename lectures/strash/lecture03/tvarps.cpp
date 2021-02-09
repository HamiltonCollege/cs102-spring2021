/**
 * Compute tax on given income in tvarps
 * @file tvarps.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date Feburary 9, 2021
 */
#include <iostream>

/**
 * Compute tax and return given income
 * @param income the income in tvarps
 * @return tax in tvarps
 */
double compute_tax(double income) {
    double tax = 0.0
/*
    if (income > 35000.0) {
        tax += (income - 35000.00) * 0.20;
        income = 35000.0;
    }
    if (income > 20000.0) {
        tax += (income - 15000.0) * 0.15;
        income = 20000.00;
    }
    if (income > 50000.0) {
        tax += (income - 50000.0) * 0.10;
        income = 5000.0;
    }
*/
    if (income > 5000) {
        income -= 5000.0;
    }
    if (income >)
    // continue computing tax
    return 0.0;
}

int main() {
    // while loop to ask for income
    double income = 0.0;
    std::cout << "Enter an income: ";
    std::cin >> income;
    while (income >= 0.0) {
        // compute tax
        double tax = compute_tax(income);
        std::cout << "Tax is: " << tax << std::endl;
        std::cout << "Enter an income: ";
        std::cin >> income;
    }
    return 0;
}
