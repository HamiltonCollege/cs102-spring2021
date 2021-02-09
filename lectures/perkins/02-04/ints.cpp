#include <iostream>

int main() {
    int c = 1073741824;  // this is 2^30, which appears to be a cool integer
    int r = 0;
    while(c > 0) {
        r = c;
        c++;
    }
    std::cout << r << std::endl;
    return 0;
}
