// Let's write a program that asks us for a date in February,
// and it returns all weekly dates in February from that date on.

// For example, if we enter 3, the program should output:
//  3 10 17 24

// For example, if we enter 9, the program should output:
//  9 16 23

#include <iostream>

const int FEBRUARY_MAX = 28;

int main() {
    std::cout << "Please enter the date of the first meeting: ";
    int date = 0;
    std::cin >> date;
    if (date > FEBRUARY_MAX || date <= 0) {
        std::cout << "Try again fool.";
    } else {
        std::cout << date;
        while (date <= FEBRUARY_MAX && date > 0) {
            date += 7;
            if (date <= FEBRUARY_MAX && date > 0) {
                std::cout << " " << date;
            }
            // std::cin.get();
        }
    }

    std::cout << std::endl;
    return 0;
}
