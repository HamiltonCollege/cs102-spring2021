/**
 * Print positive integer to standard output
 * @file positive_int.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 2, 2021
 */
#include <iostream>

/**
 * Recursively print a positive integer to standard output
 * @param positive_int the positive integer to print
 * @return none
 */
void recursive_print_positive_integer(int positive_int) {

    if (positive_int < 10) {
        std::cout << positive_int;
        return;
    }
    //print the rest
    recursive_print_positive_integer(positive_int / 10);

    //print last digit
    std::cout << positive_int % 10;
}

// Controls operation of program.
int main() {
    int positive_int = 0;
    std::cin >> positive_int;
    recursive_print_positive_integer(positive_int);
    return 0;
}
