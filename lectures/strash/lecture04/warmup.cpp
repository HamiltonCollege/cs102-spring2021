/**
 * Warmup for February 11, 2021
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators
 * @date February 10, 2021
 */

#include <iostream>

// Controls execution of program
int main() {
    // /poll "What is the output?" "9.3" "9", "1", "0.967742"
    // we use PEMDAS, but C++ does not: left to right
    // when operators have equal precedence
    // * / % have equal precedence
    // + - has lower precedence
    std::cout << 1 - 6 / 2 + 4 * 3.1 << std::endl;
    return 0;
}
