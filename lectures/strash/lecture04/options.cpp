/**
 * Let's give a warmup!
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators
 * @date February 11, 2021
 */

#include <iostream>

void print_options() {
    std::cout << "What is the output?" << std::endl;
    std::cout << "    (a) 9.3"         << std::endl;
    std::cout << "    (b) 9"           << std::endl;
    std::cout << "    (c) 1"           << std::endl;
    std::cout << "    (d) 0.967742"    << std::endl;
}

// Controls execution of program
int main() {
    char input_char = 'u';
    //std::cout << input_char << std::endl;
    print_options();
    std::cin >> input_char;
    while (input_char != 'a' && input_char != 'G') {
        if (input_char != 'b' && input_char != 'c' && input_char != 'd') {
            std::cout << "Not a valid answer" << std::endl;
        } else {
            std::cout << "Oops, incorrect answer" << std::endl;
        }
        print_options();
        std::cin >> input_char;
    }
    if (input_char == 'G') {
        std::cout << "Thanks, God" << std::endl;
    }
    std::cout << "Correct! Congratulations!" << std::endl;
    return 0;
}
