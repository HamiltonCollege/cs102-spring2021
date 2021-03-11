#include <iostream>

// 13 = 8 + 4 + (2) + 1 = 1101
// 13 % 2 = 1, so start with 1
// subtract 13 - 1 = 12 = 8 + 4 + (2) + (1)
// divide through by 2: 6 = 4 + 2 + (1)
// so if we could convert 6 to binary, we could double it (by mult 10)

// so dec % 2 - 1 + 10 * convert(dec - (dec % 2))

int convert(int dec) {
    if dec == 0
        return 0;
    return (dec % 2) - 1 + 10 * convert(dec / 2);
}

int main() {
    std::cout << "Enter a decimal number: ";
    int dec = 0;
    std::cin >> dec;
    bin = convert(dec);
    std::cout << "This number in binary is: " << bin << std::endl;
    return 0;
}
