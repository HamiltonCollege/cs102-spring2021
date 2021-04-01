/**
 * A full-featured string class, with custom operators + and <<.
 * @file string.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 1, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String();
    String(const char * string);
    String(const String & other);
    ~String();
    char * get_string() const;
    String operator+(const String & other) const;
private:
    char * _string;
    size_t _size;
    size_t _capacity;
};

/**
 * Construct an empty String
 */
String::String() {
    _string = new char[1];
    _string[0] = '\0';
    _size = 0;
    _capacity = 1;
}

/**
 * Construct a String from a given C-style string
 * @param string the C-style string to construct from
 */
String::String(const char * string) {
    _string = new char[strlen(string) + 1];
    strcpy(_string, string);
    _size = strlen(_string);
    _capacity = _size + 1;
}

/**
 * Copy constructor
 * @param other String object to copy
 */
String::String(const String & other) {
    _size = other._size;
    _capacity = other._capacity;
    _string = new char[_capacity];
    strcpy(_string, other._string);
}

/**
 * Destructor for String class
 */
String::~String() {
    delete[] _string;
}

/**
 * Return the C-style string stored in this class
 * @return The C-style string
 */
char * String::get_string() const {
    return _string;
}

/**
 * Concatenate two strings strings together and return the result
 * @param other The string to concatenate to this one
 * @return The concatenated string
 */
String String::operator+(const String & other) const {
    String concat_string;
    delete[] concat_string._string;
    concat_string._size = _size + other._size;
    concat_string._capacity = concat_string._size + 1;
    concat_string._string = new char[concat_string._capacity];
    strcpy(concat_string._string, _string);

    // concat_string._string points to memory location (let's call it: 1)
    // adding _size, gives us memory location 1 + _size (think &concat_string._string[_size])
    // where next string should start
    strcpy(concat_string._string + _size, other._string);
    return concat_string;
}

/**
 * Custom operator to write String objects to an ostream object (like cout)
 * @param out_stream The ostream to write to
 * @param string the String object to write out
 * @return (a reference to) the ostream object we were given
 */
ostream & operator<<(ostream & out_stream, const String & string) {
    out_stream << string.get_string();
    return out_stream;
}

// Controls operation of program
int main() {
    String good("Good");
    String morning(" morning!");
    //cout << good.get_string() << endl; // for testing

    String goodmorning = good + morning; // same as good.operator+(morning)
    cout << goodmorning << endl; // same as operator<<(cout, goodmorning) << endl;
    return 0;
}
