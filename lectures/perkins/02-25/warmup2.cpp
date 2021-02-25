
// Warmup: What is the output?

#include <iostream>

int bar(int & m, int n) {
    m--;
    return m + n;
}

void foo(int & x, int y) {
    y = bar(x, y);
    // int & z = x;
    x++;
}

int main() {
    int a = 3;
    int b = 5;
    foo(a, b);
    int q = bar(a, b);
    std::cout << "a is " << a << " and b is " << b << std::endl;
    std::cout << "&a is " << &a << " and &b is " << &b << std::endl;
    return 0;
}
