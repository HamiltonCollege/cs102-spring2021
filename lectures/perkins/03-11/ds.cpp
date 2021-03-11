#include <iostream>

// Prof Strash's warmup..
// Which memory errors(s), if any, are in this code?

void make_array(int * array_to_make) {
    array_to_make = new int[100];
    array_to_make[0] = -1;
    std::cout << "atm[0] = " << array_to_make[0] << std::endl;
}

int main() {
    int * array_please = nullptr;
    make_array(array_please);
    array_please[1] = 0;
    delete[] array_please;
    return 0;
}
