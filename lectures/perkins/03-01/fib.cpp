#include <iostream>

int fib(int & counter, int n) {

    if (n == 1 || n == 2) {
        counter++;
        return 1;
    }

    counter++;
    return fib(counter, n - 1) + fib(counter, n - 2);

}

int main() {

    std::cout << "Enter n: ";
    int n = 0;
    std::cin >> n;
    int counter = 0;
    std::cout << fib(counter, n) << std::endl;
    std::cout << counter << std::endl;

}
