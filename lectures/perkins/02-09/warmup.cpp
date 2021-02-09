// Warmup: What will the output be, or will there be
//         none because of an error?

#include <iostream>

int main() {
    for (int i = 0; i < 3; i++) {
        int total = 0;
        total += i * i;
    }
    std::cout << total << std::endl;
    return 0;
}
