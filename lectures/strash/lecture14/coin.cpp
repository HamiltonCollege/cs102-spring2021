/**
 * Making a Coin class where you can flip a coin and ask its value
 * @file coin.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 18, 2021
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coin {
public:
    Coin() {
        _heads = false;
    }

    void flip() {
        // change _heads
        _heads = rand() % 2;
    }

    bool is_heads() const {
        return _heads;
    }

    void print() const {
        if (_heads) {
            cout << "coin is heads" << endl;
        } else {
            cout << "coin is tails" << endl;
        }
    }
private:
    bool _heads;
};

/**
 * Support seamless printing of a Coin object
 * @param output_stream the output stream to print to
 * @param c the Coin object to print
 * @return The same output stream given to the function (to allow chainging together <<'s.
 */
ostream & operator<<(ostream & output_stream /* cout */, const Coin & c) {
    if (c.is_heads()) {
        output_stream << "heads";
    } else {
        output_stream << "tails";
    }
    return output_stream;
}

// Controls operation of program.
int main() {
    srand(time(0));
    Coin c;
    for (unsigned int flip_num = 1; flip_num < 5; flip_num++) {
        c.flip();
        // printing out c is brought to you by operator<<
        cout << "Flip number " << flip_num << " is " << c << endl;
    }
    return 0;
}
