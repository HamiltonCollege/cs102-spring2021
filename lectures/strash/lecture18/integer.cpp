/**
 * A simple Integer class and operators!
 * @file integer.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April, 1, 2021
 */
#include <iostream>

using namespace std;

class Integer {
public:
    Integer(const int the_int);
    int get_int() const;
    Integer operator+(const int other_int) const;
private:
    int _the_int;
};

/**
 * Construct an Integer object from an int
 * @param the_int the int value we want this Integer to have
 */
Integer::Integer(const int the_int) {
    _the_int = the_int;
}

/**
 * Getter to return the int value of this Integer
 * @return the int value of this Integer
 */
int Integer::get_int() const {
    return _the_int;
}

/**
 * Overload the + operator to be able to add Integers and ints
 * @param other_int the int to add to this Integer object
 * @return The addition of this Integer and the int, as an Integer object.
 */
Integer Integer::operator+(const int other_int) const {
    Integer new_int(_the_int + other_int);
    return new_int;
}

/**
 * Write out an Integer object using <<
 * @param out_stream the ostream object to write to
 * @param the_int the Integer object to write out
 * @return (a reference to) the ostream object we were given
 */
ostream & operator<<(ostream & out_stream, const Integer & the_int) {
    out_stream << the_int.get_int();
    return out_stream;
}

// Controls operation of program
int main() {
    Integer the_int(5);
    cout << the_int << endl;
    cout << the_int + 5 << endl; // the_int.operator+(5);
    return 0;
}

