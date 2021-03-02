/**
 * Print positive integer to standard output
 * @file positive_int.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 2, 2021
 */
#include <iostream>

const int ARRAY_SIZE = 5;

/**
 * Recursively compute whether an array is in increasing order
 * @param the_array the array to test for the increasing property
 * @param the length of the array to check for the property
 * @return true if the first array_length ints in the_array are 
 *              in increasing order, false otherwise
 */
bool recursive_is_increasing(int the_array[], int array_length) {
    if (array_length == 0 || array_length == 1)
        return true;

    bool current_increasing = the_array[array_length - 1]
                                > the_array[array_length - 2];

    return current_increasing &&
        recursive_is_increasing(the_array, array_length - 1);
}

// Controls operation of program.
int main() {
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    std::cout << "Is increasing? " << recursive_is_increasing(array, ARRAY_SIZE) << std::endl;
}
