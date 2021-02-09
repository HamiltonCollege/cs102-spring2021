/**
 * Accept start day from user and output weekly meeting days
 * @file scheduling.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date Feburary 9, 2021
 */
#include <iostream>

const int FEBRUARY_DAYS = 28;

// Control operation of the program
int main() {
    // Plan:
    //   give start day for meeting (a number)
    //   output days we have weekly meetings during Feb.

    // user inputs start day
    int input_day = 0;
    std::cout << "Enter a start date: ";
    std::cin >> input_day;

    // loop to output days
    int current_day = input_day;
    std::cout << current_day;
    current_day += 7;
    while (current_day <= FEBRUARY_DAYS) {
        std::cout << " " << current_day;
        current_day += 7; //shorthand for current_day = current + 7
    }
    std::cout << std::endl;

    return 0;
}
