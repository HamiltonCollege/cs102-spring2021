#include <iostream>

const short NUM_MONTHS = 12;

int main() {
    short days_in_month[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // std::cout << days_in_month[5] << std::endl;
    // std::cout << sizeof days_in_month[5] << std::endl;
    // std::cout << sizeof days_in_month << std::endl;
    // days_in_month[5] = 99;
    // std::cout << days_in_month[5] << std::endl;
    std::cout << days_in_month << std::endl;
    for (int i = 0; i < NUM_MONTHS; i++)
        std::cout << days_in_month[i] << " ";
    std::cout << std::endl;
    int x, y = 5;
    return 0;
}
