/**
 * Compute tax on given income in tvarps
 * @file tvarps.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date Feburary 9, 2021
 */
#include <iostream>
#include <iomanip>

/**
 * Compute tax and return given income
 * @param income the income in tvarps
 * @return tax in tvarps
 */
double compute_tax(double income) {
    double tax = 0.0;

    if (income > 35000.0) {
        tax += (income - 35000.00) * 0.20;
        income = 35000.0;
    }
    if (income > 15000.0) {
        tax += (income - 15000.0) * 0.15;
        income = 15000.00;
    }
    if (income > 5000.0) {
        tax += (income - 5000.0) * 0.10;
        income = 5000.0;
    }

    return tax;
}

int main() {
    // while loop to ask for income
    double income = 0.0;
    std::cout << "Enter an income: ";
    std::cin >> income;
    while (income >= 0.0 && !std::cin.fail()) {
        // compute tax
        double tax = compute_tax(income);
        std::cout << "Tax is: " << std::setprecision(2)
                  << std::fixed << tax << std::endl;
        std::cout << "Enter an income: ";
        std::cin >> income;
    }
    return 0;
}
