#include <iostream>
#include <cstring>

// Control execution of the program
int main() {
    char a = 'a'; // note the single quotes
    std::cout << a << std::endl;

    // ASCII code "ask key"
    std::cout << "the ASCII code for " << a << " is " << (int) a << std::endl;
    char cap_a = 'a' - 32;

    // Capitalize
    std::cout << "the capitalization of " << a << " is " << cap_a << std::endl;

    // C-style strings: arrays of characters
    //                            1         2         3         4
    //                  0123456789012345678901234567890123456789012
    char my_string[] = "The Answer to the Ultimate Question is...?";
    std::cout << my_string << " ";

    //indexing
    std::cout << my_string[18] << my_string[22] << std::endl;

    // What's at index 42? '\0' -> has integer value 0. See ASCII table
    // non-printable character, do you know another?
    // std::cout << "String ends with: " << (int) my_string[42] << std::endl;

    // stored sequentially in memory -> gdb?
    // g++ -g chars.cpp
    // gdb ./a.out
    // b 20   -> set breakpoint at line 20
    // run -> start running the program
    // x/43db &my_string -> show 43 bytes, interpreted as decimal numbers
    // x/43cb &my_string -> show 43 bytes, interpretated as characters
    // x/128cb &my_string -> show 128 characters -> see 'a' and 'A'
    // x/128ib &my_string -> show interpretation as processor instructions!
    // quit

    // strlen -> computes length of string (excluding ending '\0')
    // #include <cstring>
    // std::cout << "Length of string is: " << strlen(my_string) << std::endl;

    // How does strlen do it?

    // What happens if there is no '\0'? What if we don't stop reading?
    return 0;
}
