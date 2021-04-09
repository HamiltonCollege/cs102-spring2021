#include <iostream>

using namespace std;

// what is the output?

class Integer {
public:
    Integer(const int the_int) {
        _the_int = the_int;
    }

    int get_int() const {
        return _the_int;
    }

private:
    int _the_int;
};

ostream operator<<(ostream output_stream, Integer the_int) {
    output_stream << the_int.get_int();
    return output_stream;
}

// Controls operation of program
int main() {
    Integer the_int(5);
    cout << the_int << endl;
    return 0;
}
