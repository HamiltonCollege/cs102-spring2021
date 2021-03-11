/**
 * More practice with pointers
 * @file pointers_more.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 11, 2021
 */
#include <iostream>

// Controls operation of program
int main() {
    // pointer arithmetic
    /*
    int * my_array = new int[10];
    my_array[0] = 99;
    my_array[1] = 1;
    my_array[2] = 2;

    std::cout << "ma[0]=" << my_array[0] << std::endl;
    std::cout << "*ma=" << *(my_array + 0) << std::endl;
    std::cout << "*(ma + 1)=" << *(my_array + 1) << std::endl;
    std::cout << "*(ma + 2)=" << *(my_array + 2) << std::endl;
    std::cout << "*(ma + 3)=" << *(my_array + 3) << std::endl;
    // invalid memory read
    //std::cout << "*(ma + 99)=" << *(my_array + 99) << std::endl;

    delete[] my_array;
    */
    // using proper new / delete (mismatched new/delete)
    int * my_array = new int[100];
    //delete my_array; // mismatched delete (says to delete a single int)
    delete[] my_array; // proper delete

    // invalid delete
    int x = 42;
    int * px = &x;
    //delete px; // only call delete, when you have allocated with new
    //return 0;

    int * an_array = new int[10];
    // invalid delete
    //delete[] (an_array + 1);
    delete[] an_array;
    return 0;
}
