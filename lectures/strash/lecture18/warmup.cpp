/**
 * The warmup for April 1, 2021
 * @file warmup.cpp
 * @author Dave Perkins
 * @date March 31, 2021
 */
#include <iostream>

// What will the output be?

using namespace std;

class Bubble {
private:
    int _radius;
    bool _popped;
public:
    Bubble() {
        _radius = 1;
        _popped = false;
    }
    Bubble(const Bubble & sphere) {
        _radius = sphere._radius;
        _popped = sphere._popped;
    }
    void pop() {
        _popped = true;
        _radius = 0;
    }
    bool is_popped() const {
        return _popped;
    }
};

int main() {
    Bubble bee;
    Bubble cee(bee);
    cee.pop();
    cout << bee.is_popped() << endl;
    return 0;
}
