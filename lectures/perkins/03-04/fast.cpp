#include <iostream>

// pow() b = 3, e = 1 : return 3
// pow() b = 3, e = 3 : z = 3 : return 3 * 3 * 3 = 27
// pow() b = 3, e = 6 : z = 27 : return 27 * 27 = 3^6
// pow() b = 3, e = 12 : z = 3^6 : return 3^6 * 3^6 = 3^12
// main() b = 3, e = 12 : prints 3^12
// call stack

long pow(int b, int e) {

    if (e == 1)
        return b;

    // What if we want 3^12 -> 3^6 3^6
    // What if we want 3^13 -> 3^6 3^6 3^1

    long z = pow(b, e / 2);

    if (e % 2 == 0) {
        return z * z;
    } else {
        return z * z * b;
    }
}

int main() {

    std::cout << "Enter the base b: ";
    int b = 0;
    std::cin >> b;

    std::cout << "Enter the exponent e: ";
    int e = 0;
    std::cin >> e;

    std::cout << b << "^" << e << " = ";
    std::cout << pow(b, e) << std::endl;

    return 0;
}
