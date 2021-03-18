#include <iostream>

using namespace std; // we're doing this now

// A struct is a fancy data structure that can hold multiple data types,
// but we cannot write methods (that is, special functions) for structs.
// Structs are entirely public:
struct Point {
    // attributes of a Point:
    char label;
    float x;
    float y;
};

// A class is a struct plus the ability to write special functions (methods),
// and a class gives us the ability to protect private attributes:
class Pointy {
private:  // "private" indicates that we do not want the rest of the program to
          // be able to change these attributes without politely asking permission
    // attributes of a Pointy:
    char _label;
    float _x;
    float _y;
public:
    // Constructor for a Pointy (called when we create a Pointy object):
    Pointy(char lbl, float a, float b) {
        _label = lbl;
        _x = a;
        _y = b;
    }
    // add some methods (special class functions):
    // soon!

    // setters, or set methods, allow us to set a new value for an attribute:
    void set_x(float a) {
        _x = a;
    }

    void set_y(float a) {
        _y = a;
    }

    void set_label(char a) {
        _label = a;
    }

    // getters, or get methods, allow us to access the current value of an attribute:
    float get_x() const {
        return _x;
    }

    float get_y() const {
        return _y;
    }

    char get_label() const {
        return _label;
    }
};

int main() {
    // structs:
    Point p1 = {'A', 3.0, 4.5};
    cout << p1.label << endl;
    p1.x = 6.0;
    cout << p1.x << endl;

    // class:
    Pointy p2('B', 2.5, 1.0);
    Pointy p3('C', 4.3, 8.9);

    // This doesn't work because _x is private:
    // p2._x = 6.0;
    // cout << p2._x << endl;

    // The polite version: call the setter..
    p2.set_x(6.0);
    cout << p2.get_label() << "'s x value is " << p2.get_x() << endl;
    return 0;
}