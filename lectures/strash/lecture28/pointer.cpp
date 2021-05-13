/**
 * Lecture 28: A class to manage dynamic memory.
 * @file pointer.cpp
 * @author Darren Strash
 * @collaborator CS 102-02
 * @date May 11, 2021
 */
#include <iostream>

using namespace std;

const size_t ARRAY_SIZE = 10;

template<typename T>
class ManagedPointer {
public:
    ManagedPointer(T * p_pointer) {
        _pointer = p_pointer;
    }
    ~ManagedPointer() {
        delete[] _pointer;
    }
    T * get_pointer() {
        return _pointer;
    }
private:
    ManagedPointer();
    ManagedPointer(const ManagedPointer & other);
    T * _pointer;
};

int main() {
    // Create a dynamically allocated array
    ManagedPointer<int> int_pointer(new int[ARRAY_SIZE]);
    for (size_t index = 0; index < ARRAY_SIZE; index++)
        int_pointer.get_pointer()[index] = index;

    // Print the array's contents
    for (size_t index = 0; index < ARRAY_SIZE; index++)
        cout << int_pointer.get_pointer()[index] << " ";
    cout << endl;

    //delete[] p_array; // not needed anymore!
    return 0;
}
