/**
 * Testing arrays and checking if arrays of shorts are equal
 * @file arrays2.cpp
 * @author Darren Strash
 * @collaborators CS-102-01 (all of them!)
 * @date February 16, 2021
 */
#include <iostream>

/**
 * Test if two short arrays contain exactly the same elements
 * @param array1 the first array of shorts
 * @param array1 the second array of shorts
 * @param length1 the length of the first array
 * @param length2 the length of the second array
 * @return true if and only if the arrays contain exactly the same elements
 * @date February 16, 2021
 */
bool arrays_are_equal(short array1[], short array2[],
                      unsigned int length1, unsigned int length2) {

    std::cout << length1 << std::endl;
    if (length1 != length2) {
        return false;
    }
    for (int i = 0; i < length1; i++) {
        if (array1[i] != array2[i]) {
            return false;
        }
    }
    return true;
}

const unsigned int PI_LENGTH = 5;

// Controls operation of program.
int main() {
/*
    short pi[PI_LENGTH] = {3, 1, 4, 1, 5};
    short also_pi[PI_LENGTH] = {3, 1, 4, 1, 5};

    if (arrays_are_equal(pi, also_pi, PI_LENGTH, PI_LENGTH)) { //pi == also_pi) {
        std::cout << "Arrays are equal" << std::endl;
    } else {
        std::cout << "Arrays are not equal" << std::endl;
    }

    std::cout << "pi: " << pi << std::endl;
    std::cout << "also_pi: " << also_pi << std::endl;
*/

    short pi[][4] = { {1, 2, 3, 4},
                      {4, 5, 6}
                    };

    return 0;
}
