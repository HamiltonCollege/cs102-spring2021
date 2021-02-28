/**
 * Write a function to read an unsigned integer like cin does.
 * @file uint.cpp
 * @author Darren Strash
 * @collaborators None
 * @date February 25, 2021
 */
#include <iostream>

/**
 * Read unsigned int value from standard input
 * @param failed set to true if and only if an unsigned int was successfully read
 * @return the read unsigned int
 */
unsigned int read_uint(bool & failed) {
    while (std::cin.peek() == ' ' or std::cin.peek() == '\n')
        std::cin.get();

    //exercise left to reader: allow + at beginning of number
    if (std::cin.peek() < '0' or std::cin.peek() > '9') {
        failed = true;
        return 0;
    }

    failed = false;
    if (std::cin.peek() == '0') {
        std::cin.get();
        return 0;
    }

    unsigned int return_uint = 0;
    while (std::cin.peek() <= '9' and std::cin.peek() >= '0') {
        unsigned int new_digit = std::cin.get() - 48;
        return_uint = 10 * return_uint + new_digit;
        //exercise left to reader: fail if too big for uint!
    }
    return return_uint;
}

// Controls operation of program
int main() {
    std::cout << "Gimme a uint! ";

    bool failed_to_read = false;
    unsigned int my_uint = read_uint(failed_to_read);
    if (failed_to_read) {
        std::cout << "Uh oh, someone didn't enter a uint..." << std::endl;
    } else {
        std::cout << "Here's what I read: " << my_uint << std::endl;
    }
    return 0;
}
