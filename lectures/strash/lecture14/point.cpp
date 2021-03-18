/**
 * A Pointy class to store a labeled point.
 * @file point.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 18, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

class Pointy {
public:
    Pointy(const char * label, int x, int y) {
        cout << "Constructor called" << endl;
        _label = new char[strlen(label) + 1];
        strcpy(_label, label);
        _x = x;
        _y = y;
    }

    Pointy() {
        _label = new char[2];
        _label[0] = 'X';
        _label[1] = '\0';
        _x = -1;
        _y = -1;
    }

    ~Pointy() {
        cout << "Destructor called" << endl;
        delete[] _label;
    }

    void print() {
        cout << _label << " : (" << _x << "," << _y << ")" << endl;
    }

private:
    char * _label;
    int _x;
    int _y;
};

// Controls execution of program.
int main() {
    cout << "Start program" << endl;

    // Try this:
    Pointy best("Best", 42, 42);
    best.print();

    /* // Versus this:
    {
        Pointy best("Best", 42, 42);
        best.print();
    } // destructor is called here
    */

    // We want this to work, but we get a double delete!
    // Need to make some changes to ensure it works as expected...
    //Pointy yes = best;
    //yes.print();

    cout << "End program" << endl;
    return 0;
}
