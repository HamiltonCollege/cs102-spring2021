#include <iostream>
#include <cstdlib>

// What is the output?

using namespace std;

class Die {
public:
    virtual short roll() const {
        return rand() % 6 + 1;
    }
};

class LoadedDie : public Die {
public:
    short roll() const {
        return 100;
    }
};

void roll_and_print(Die * die) {
    cout << "Die rolled a " << die->roll() << endl;
}

int main() {
    srand(time(0));
    LoadedDie loaded_die;
    Die die;
    roll_and_print(&loaded_die);
    roll_and_print(&die);
    //Die die = loaded_die;
    //cout << "Loaded rolled a " << loaded_die.roll() << endl;

    return 0;
}
