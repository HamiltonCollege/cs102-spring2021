/**
 * Recursive max function, assuming array size >= 1
 * @file max.cpp
 * @author Darren Strash
 * @collaborators CS 102-02 (all of them!)
 * @date February 25, 2021
 */
#include <iostream>
#include <climits>

const int ARRAY_SIZE = 3;

/**
 * iteratively compute the max of an array of ints
 * @param array the array of ints
 * @param array_length the length of the array
 * @return the maximum int in array
 */
int max(int array[], const int array_length) {
    int max_value = INT_MIN;
    for (int i = 0; i < array_length; i++) {
        if (array[i] > max_value)
            max_value = array[i];
    }
    return max_value;
}

/**
 * recursively compute the max of an array of ints
 * @param array the array of ints
 * @param array_length the length of the array (>= 1 assumed)
 * @return the maximum int in array
 */
int recursive_max(int array[], const int array_length){
    if (array_length == 1) {
        return array[0];
    }
    // last element
    int last_int = array[array_length - 1];
    // max of the rest
    int max_of_rest = recursive_max(array, array_length - 1);
    // return the larger of the two
    if (last_int > max_of_rest) {
        return last_int;
    }
    return max_of_rest;
}

// Controls operation of program.
int main() {
    int array[ARRAY_SIZE] = {1, 100, 12};
    //std::cout << "Largest element is: " << max(array, ARRAY_SIZE) << std::endl;
    std::cout << "Largest element is: " << recursive_max(array, ARRAY_SIZE) << std::endl;
}
