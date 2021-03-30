/**
 * Testing the horse copy constructor
 * @file copy_constructor.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 30, 2021
 */
#include <iostream>
#include <cstring>

const unsigned int TRACK_LENGTH = 80;

using namespace std;

class Horse {
public:
    Horse(char * name, unsigned int speed_in_fps) {
        _name = new char[strlen(name) + 1];
        strcpy(_name, name);
        _speed_in_fps = speed_in_fps;
        _distance = 0;
    }

    // Copy constructor: try with and without.
    /*
    Horse(const Horse & other_horse) {
        _name = new char[strlen(other_horse._name) + 1];
        strcpy(_name, other_horse._name);
        _speed_in_fps = other_horse._speed_in_fps;
        _distance = other_horse._distance;
    }
    */
    Horse() {
        _name = new char[1];
        _name[0] = '\0';
        _speed_in_fps = 0;
        _distance = 0;
    }
    ~Horse() {
        cout << "Calling delete on the address " << (long) _name << endl;
        delete[] _name;
    }
    void print() {
        cout << "The horse's name is " << _name;
        cout << " and they have speed " << _speed_in_fps << endl;
    }
    void move() {
        _distance += _speed_in_fps;
    }
    void print_horse_on_track() {
        for (size_t foot = 1; foot < _distance; foot++) {
            cout << "-";
        }
        cout << _name[0] << endl;
    }
    unsigned int get_distance() {
        return _distance;
    }
    void set_name(char * name) {
        delete[] _name;
        _name = new char[strlen(name) + 1];
        strcpy(_name, name);
    }
    char * get_name() {
        return _name;
    }
    void set_speed(unsigned int speed_in_fps) {
        _speed_in_fps = speed_in_fps;
    }
    unsigned int get_speed() {
        return _speed_in_fps;
    }
private:
    unsigned int _speed_in_fps;
    char * _name;
    unsigned int _distance;
};

// will cause an invalid delete, unless we have a custom copy constructor.
void pass_by_value(Horse horse) {
    cout << "Will make a copy of " << horse.get_name() << endl;
}

void pass_by_reference(Horse & horse) {
    cout << "Will not make a copy of " << horse.get_name() << endl;
}

int main() {
    char ed[] = "Ed";
    char chidi[] = "Chidi";
    Horse ed_the_horse(ed, 2);
    Horse chidi_the_horse(chidi, 5);

    pass_by_value(ed_the_horse);
    pass_by_reference(chidi_the_horse);

    return 0;
}
