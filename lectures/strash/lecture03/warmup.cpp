/**
 * Warmup: what is the result of this code?
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators Dave Perkins
 * @date Feburary 9, 2021
 */
#include <iostream>

int main() {
    for (int i = 0; i < 3; i++) {
        int total = 0; // scope is only between { and }
        total += i*i;
    }
    std::cout << total << std::endl;
    return 0;
}
