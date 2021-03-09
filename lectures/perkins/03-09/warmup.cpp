
// Warmup: What is the output if x = 3 and y = 5?

#include <iostream>

long foo(int b, int e) {  // b = 3, e = 1
    if (e == 1)
        return b;

    long z = foo(b, e / 2);

    if (e % 2 == 0) { // e is even
        return z * z;
    } else {          // e is odd
        return z * z * b;
    }
}

int main() {
    std::cout << "Enter a positive integer: ";
    int x = 0;
    std::cin >> x;
    std::cout << "Enter a positive integer: ";
    int y = 0;
    std::cin >> y;
    std::cout << foo(x, y) << std::endl; // x = 3, y = 5
    return 0;
}
