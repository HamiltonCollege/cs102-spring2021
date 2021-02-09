/**
 * Accept start day from user and output weekly meeting days
 * @file narrowing.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date Feburary 9, 2021
 */
#include <iostream>
#include <iomanip> // for std::setprecision

// Controls operation of the program.
int main() {

    // Precision of float is roughly 6 significant figures
    float my_float = (float) 10 / (float) 3; // 32-bits
    std::cout << "float: " << std::setprecision(10) << my_float << std::endl;

    // Precision of double: 15 digits
    double my_double = 10.0 / 3.0; // 64-bits
    std::cout << "double:" << std::setprecision(20) << my_double << std::endl;

    //int hello = 4000000000; // narrowing
    long hello = 4000000000;
    std::cout << "hello: " << hello << std::endl;

    unsigned long users = 7000000000; // 64-bits
    std::cout << "num users: " << users << std::endl;






    return 0;
}
