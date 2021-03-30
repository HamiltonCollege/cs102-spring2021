/**
 * A full-featured string class.
 * @file string.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 30, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(char * string);

    ~String() {
        delete[] _string;
    }
private:
    char * _string;
    size_t _size;
    size_t _capacity;
};

/**
 * String constructor
 * @param string a C-style string to initialize this string object
 */
String::String(char * string) {
    _string = new char[strlen(string) + 1];
    strcpy(_string, string);
    _size = strlen(_string);
    _capacity = _size + 1;
}

// Controls operation of program.
int main() {
    String str("Good");
    String str2(" morning!");

    // Want to be able to do this!
    //cout << str << endl;
    //cout << str + str2 << endl;
    return 0;
}
