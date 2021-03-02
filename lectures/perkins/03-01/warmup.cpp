

// Warmup: What will the output be for the input 7?

#include <iostream>

// 100 * 98 * 96 * etc * 4 * 2 = X
// 100! divided by the odds???

// 50 * 49 * 48 * etc * 2 * 1 = X/2^50
// 50! = X/2^50
// 2^50 * 50! = X

// xy = 4
// x/2 * y/2 = 2

// lolwut() n = 1 : return 1
// lolwut() n = 3 : 3 * lolwut(1) = 3 * 1 = 3
// lolwut() n = 5 : 5 * lolwut(3) = 5 * 3 = 15
// lolwut() n = 7 : 7 * lolwut(5) = 7 * 15 = 105


// main() n = 7 : lolwut(7) = 105
// call stack

long lolwut(long n) {
    if (n == 0 || n == 1)
        return 1;
    std::cout << "n is " << n << std::endl;
    return n * lolwut(n - 2);
}

int main() {
    long n = 0;
    std::cin >> n;
    std::cout << lolwut(n) << std::endl; // n = 6
    return 0;
}
