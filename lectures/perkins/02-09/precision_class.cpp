// Let's write a program that outputs ten decimal places
// for each fraction 1/2, 1/3, 1/4, ..., 1/10.

#include <iostream>
#include <iomanip>

int main() {
    for (int denom = 2; denom < 11; denom++) {
        // cast denom to a double:
        std::cout << "1/" << denom << " = ";
        std::cout << std::setprecision(10) << 1 / (double) denom << std::endl;
    }
    return 0;
}
