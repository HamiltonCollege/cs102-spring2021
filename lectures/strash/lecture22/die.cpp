/**
 * Illustrate inheritance through different types of Die objects
 * @file die.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 20, 2021
 */
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/*
 * Instructors Note: For time and space we are defining methods directly in
 * the classes. For projects and assignments, we will define methods outside.
 */

class Die {
public:
    Die(const size_t sides) {
        cout << "Constructor for Die to initialize sides" << endl;
        _sides = sides;
        //_name = new char[10];
    }
    ~Die() {
    }
    Die() {
        cout << "Default constructor for Die is called" << endl;
        _sides = 6;
    }
    size_t roll() const {
        return rand() % _sides + 1;
    }
    size_t get_sides() const {
        return _sides;
    }
protected:
    size_t _sides;
};

// inherit methods / variables from the Die class (access public parts)
// ColorDie is called a child of Die (Die is parent of ColorDie)
class ColorDie : public Die {
public:
    ColorDie() : Die() {
        cout << "Constructor for ColorDie is called" << endl;
        _color = "red";
    }
    ColorDie(const size_t sides) {
        cout << "Constructor for ColorDie is called" << endl;
        _color = "red";
        _sides = sides;
    }
    string get_color() const {
        return _color;
    }
private:
    string _color;
};

class LoadedDie : public ColorDie {
public:
    LoadedDie(const size_t preferred_side) : ColorDie() {
        _preferred_side = preferred_side;
    }
    LoadedDie(const size_t num_sides, const size_t preferred_side) : ColorDie(num_sides) {
        _preferred_side = preferred_side;
    }
    size_t roll() const {
        return _preferred_side;
    }
private:
    size_t _preferred_side;
};

// Control operation of program
int main() {
    srand(time(0));

    // Just a boring die
    //Die die;
    //cout << "die rolls: " << die.roll() << endl;

    //ColorDie red_die(100);
    //cout << "red die has color " << red_die.get_color() << endl;
    //cout << "red die rolls: " << red_die.roll() << endl;

    LoadedDie loaded_die(100, 3);
    cout << "loaded die has: " << loaded_die.get_sides() << " sides" << endl;
    cout << "loaded die rolls: " << loaded_die.roll() << endl;
    cout << "loaded die rolls: " << loaded_die.roll() << endl;
    cout << "loaded die rolls: " << loaded_die.roll() << endl;
    cout << "loaded die rolls: " << loaded_die.roll() << endl;
    cout << "loaded die rolls: " << loaded_die.roll() << endl;
    cout << "color of loaded die is: " << loaded_die.get_color() << endl;

    return 0;
}
