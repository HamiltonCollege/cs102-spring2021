/**
 * Warmup for March 18, 2021
 * @file warmup.cpp
 * @author Dave Perkins
 * @collaborators None
 * @date March 17, 2021
 */
#include <iostream>

// Which one of these six is naughty-pants?

void foo(short * x) {
    std::cout << x << std::endl;  // 1
    std::cout << *x << std::endl; // 2
    std::cout << &x << std::endl; // 3
}

void bar(short & x) {
    std::cout << x << std::endl;  // 4
    std::cout << *x << std::endl; // 5
    std::cout << &x << std::endl; // 6
}

int main() {
    short x = 88;
    foo(&x);
    bar(x);
    return 0;
}
