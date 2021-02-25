/**
 * Program to read "true" or "false" as a bool value
 * otherwise, fail reading
 * @file bool.cpp
 * @author Darren Strash
 * @collaborators CS 102-02 (everyone)
 * @date February 25, 2021
 */
#include <iostream>
#include <cstring>

/**
 * Read boolean value from standard input
 * @param failed set to true if and only if a boolean successfully read
 * @return true if read "true", false if "false"
 */
bool read_bool(bool &failed) {
    char input_string[20] = {};
    std::cin >> input_string;
    failed = false;
    if (strcmp(input_string, "true") == 0) {
        return true;
    } else if (strcmp(input_string, "false") == 0) {
        return false;
    }
    failed = true;
    return false;
}

// Controls operation of program.
int main() {
    std::cout << "Gimme a bool! ";
    //std::cin >> from_user;
    bool failed_to_read = false;
    bool from_user = read_bool(failed_to_read);
    if (failed_to_read) {
        std::cout << "Failed to read!" << std::endl;
    } else {
        std::cout << "Bool from user is: " << from_user << std::endl;
    }
    return 0;
}
