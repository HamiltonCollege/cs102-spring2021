/**
 * Read in 2d-array from user, sum up its rows, and print it.
 * @file array.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date February 23, 2021
 */
#include <iostream>

const int NUM_ROWS = 3;
const int NUM_COLS = 4;

/**
 * Read a 3x4 2d array of integers from standard input
 * @param the_array the array to read integers into
 * @return nothing
 */
void read_array(int the_array[NUM_ROWS][NUM_COLS]) {
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
void print_array(int the_array[NUM_ROWS][NUM_COLS]) {
    for (int row = 0; row < NUM_ROWS; row++) {
        for (int col = 0; col < NUM_COLS; col++) {
            std::cout << the_array[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

/**
 * For each row of a 3x4 array of integers, put the sume
 * of that row's elementsin the final column of that row.
 * @param the_array the array for which we want to sum the rows
 * @return nothing
 */
void sum_rows(int the_array[NUM_ROWS][NUM_COLS]) {
    for (int row = 0; row < NUM_ROWS; row++) {
        int sum = 0;
        for (int col = 0; col < NUM_COLS - 1; col++) {
            sum += the_array[row][col];
        }
        the_array[row][NUM_COLS - 1] = sum;
    }
}

// Controls operation of program.
int main() {
    int my_array[NUM_ROWS][NUM_COLS] = {};
    read_array(my_array);
    print_array(my_array);
    sum_rows(my_array);
    std::cout << std::endl;
    print_array(my_array);
    return 0;
}
