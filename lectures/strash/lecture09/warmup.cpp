/**
 * Warmup for March 2, 2021
 * @file warmup.cpp
 * @author David Perkins
 * @collaborators None
 * @date March 1, 2021
 */
#include <iostream>

int lolwut(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * lolwut(n - 2);
}

// Controls operation of program.
int main() {
    int n = 0;
    std::cin >> n;
    std::cout << lolwut(n) << std::endl;
    return 0;
}
