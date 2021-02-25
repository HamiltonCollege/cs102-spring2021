/**
 * Warmup for February 23: multidimensional arrays
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date February 23, 2021
 */
#include <iostream>

int main() {
    int boring[][2] = {{1, 2},
                       {3, 4}};

    std::cout << "Interesting? " << boring[0][3] << std::endl;
    return 0;
}
