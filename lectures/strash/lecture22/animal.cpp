/**
 * Illustrate inhertience through different animals inheriting methods and data.
 * (+ let's make a virtual method)
 * @file animal.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 20, 2021
 */
#include <iostream>

using namespace std;

/*
 * Instructors Note: For time and space we are defining methods directly in
 * the classes. For projects and assignments, we will define methods outside.
 */

class Animal {
public:
    Animal() {
        _is_mammal = false;
    }
    bool is_mammal() const {
        return _is_mammal;
    }
    // virtual allows child class to override behavior
    virtual void make_sound() const {
        cout << "Um...what sound does a generic animal make?" << endl;
    }
protected: 
    // protected variables are accessible from child class
    bool _is_mammal;
};

class Bear : public Animal {
public:
    Bear() : Animal() {
        _is_mammal = true;
    }
    Bear(const Animal & animal) {
        _is_mammal = animal.is_mammal();
    }
    void make_sound() const {
        cout << "The bear makes a roar sound!" << endl;
    }
};

class Shark : public Animal {
public:
    void make_sound() const {
        cout << "The shark makes a bite sound!" << endl;
    }
};

// Control operation of program
int main() {
    //Animal animal;
    //animal.make_sound();
    //cout << "is animal a mammal? " << animal.is_mammal() << endl;

    //Bear bear;
    //bear.make_sound();
    //cout << "is bear a mammal? " << bear.is_mammal() << endl;

    //Shark shark;
    //shark.make_sound();
    //cout << "is a shark a mammal? " << shark.is_mammal() << endl;

    // Is Bear::make_sound() called or Animal::make_sound?
    Bear bear;
    Animal & animal = bear;
    animal.make_sound(); // calls Bear::make_sound() if virtual! -> vtable lookup

    // Works because a Bear is an Animal.
    Animal new_bear = bear;
    new_bear.make_sound();
    //cout << "is new bear a mammal? " << new_bear.is_mammal() << endl;

    // Does not work in general because an Animal is not a Bear, but can force
    // to work by making special constructor (See Bear::Bear(const Animal & animal))
    //Bear new_new_bear = new_bear;
    //new_new_bear.make_sound();

    return 0;
}
