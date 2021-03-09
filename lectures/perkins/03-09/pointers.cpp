#include <iostream>

int main() {

    int x = 5;
    int * x_loc; // x_loc is a pointer that points to type int
    x_loc = &x;  // &x is the address where C++ stored x

    int y = 6;
    int * y_loc = &y;  // it's fine to initialize on one line like so
    //
    std::cout << "x is: " << x << std::endl;
    std::cout << "x_loc is: " << x_loc << std::endl;
    //
    std::cout << "y is: " << y << std::endl;
    std::cout << "y_loc is: " << y_loc << std::endl;
    //
    // "dereferencing a pointer" yields the value at the pointer's address:
    std::cout << "*y_loc is: " << *y_loc << std::endl;
    //
    *y_loc = 7;  // using a dereferenced pointer to change the value of y:
    std::cout << "y is now: " << y << std::endl;
    //
    // let's create a pointer to a data type, which will save an appropriate
    // amount of memory somewhere (but without initializing a variable):
    //
    // type * pointer_name = new type;
    int * address = new int;
    std::cout << "*address is: " << *address << std::endl;
    //
    // now we assign a value:
    *address = 99;
    std::cout << "*address (after assigning 99) is: " << *address << std::endl;
    //
    // always delete a pointer, once done with it, to free up that memory:
    delete address;
    //
    // dynamic arrays:
    std::cout << "Enter the size of your dynamic array: ";
    int this_many = 0;
    std::cin >> this_many;
    //
    // the real power comes in allocating memory for a dynamically sized array:
    int * array_pointer = new int[this_many];  // save this_many 'spots' for ints
    //

    // we got to here in class..

    // // array_pointer points to the memory location of the first int:
    // std::cout << "array_pointer is: " << array_pointer << std::endl;
    //
    // // to access elements of the array, use the pointer as if it were the array name:
    // array_pointer[0] = 10;
    // array_pointer[1] = 15;
    // array_pointer[2] = 20;
    //
    // // or..
    // for (int i = 0; i < this_many; i++) {
    //     array_pointer[i] = i;
    //     std::cout << "array_pointer[" << i << "] = " << array_pointer[i];
    //     std::cout << std::endl;
    // }
    //
    // std::cout << "array_pointer[0] is: " << array_pointer[0] << std::endl;
    // array_pointer++;  // whaaat!
    // std::cout << "array_pointer[0] is now: " << array_pointer[0] << std::endl;
    //
    // array_pointer--;  // without this, try to delete:
    //
    // // delete the pointer to free the memory:
    // delete[] array_pointer; // use [] to indicate: free ALL the memory

    return 0;
}
