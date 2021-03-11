/**
 * Dynamically allocate a 2d array, then read and print it.
 * @file array.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date March 11, 2021
 */
#include <iostream>

const int NUM_ROWS = 3;
const int NUM_COLS = 4;

/**
 * Read a 3x4 2d array of integers from standard input
 * @param the_array the array to read integers into
 * @return nothing
 */
void read_array(int ** the_array) {
    for (int row = 0; row < NUM_ROWS; row++) {
        for (int col = 0; col < NUM_COLS; col++) {
            std::cin >> the_array[row][col];
        }
    }
}

/**
 * print a 3x4 2d array of integers to standard output
 * @param the_array the array to print
 * @return nothing
 */
void print_array(int ** the_array) {
    for (int row = 0; row < NUM_ROWS; row++) {
        for (int col = 0; col < NUM_COLS; col++) {
            std::cout << the_array[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

// Controls operation of program.
int main() {
    // We are emulating this with dynamic memory allocation
    //int my_array[NUM_ROWS][NUM_COLS] = {};
    int ** my_array = new int *[NUM_ROWS];
    for (int i = 0; i < NUM_ROWS; i++) {
        my_array[i] = new int[NUM_COLS];
    }
    read_array(my_array);
    print_array(my_array);
    for (int i = 0; i < NUM_ROWS; i++) {
        delete[] my_array[i];
    }
    delete[] my_array;

    return 0;
}
