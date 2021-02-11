// What positive integer, if any, could the user enter
// so that the output is "Meow!"?

#include <iostream>

int main() {
    std::cout << "Please enter a positive integer: ";
    int reply = 0;
    std::cin >> reply;
    if (reply > 5) {
        std::cout << "Moo!" << std::endl;
    } else if (reply > 10) {
        std::cout << "Meow!" << std::endl;
    } else {
        std::cout << "What does the fox say?" << std::endl;
    }
    return 0;
}
