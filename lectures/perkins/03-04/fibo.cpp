#include <iostream>

// 1, 3, 4, 7, 11, 18, 29, 47, 76, 123, etc (Lucas sequence)
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, etc (Fibonacci sequence)

long fibo(int n) {

    if (n == 1 || n == 2)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    std::cout << "Enter n: ";
    int n = 0;
    std::cin >> n;
    std::cout << "Fibonacci number " << n << " is: ";
    std::cout << fibo(n) << std::endl;
    return 0;
}
