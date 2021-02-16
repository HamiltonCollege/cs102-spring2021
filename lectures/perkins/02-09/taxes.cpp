// Question 5 of Chapter 6
// const qualifier
// floats
// order of operations

// first 5000 tvarps 0%
// next 10000 10%
// next 20000 15%
// after 35000 20%

// income: 38000
// 38000 - 35000 = 3000 * 0.20 = 600
// now we have 35000 on the nose
// 

#include <iostream>

const int CUTOFF_0 = 5000;
const int CUTOFF_1 = 10000;
const int CUTOFF_2 = 20000;
const int CUTOFF_3 = 35000;

const float TAX_0 = 0.00;
const float TAX_1 = 0.10;
const float TAX_2 = 0.15;
const float TAX_3 = 0.20;

int main() {
    std::cout << "Enter your income in tvarps: ";
    int income = 0;
    std::cin >> income;
    float taxes = 0.0;
    while (income >= 0) {
        if (income > CUTOFF_0) {
            income = income - CUTOFF_0;
        } else if (income >= CUTOFF_1) {
            int diff = 0;
            diff = income - CUTOFF_1;
            taxes += diff * TAX_1;
            income = CUTOFF_1;
        } else if (income >= CUTOFF_2) {
            int diff = 0;
            diff = income - CUTOFF_2;
            taxes += diff * TAX_2;
            income = CUTOFF_2;
        } else if (income >= CUTOFF_3) {
            int diff = 0;
            diff = income - CUTOFF_3;
            taxes += diff * TAX_3;
            income = CUTOFF_3;
        }
    }
    std::cout << "Final taxes: " << taxes << std::endl;

    return 0;
}
