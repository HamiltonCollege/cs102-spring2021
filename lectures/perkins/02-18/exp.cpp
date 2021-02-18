
// What will the output be?

#include <iostream>

int main() {
    char a[14] = {'a', 'b', 'c', '\0'};
    std::cout << (int) a[8] << std::endl;
    return 0;
}
