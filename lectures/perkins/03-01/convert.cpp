#include <iostream>

// Ask the user for an integer and convert it to binary:

// 413 = (3 * 10^0) + (1 * 10^1) + (4 * 10^2) + etc
// 13 -> (1 * 2^0) + (0 * 2^1) + (1 * 2^2) + (1 * 2^3) = 1 + 0 + 4 + 8
// 13 -> 01101 <-  0 + 8 + 4 + 0 + 1
// 21 -> 10101 <- 16 + 0 + 4 + 0 + 1

int convert(int n, int max) {

    // convert() n = 1 : return 1
    // convert() n = 5 : convert(1)
    // convert() n = 13 : convert(5)

    // main() n = 13 : convert(13)
    // call stack

    // 13 -> 256 -> "0"
    // 13 -> 128 -> "0"
    // etc.
    // 13 -> 8 -> "1"
    // 5 -> 4 -> "1"
    // 1 -> 2 -> "0"
    // 1 -> 1 -> "1"

    if (max == 1) {
        std::cout << n;
        return 1;
    }

    if (n < max) {  // if 13 < 256
        std::cout << "0";
        convert(n, max / 2);
    } else { // if 13 > 8
        std::cout << "1";
        convert(n - max, max / 2);
    }

    // if (n == 0 || n == 1) {
    //     std::cout << n;
    //     return n;
    // }
    //
    // int total = 1;
    // while (total <= n) {
    //     total *= 2;
    // }
    //
    // std::cout << (total / 2);
    // convert(n - (total / 2));
    return 0;
}

int main() {
    std::cout << "Enter a decimal number: ";
    int n = 0;
    std::cin >> n;
    convert(n, 256);
    return 0;
}
