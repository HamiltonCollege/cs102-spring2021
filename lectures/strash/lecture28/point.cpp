/**
 * Lecture 28: A templated Point class
 * @file point.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 11, 2021
 */
#include <iostream>
#include <string>

using namespace std;

template<typename T> class Point {
public:
    Point(const T & x, const T & y) {
        _x = x;
        _y = y;
    }

    void set_x(const T & x) {
        _x = x;
    }

    const T & get_x() const {
        return _x;
    }

    void set_y(const T & y) {
        _y = y;
    }

    const T & get_y() const {
        return _y;
    }

    void print() {
        cout << "(" << _x << "," << _y << ")" << endl;
    }

private:
    T _x;
    T _y;
};

template<typename T>
ostream & operator<<(ostream & output_stream, const Point<T> & the_point) {
    output_stream << "(" << the_point.get_x() << "," << the_point.get_y() << ")";
    return output_stream;
}

// Controls execution of program.
int main() {
    Point<int> best(42, 84);
    Point<string> string_point("Hello", "there");
    cout << best << " and " << string_point << endl;
    return 0;
}
