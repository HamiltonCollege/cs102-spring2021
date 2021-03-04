/**
 * Show difference between iterative, recursive, and (more efficient)
 * recursive solutions to computing the power.
 * @file pow.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date Match 4, 2021
 */
#include <iostream>

/**
 * Iteratively compute base^{exponent}.
 * @param base the base of the exponential to compute
 * @param exponent the exponent of the exponential to compute
 * @return base^{exponent}
 */
double pow(double base, int exponent) {
    double answer = 1.0;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}

/**
 * Recursively compute base^{exponent} and compute number of 
 * recursive calls made by the code. (Less efficient than the next method).
 * @param base the base of the exponential to compute
 * @param exponent the exponent of the exponential to compute
 * @param num_calls a reference to the number of recursive calls made by the function
 * @return base^{exponent}
 */
double recursive_pow(double base, int exponent, long &num_calls) {
    num_calls++;
    if (exponent == 0) {
        return 1;
    }
    // recursive call
    return recursive_pow(base, exponent - 1, num_calls) * base;
}

/**
 * Recursively compute base^{exponent} and compute number of 
 * recursive calls made by the code. (More efficient than the previous method).
 * @param base the base of the exponential to compute
 * @param exponent the exponent of the exponential to compute
 * @param num_calls a reference to the number of recursive calls made by the function
 * @return base^{exponent}
 */
double recursive_pow2(double base, int exponent, long &num_calls) {
    num_calls++;
    if (exponent == 0) {
        return 1;
    }
    // recursive call
    if (exponent % 2 == 0) {
        double initial_pow = recursive_pow2(base, exponent / 2, num_calls);
        return initial_pow * initial_pow;
    } else {
        double initial_pow = recursive_pow2(base, (exponent - 1) / 2, num_calls);
        return initial_pow * initial_pow * base;
    }
}

// Control execution of program.
int main() {

    // Previous code used to test pow functions.
    /*
    std::cout << "Enter the base b: ";
    double b = 1.0;
    std::cin >> b;

    std::cout << "Enter the exponent e: ";
    int e = 0;
    std::cin >> e;

    std::cout << b << "^" << e << " = ";
    std::cout << recursive_pow2(b, e) << std::endl;
    */

    for (int i = 0; i < 30000; i++) {
        long num_calls = 0;
        recursive_pow(2, i, num_calls);
        std::cout << i << "\t" << num_calls;
        num_calls = 0;
        recursive_pow2(2, i, num_calls);
        std::cout << "\t" << num_calls << std::endl;
    }

    return 0;
}
