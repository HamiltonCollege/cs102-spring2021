#include <iostream>
#include <cstring>

using namespace std; // we're doing this now.

struct Point {
    char label;
    int x;
    int y;
};

class Pointy {

private:
    char * _name;
    int _x;
    int _y;

public:
    Pointy(const char * n, int a, int b) {
        size_t name_length = strlen(n) + 1;
        _name = new char[name_length];
        strcpy(_name, n);
        _x = a;
        _y = b;
    }

    Pointy() {
        _name = new char[3];
        _name[0] = 'Q';
        _x = 0;
        _y = 0;
    }

    ~Pointy() {
        delete[] _name;
    }

    int get_x() const {
        return _x;
    }

    int get_y() const {
        return _y;
    }

    char * get_name() {
        return _name;
    }

    void set_x(int a) {
        _x = a;
    }

    void set_y(int a) {
        _y = a;
    }

    void set_name(char * n) {
        strcpy(_name, n);
    }
};

int main() {
    Point p1 = {'A', 3, 5};
    Point p2 = {'B', 2, 7};
    cout << "x value of point " << p1.label << " is " << p1.x << endl;

    Pointy p3("boop", 9, 10);
    cout << "x value of pointy " << p3.get_name() << " is " << p3.get_x() << endl;
    p3.set_x(11);
    cout << "x value of pointy " << p3.get_name() << " is " << p3.get_x() << endl;
    char * new_name = new char[5];
    strcpy(new_name, "beep");
    p3.set_name(new_name);
    delete[] new_name;
    cout << "x value of pointy " << p3.get_name() << " is " << p3.get_x() << endl;

    Pointy p4;
    cout << "x value of pointy " << p4.get_name() << " is " << p4.get_x() << endl;

    p4.set_x(5);
    p4.set_y(6);

    Pointy p5(p3);
    p5.set_y(99);
    cout << "y value of pointy " << p5.get_name() << " is " << p5.get_y() << endl;
    cout << "y value of pointy " << p3.get_name() << " is " << p3.get_y() << endl;
}