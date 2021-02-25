/**
 * Recursive sum function, assuming array size >= 0
 * @file sum.cpp
 * @author Darren Strash
 * @collaborators CS 102-02 (all of them!)
 * @date February 25, 2021
 */
#include <iostream>

const int ARRAY_SIZE = 5;

/**
 * iteratively compute the sum of elements in an array of ints
 * @param array the array of ints
 * @param array_length the length of the array
 * @return the sum of ints in the array
 */
int sum(int array[], const int array_length) {
    int sum_value = 0;
    for (int i = 0; i < array_length; i++)
        sum_value += array[i];
    return sum_value;
}

/**
 * recursively compute the sum of elements in an array of ints
 * @param array the array of ints
 * @param array_length the length of the array (>= 0 assumed)
 * @return the sum of ints in the array
 */
int recursive_sum(int array[], const int array_length) {
    if (array_length == 0) {
        return 0;
    }
    // get last element
    int last_int = array[array_length - 1];
    // get sum of the rest
    int sum_of_rest = recursive_sum(array, array_length - 1);
    // return sum of last element and the rest
    return sum_of_rest + last_int;
}

// Control operation of program.
int main() {
    int array[ARRAY_SIZE] = {-10, 5, 1, 100, 12};
    std::cout << "Sum of elements is: " << sum(array, ARRAY_SIZE) << std::endl;
    std::cout << "Sum of elements is: " << recursive_sum(array, ARRAY_SIZE) << std::endl;
    //std::cout << "let's break it! :" << recursive_sum(array, 0) << std::endl;
}
