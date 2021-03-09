/**
 * Correct use of pointers, new, and delete.
 * @file pointers_correct.cpp
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

    // Making a pointer to an integer.
    int x = 42;
    std::cout << "x=" << x << std::endl;
    std::cout << "&x=" << &x << std::endl;

    int * px = &x; // & -> "address of", a pointer.
    std::cout << "px=" << px << std::endl;

    // dereference, * -> retrieve value at address
    int y = *px;
    std::cout << "y=" << y << std::endl;

    // dereference, * -> allows you to change value at address.
    *px = 99;
    std::cout << "x=" << x << std::endl;
   

    int size = 0;
    std::cout << "How many values would you like to store? ";
    std::cin >> size;
    int * my_array = new int[size];
    for (int i = 0; i < size; i++) {
        my_array[i] = i;
    }
    for (int i = 0; i < size; i++) {
        std::cout << my_array[i] << " ";
    }
    std::cout << std::endl;
    delete[] my_array; // every call to new needs a corresponding call to delete

    int * my_array2 = nullptr; // a null pointer, (technically, address 0)
    my_array2 = new int[100000000];
    delete[] my_array2;

    // create one dynamically allocated int
    int * py = new int;
    *py = 42;
    std::cout << "*py=" << *py << std::endl;
    delete py; // every call to new needs a corresponding call to delete (in this case, no []!)
    px = nullptr; // do this so that px is not a dangling pointer

    int * my_array3 = make_array(100);
    delete[] my_array3; // every call to new needs a corresponding call to delete
    my_array3 = nullptr; // prevent from being a dangling pointer.

    return 0;
}
