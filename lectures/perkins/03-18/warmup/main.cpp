#include <iostream>

// Which one of these six is naughty-pants?

void foo(short * x) {
    std::cout << x << std::endl;  // 1  x is 0x7ffd4ab9d20e (x is a pointer)
    std::cout << *x << std::endl; // 2
    std::cout << &x << std::endl; // 3 &x is 0x7ffd4ab9d1e8 (&x is a pointer to a pointer)
}

void bar(short & x) {
    std::cout << x << std::endl;  // 4
//    std::cout << *x << std::endl; // 5 * is the 'indirection operator'
    std::cout << &x << std::endl; // 6
}

int main() {
    short x = 77;
    foo(&x);
    bar(x);
    return 0;
}
