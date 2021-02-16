/**
 * Illustrating array of shorts and an array of characters
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS-102-01 (all of them!)
 * @date February 16, 2021
 */
#include <iostream>

// Controls operation of program.
int main() {
    short days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //std::cout << "Days in index 0: " << days[0] << std::endl;
    //std::cout << "Days in index 1: " << days[1] << std::endl;
    //std::cout << "Days in index 11: " << days[11] << std::endl;
    //days[0] = 30;
    //std::cout << "Days in index 0: " << days[0] << std::endl;
    //std::cout << "sizeof array: " << sizeof(days)/sizeof(days[0]) << std::endl;
    //std::cout << "ummm, why?" << days[60] << std::endl; // invalid memory read

    char hello[40] = {'h','i'}; // fills indices 2 -> 39 with 0's, which is the '\0' character
    std::cout << "index 3 of hello is: " << (int) hello[3] << std::endl;
    return 0;
}
