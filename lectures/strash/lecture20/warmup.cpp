#include <iostream>

using namespace std;

// What is the output

class Integer {
public:
    Integer(const int the_int) {
        this->_the_int = the_int;
    }
    Integer * get_this() {
        return this;
    }
private:
    int _the_int;
};

// Controls operation of program
int main() {
    Integer the_int(5);
    if (&the_int == the_int.get_this()) 
        cout << "yep!" << endl;
    else
        cout << "nope!" << endl;
    return 0;
}
