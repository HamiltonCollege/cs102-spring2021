#include <iostream>

void increase_capacity(size_t & capacity) {
    std::cout << "doubling the capacity!" << std::endl;
    capacity = capacity * 2;
}

void get_line(char * line, size_t & capacity) {
    char next_char = '\0';
    size_t num_chars = 0;
    while (next_char != '\n') {
        if (num_chars >= capacity)
            increase_capacity(capacity);
        next_char = std::cin.get();
        line[num_chars++] = next_char;
    }
}

int main() {

    std::cout << "Enter some text: ";

    size_t capacity = 4;

    char * result = new char[capacity];
    get_line(result, capacity);

    for (int i = 0; i < capacity; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;

    delete[] result;

    return 0;
}
