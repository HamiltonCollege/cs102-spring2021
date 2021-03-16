/**
 * Make a point struct, and a point class.
 * @file struct.cpp
 * @name Darren Strash
 * @collaborators CS 102-02
 * @date March 16, 2021
 */
#include <iostream>

// struct: aggregate data type (structure)
struct Point {
    // methods
    void print() {
        std::cout << label << ":" << x << "," << y << std::endl;
    }
    // member variables
    char label;
    int x;
    int y;
};

// Point class
class Pointy {
public:
    // Constructor
    Pointy(char label, int x, int y) {
        std::cout << "Calling constructor!" << std::endl;
        _label = label;
        _x = x;
        _y = y;
    }

    Pointy() {
        _label = 'X';
        _x = -1;
        _y = -1;
    }

    // methods
    void print() {
        std::cout << _label << ":" << _x << "," << _y << std::endl;
    }

    void set_x(int x) {
        if (x > 4)
            return;
        _x = x;
    }
    // member variables
private:
    char _label;
    int _x;
    int _y;
};

// C is a procedural language (focused on functions)
// C++ is *object oriented* (focused on objects)

int main() {
    //Pointy my_point('A', 3, 4);
    // Pointy is a class, my_point is an object
    // my_point is an instantiation of the Pointy class (or an instance)
    Pointy my_point;
    my_point.print();

    my_point.set_x(5);
    my_point.print();
/*
    my_point.x = 5;
    my_point.print();

    // make an array of points
    Point my_points[2] = {{'A', 1, 2}, {'B', 3, 4}};
    my_points[0].print();
*/
    return 0;
}
