#include <iostream>

// Controls operation of the program.
int main() {

    /* Alternative: try this out! longs have max value 9 x 10^18
    for (long int i = 0; true; i = i + 10000000) {
    */

    // Trigger an overflow: pass the maximum int value
    for (int i = 0; true; i = i + 10000000) {
        std::cout << i << std::endl;
    }
    return 0;
}
