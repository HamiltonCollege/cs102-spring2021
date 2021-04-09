#include <iostream>

using namespace std;

// what is the output?

class Integer {
public:
    Integer(const int the_int) {
        this->_the_int = the_int;
    }

    int get_int() const {
        return this->_the_int;
    }

    Integer operator+(const Integer & that) const {
        Integer sum(this->get_int() + that.get_int());
        return sum;
    }

private:
    int _the_int;
};

ostream & operator<<(ostream & out_stream, const Integer & the_int) {
    out_stream << the_int.get_int();
    return out_stream;
}

// Controls operation of program
int main() {
    Integer * p_int = new Integer(5);
    //cout << (*p_int).get_int() << endl;
    //cout << p_int->get_int() << endl;

    Integer * p_int2 = new Integer(10);
    cout << *p_int + *p_int2 << endl;

    delete p_int;
    delete p_int2;
    return 0;
}