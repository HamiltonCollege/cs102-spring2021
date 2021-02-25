
// Warmup: What is the output?

#include <iostream>

int bar(int m, int n) {
    return m + n;
}

void foo(int & x, int y) {
    y = bar(x, y);
    x++;
}

int main() {
    int a = 3;
    int b = 5;
    foo(a, b);
    std::cout << "a is " << a << " and b is " << b << std::endl;
    return 0;
}
