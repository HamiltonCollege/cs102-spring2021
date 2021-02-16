/**
 * Warmup for February 16, 2021
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators
 * @date February 16, 2021
 */
#include <iostream>

// Controls execution of program
// /poll "What will print out?" "4", "0", "undefined, there's a invalid memory read"
int main() {
    short pi[6] = {3,1,4};
    std::cout << pi[5] << std::endl;
    // answer: 0, it's as if pi[6] was initialized to {3,1,4,0,0,0};
    return 0;
}
