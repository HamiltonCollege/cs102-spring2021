/**
 * Discussing pointers, dynamic memory allocation, and their pitfalls.
 * @file pointers_from_class.cpp
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
    /*
    int x = 42;
    std::cout << "x=" << x << std::endl;
    std::cout << "&x=" << &x << std::endl;

    int * px = &x;
    std::cout << "px=" << px << std::endl;

    int y = *px; // dereferences pointer px, giving value stored there.
    std::cout << "y=" << y << std::endl;

    *px = 99;
    std::cout << "x=" << x << std::endl;
    */

    /*
    int size = 0;
    std::cout << "How many values would you like to store? ";
    std::cin >> size;
    //int my_array[size] = {};
    int * my_array = new int[size];
    for (int i = 0; i < size; i++) {
        my_array[i] = i;
    }
    for (int i = 0; i < size; i++) {
        std::cout << my_array[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New size? ";
    std::cin >> size;
    my_array = new int[size];
    for (int i = 0; i < size; i++) {
        my_array[i] = i;
    }
    for (int i = 0; i < size; i++) {
        std::cout << my_array[i] << " ";
    }
    std::cout << std::endl;
    */
    /*
    int * my_array = nullptr; // NULL, nullptr
    for (int i = 0; i < 100000000; i++) {
        my_array = new int[100000000];
        std::cin.get();
        delete[] my_array;
    }
    */

    /*
    // dangling pointer
    int * px = nullptr;
    {
        int x = 42;
        px = &x;
        std::cout << "*px=" << *px << std::endl;
    }
    // px is called a dangling pointer. It's no longer pointing to
    // valid memory. (DON'T DO THIS.)
    std::cout << "*px=" << *px << std::endl; // <- is this ok?
    */

    /*
    // create one dynamically allocated int
    int * px = new int;
    *px = 42;
    std::cout << "*px=" << *px << std::endl;
    delete px;
    px = nullptr;
    // px is still a dangling pointer.
    */
    // produce a segmentation fault, program crashes!
    //int * px = nullptr; // nullptr is address 0
    //std::cout << "*px=" << *px << std::endl;

    int * my_array = make_array(100);

    delete[] my_array;
    //delete[] my_array; // double delete -> a memory error
    my_array = nullptr;
    return 0;
}
