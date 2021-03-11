#include <iostream>

void fill_with_squares(int * p, int n) {
    for (int i = 0; i < n; i++) {
        p[i] = i * i;
    }
}

int main() {
    // let's make a dynamic array:
    std::cout << "Enter the number of entries for our array: ";

    // size_t is a data type that we use for dynamic sizes:
    size_t num_entries = 0;
    std::cin >> num_entries;

    // syntax for dynamic arrays:
    // type * pointer_name = new type[size_of]
    int * ptr_to_array = new int[num_entries];

    // now let's send the array to a function that will change its entries:
    fill_with_squares(ptr_to_array, num_entries);

    for (int i = 0; i < num_entries; i++) {
        std::cout << ptr_to_array[i] << " ";
    }
    std::cout << std::endl;

    // be careful! and we will use valgrind to check for leaks:
    delete[] ptr_to_array;

    return 0;
}
