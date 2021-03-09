/**
 * Faster iterative exponentiation.
 * @file pow2.cpp
 * @name Darren Strash
 * @collaborators none
 * @date March 9, 2021
 */
#include <iostream>

/**
 * Recursively compute base^{exponent} (with ~log (exponent) recursive calls).
 * @param base the base of the exponential to compute
 * @param exponent the exponent of the exponential to compute
 * @return base^{exponent}
 */
double recursive_pow2(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    // recursive call
    if (exponent % 2 == 0) {
        double initial_pow = recursive_pow2(base, exponent / 2);
        return initial_pow * initial_pow;
    } else {
        double initial_pow = recursive_pow2(base, (exponent - 1) / 2);
        return initial_pow * initial_pow * base;
    }
}

/**
 * compute base^{exponent} (with ~log (exponent) operations).
 * @param base the base of the exponential to compute
 * @param exponent the exponent of the exponential to compute
 * @return base^{exponent}
 */
double pow2(double base, int exponent) {
    bool is_odd[32] = {};
    int exponent_copy = exponent;
    int current_index = -1;
    while (exponent_copy > 0) {
        current_index++;
        is_odd[current_index] = exponent_copy % 2;
        exponent_copy /= 2;
    }

    double result = 1;
    while (current_index >= 0) {
        result = result * result;
        if (is_odd[current_index] == 1) {
            result *= base;
        }
        current_index--;
    }
    return result;
}

// Conrol execution of program
int main() {

    std::cout << "Enter the base b: ";
    double b = 1.0;
    std::cin >> b;

    std::cout << "Enter the exponent e: ";
    int e = 0;
    std::cin >> e;

    std::cout << b << "^" << e << " = ";
    std::cout << pow2(b, e) << std::endl;

    return 0;
}
