#include <iostream>

// Controls execution of the program
int main() {
    // for loop
    // int i = 0  -> initializes a variable called i (loop variable)
    //               to zero before the loop begins
    // i < 10 -> while this statement is true, execute the loop
    // i++ -> how i changes with each loop, in this case adding 1.
    for (int i = 0; i < 10; i = i++) {
        std::cout << "Iteration " << i << std::endl;
    }
    return 0;
}
