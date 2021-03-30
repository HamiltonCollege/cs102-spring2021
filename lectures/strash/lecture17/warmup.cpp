/**
 * Warmup for March 30, 2021
 * @file warmup.cpp
 * @author David Perkins
 * @date March 29, 2021
 */
#include <iostream>

// What's your best guess as to the output?

class Thing {
    private:
        int _stuff;
    public:
        Thing() {
            _stuff = 8;
        }
};

int main() {
    Thing t;
    std::cout << sizeof(t) << std::endl;
    return 0;
}
