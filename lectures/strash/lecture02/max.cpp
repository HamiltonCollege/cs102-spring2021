#include <iostream>
#include <climits> // for INT_MIN

int main() {
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int max_number = number;
    std::cout << "Current max is: " << max_number << std::endl;

    /* Alternative: use this instead
        int max_number = INT_MIN;
        for (int i = 0; i < 5; i++)
    */

    for (int i = 0; i < 4; i++) {
        int number = 0;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (max_number < number) {
            max_number = number;
        }
        std::cout << "Current max is: " << max_number << std::endl;
    }
    return 0;
}
