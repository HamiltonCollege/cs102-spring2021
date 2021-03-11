#include <iostream>

void ref_tripler(int & b, int & c) {  // b,x -> 10  c,y -> 20
    b = 3 * b;  // b,x -> 30
    c = 3 * c;  // c,y -> 60
    // return c;
}

// int tripler(int a) {
//     return 3 * a;
// }

int main() {
    int x, y;
    std::cin >> x; // x = 10
    std::cin >> y; // y = 20
    // pass a value to a function:
    // int t = tripler(x);
    // std::cout << "x is " << x << " and t is " << t << std::endl;

    // pass a reference (variable) to a function:
    ref_tripler(x, y);
    std::cout << "x is " << x << std::endl; // x = 30
    std::cout << "y is " << y << std::endl; // y = 150

    return 0;
}
