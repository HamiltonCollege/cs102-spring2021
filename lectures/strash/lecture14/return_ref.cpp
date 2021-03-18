#include <iostream>

using namespace std;

// Why it is dangerous to return a reference (in general)
// Returns reference to memory location that is cleaned up after function returns
int & foo() {
    int x = 42;
    return x;
}

// Controls operation of program.
int main() {
    int &y = foo(); // y refers to x, which does not exist outside foo!
    int z = y;
    cout << "z=" << z << endl;
    return 0;
}
