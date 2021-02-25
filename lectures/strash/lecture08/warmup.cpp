/**
 * Warmup for February 25, 2021
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date February 25, 2021
 */
#include <iostream>

void mystery(int x, int &y) {
    if (x > y) {
        y = x;
    } else if (y > x) {
        x = y;
    } else {
        int new_int = x + y;
        x = new_int;
        y = new_int;
    }
}

int main() {
    int x = 7;
    int y = 5;
    mystery(y, x);
    std::cout << "after mystery, x=" << x << ", y=" << y << std::endl;
    return 0;
}
