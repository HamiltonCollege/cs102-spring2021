/**
 * Warmup for March 9, 2021
 * @file warmup.cpp
 * @name Darren Strash
 * @collaborators none
 * @date March 9, 2021
 */
#include <iostream>

// Approximately how many operations does loop_de_loop perform, in terms of "n"?
long loop_de_loop(int n) {
    long loop_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            loop_count++;
        }
    }
    return loop_count;
}

int main() {
    int n = 100000;
    std::cout << "For n = " << n << ", loops = " << loop_de_loop(n) << std::endl;
    return 0;
}
