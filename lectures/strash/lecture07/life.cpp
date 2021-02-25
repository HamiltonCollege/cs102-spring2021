/**
 * Illustrate use of references and passing variables by reference
 * @file life.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date February 23, 2021
 */
#include <iostream>

/**
 * Change integer references x and y to 3 and 4 and then print them.
 * @param x a reference to an integer to update to 3.
 * @param y a reference to an integer to update to 4.
 * @return nothing
 */
void important(int &x, int &y) {
    x = 3;
    y = 4;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

// Controls operation of program.
int main() {
    /*
    int life = 3;
    int &universe = life;
    std::cout << "&universe: " << &universe << std::endl;
    std::cout << "&life: " << &life << std::endl;
    std::cout << "life = " << life << std::endl;
    universe = 42;
    std::cout << "life = " << life << std::endl;
    */

    int x = 0;
    int y = 0;
    important(x, y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    return 0;
}
