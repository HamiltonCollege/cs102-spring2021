#include <iostream>

const int FEBRUARY_MAX = 28;

int main() {
    std::cout << "Enter a date: ";
    int date = 0;
    std::cin >> date;
    std::cout << date;
    for (int d = date + 7; d <= FEBRUARY_MAX; d += 7)
        std::cout << " " << d;
    std::cout << std::endl;
    return 0;
}
