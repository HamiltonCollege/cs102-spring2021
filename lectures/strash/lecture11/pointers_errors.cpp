/**
 * Types of memory errors with pointers.
 * @file pointers_errors.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 9, 2021
 */
#include <iostream>

int * make_array(int size) {
    int * my_array = new int[size];
    return my_array;
}

int main() {

    // Error 1: dangling pointer
    int * px = nullptr;
    {
        int x = 42;
        px = &x;
        std::cout << "*px=" << *px << std::endl;
    }
    // px is called a dangling pointer. It's no longer pointing to
    // valid memory. (DON'T DO THIS.)
    // std::cout << "*px=" << *px << std::endl; // <- is this ok?

    // Error 2: Segmentation Fault
    int * py = nullptr; // nullptr is address 0
    // produce a segmentation fault: accessing memory outside of the program
    // -> program crashes!
    // std::cout << "*py=" << *py << std::endl;

    // Error 3: Memory leak
    int * my_array = new int[20];
    // if you never call delete, the memory accumulates until it runs out or the program ends.
    // delete[] my_array; // <- do this to fix it.
    my_array = nullptr;

    // Error 4: double delete
    int * my_array2 = make_array(100);
    delete[] my_array;
    // calling delete again will crash the program! That memory has been deleted already...
    //delete[] my_array; // double delete -> a memory error
    my_array = nullptr;
    return 0;
}
