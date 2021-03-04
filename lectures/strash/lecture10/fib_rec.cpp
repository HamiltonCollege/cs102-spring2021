/**
 * Recursively compute n-th Fibonacci number
 * @file fib_rec.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 2, 2021
 */
#include <iostream>


/**
 * Recursively compute n-th Fibonacci number and count the number of
 * recursive calls.
 * This is slow and is therefore not the right technique to use.
 * @param n the number from which we compute the n-th Fibonacci number
 * @param num_calls the number of recursive calls made by the algorithm
 * @return the n-th Fibonacci number
 */
int fib(int n, long &num_calls) {
    num_calls++;
    if (n == 0 || n == 1)
        return n;

    // recursive case
    return fib(n - 1, num_calls) + fib(n - 2, num_calls);
}

// Controls operation of program.
int main() {
    std::cout << "n\tnum_calls" << std::endl;
    for (int n = 1; n < 45; n++) {
        long num_calls = 0;
        fib(n, num_calls);
        std::cout << n << "\t" << num_calls << std::endl;
    }
    return 0;
}
