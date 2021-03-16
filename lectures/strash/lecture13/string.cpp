/**
 * Begin making a full featured string class
 * @file string.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 16, 2021
 */
#include <iostream>

class String {
public:
    String() {
        _string = new char[1];
        _string[0] = '\0';
        _size = 0;
    }

    char * get_c_string() {
        return _string;
    }

private:
    char * _string;
    size_t _size;
};

int main() {
    String my_string;
    std::cout << my_string.get_c_string() << std::endl;

/*
    std::cin >> my_string;
    // what we might desire from strings
    std::cout << my_string.substring(1, 3) << std::endl;
    std::cout << my_string.size() << std::endl;
    std::cout << my_string << std::endl;

    String string2 ...;
    std::cout << my_string + string2 << std::endl;
    if (my_string == string2) {
        std::cout << "they're equal!" << std::endl;
    }
*/

    // cout is an object (instance of *some* class), ostream (output stream)
    //std::cout << "hello" << std::endl;
    return 0;
}
