#include <iostream>

// we have used getline() in the past -- let's write our own!

int main() {

    std::cout << "Enter your first name: ";
    size_t capacity = 6;

    // type * pointer_name = new type[size_of]
    char * p_name = new char[capacity];

    char next_char = '\0';
    int curr_char = 0;

    while (next_char != '\n') {
        if (curr_char == capacity) {
            size_t new_capacity = capacity + 1;
            char * new_p_name = new char[new_capacity];
            for (int i = 0; i < capacity; i++) {
                new_p_name[i] = p_name[i];
            }
            delete[] p_name;
            p_name = new_p_name;
            capacity = new_capacity;
        }
        next_char = std::cin.get();
        p_name[curr_char] = next_char;
        curr_char++;
    }

    for (int i = 0; i < capacity; i++)
        std::cout << p_name[i];
    std::cout << std::endl;

    delete[] p_name;

    return 0;
}


