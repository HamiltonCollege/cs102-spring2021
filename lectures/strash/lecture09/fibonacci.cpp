/**
 * Recursively compute n-th Fibonacci number
 * @file fibonacci.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 2, 2021
 */
#include <iostream>

/**
 * Recursively compute n-th Fibonacci number
 * This is slow and is therefore not the right technique to use.
 * @param n the number from which we compute the n-th Fibonacci number
 * @return the n-th Fibonacci number
 */
int fib(int n) {
    if (n == 0 || n == 1)
        return n;

    // recursive case
    return fib(n - 1) + fib(n - 2);
}

// Controls operation of program.
int main() {
    int n_for_fibonacci = 0;
    std::cin >> n_for_fibonacci;
    std::cout << n_for_fibonacci << "th Fibonacci number: " 
              << fib(n_for_fibonacci) << std::endl;
    return 0;
}
