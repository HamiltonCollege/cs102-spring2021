#include <iostream>
#include <iomanip>

int main() {
    for (int denom = 2; denom < 11; denom++) {
        double frac = 0.0;
        frac = 1 / (double) denom;
        std::cout << "1/" << denom << " = ";
        std::cout << std::setprecision(10) << frac << std::endl;
    }

    return 0;
}
