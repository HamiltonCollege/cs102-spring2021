// Ask the user for five positive integers.
// Output them like 4 3 9 8 2 with no trailing space.
// Report the maximum of the group.

#include <iostream>

int main() {
    int current_max = 0;
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter positive integer number " << i + 1 << ": ";
        int response = 0;
        std::cin >> response;
        if (current_max < response) {
            current_max = response;
        }
    }
    std::cout << "The maximum is " << current_max << std::endl;
    return 0;
}
