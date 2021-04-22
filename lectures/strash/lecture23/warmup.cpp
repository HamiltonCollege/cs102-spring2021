#include <iostream>
#include <cstdlib>

// What is the output?

using namespace std;

class Die {
public:
    short roll() const {
        return rand() % 6 + 1;
    }
};

class LoadedDie : public Die {
public:
    short roll() const {
        return 100;
    }
};

int main() {
    srand(time(0));
    LoadedDie loaded_die;
    cout << "Rolled a " << loaded_die.roll() << endl;

    return 0;
}
