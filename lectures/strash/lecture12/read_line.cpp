/**
 * Read a line of test from the user of any length.
 * @file read_line.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 11, 2021
 */
#include <iostream>

/**
 * Resize an array of characters so that a new character
 * can be written to it.
 * @param line a reference to the string of characters
 * @param size a reference to the size of the string
 */
void resize_array(char * & line, int & size) {
    int new_size = size + 1;
    char * new_line = new char[new_size];
    for (int i = 0; i < size; i++) {
        new_line[i] = line[i];
    }
    delete[] line;
    line = new_line;
    size = new_size;
}

/**
 * Read a line of characters of arbitrary length from standard input.
 * @return a pointer to the line of characters read
 */
char * read_line() {
    int size = 10;
    char * line = new char[size];
    char current_char = std::cin.get();
    int current_index = 0;
    while (current_char != '\n') {
        if (current_index == size) {
            resize_array(line, size);
        }
        line[current_index] = current_char;
        current_index++;
        current_char = std::cin.get();
    }
    // The following lines fix the memory write error from class.
    //if (current_index == size) {
    //    resize_array(line, size);
    //}
    line[current_index] = '\0';
    return line;
}

// Controls operation of program.
int main() {
    std::cout << "Enter as much text as you'd like! ";
    char * my_line = read_line();
    delete[] my_line;
    return 0;
}
