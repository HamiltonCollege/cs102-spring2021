#include <iostream>

// Controls operation of the program.
int main() {
    // print out powers of two: 1 2 4 8 16 32 64
    for (int i = 1; i < 65; i = i * 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
