/**
 * Warmup for March 16, 2021
 * @file warmup.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 16, 2021
 */
#include <iostream>

// Does the following have a memory leak?
int main() {

    int * my_array = new int[10];
    int * array_again = my_array;

    delete[] array_again;
    return 0;
}
