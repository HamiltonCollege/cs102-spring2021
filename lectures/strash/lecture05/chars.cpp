/**
 * Illustrating C-style strings and making custom strlen function
 * @file chars.cpp
 * @author Darren Strash
 * @collaborators CS-102-01 (all of them!)
 * @date February 16, 2021
 */
#include <iostream>
#include <cstring> // for strlen

/**
 * return the length of a given C-style string
 * @param input_string the input string
 * @return the length of the C-style string (number of characters before '\0')
 */
unsigned int my_string_length(char input_string[]) {
    unsigned int length_of_string = 0;
    while (input_string[length_of_string] != '\0') {
        length_of_string++;
    }
    return length_of_string;
}

// Control execution of the program
int main() {
    char a = 'a'; // note the single quotes
    std::cout << a << std::endl;

    // See the ASCII table: http://www.asciitable.com/
    std::cout << (int) a << std::endl;

    // Capitalize
    char cap_a = a - 32;
    std::cout << "capital a: " << (char) (a - 32) << std::endl;

    char string1[2048] = {'a', 'b', 'c'}; // does not end in '\0', will make invalid read(s) after 'c'!
    char string2[4] = "abc"; // ends in an invisible '\0'

    //std::cout << "string size 1: " <<  sizeof(string1)/sizeof(string1[0]) << std::endl;
    //std::cout << "string size 2: " <<  sizeof(string2)/sizeof(string2[0]) << std::endl;

    //std::cout << "Enter a string: ";
    //std::cin >> string1;
    //std::cout << "string 1: " << string1 << std::endl;

    //std::cout << "string1: " << string1 << std::endl;
    //std::cout << "string2: " << string2 << std::endl;

    // C-style strings: arrays of characters
    //                               1         2         3         4
    //                     0123456789012345678901234567890123456789012
    char my_string[100] = "The Answer to the Ultimate Question is...?";

    //indexing
    std::cout << my_string << " ";
    std::cout << my_string[18] << my_string[22] << std::endl;

    // What's at index 42?
    std::cout << "What is at index 42?: " << (int) my_string[42] << std::endl;

    // string length
    std::cout << "Length of string is: " << strlen(my_string) << std::endl;

    // How does strlen do it?
    // see my_string_length!
    std::cout << "Manually computed length: " << my_string_length(my_string) << std::endl;

    // What happens if there is no '\0'? What if we don't stop reading?
    // Invalid memory reads until a '\0' is found

    return 0;
}
