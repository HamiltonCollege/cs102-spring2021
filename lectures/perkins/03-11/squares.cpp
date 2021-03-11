#include <iostream>

// ask the user for a size of an int array
// use pointers to create the array (dynamic array)
// fill the array with squares

void fill_array(int * ap, int s) {
    for (int i = 0; i < s; i++)
        ap[i] = i * i;
}

int main() {
    std::cout << "Enter the size of the dynamic array: ";

    // size_t is a data type (like int or float) that we use
    // when we are defining the size of a dynamic object:
    size_t size = 0;
    std::cin >> size;

    // syntax for creating a dynamic array:
    // type * pointer_name = new type[size];
    int * arr_ptr = new int[size];

    fill_array(arr_ptr, size);

    for (int i = 0; i < size; i++)
        std::cout << arr_ptr[i] << " ";
    std::cout << std::endl;

    delete[] arr_ptr; // valgrind

    return 0;
}
