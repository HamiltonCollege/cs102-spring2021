/**
 * Illustrate number of operations when using strlen in for loop
 * @file strlen.cpp
 * @author Darren Strash
 * @collaborators none
 * @date March 9, 2021
 */
#include <iostream>
#include <cstring>

const int LENGTH = 1000000;

// Controls execution of program.
int main() {
    char my_string[LENGTH] = {};
    for (int i = 0; i < LENGTH - 1; i++) {
        my_string[i] = 'a';
    }
    my_string[LENGTH - 1] = '\0';
    int length = 0;
    //int str_length = strlen(my_string);
    //for (int i = 0; i < str_length; i++) {
    for (int i = 0; i < strlen(my_string); i++) { // replace with above lines: n^2 -> n
        length++;
    }
    std::cout << "The length is " << length << std::endl;
    return 0;
}
