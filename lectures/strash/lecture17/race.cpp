/**
 * A horse race simulator
 * @file race.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 30, 2021
 */
#include <iostream>
#include <cstring>
#include <unistd.h> // for sleep

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

    Horse(const Horse & other_horse) {
        _name = new char[strlen(other_horse._name) + 1];
        strcpy(_name, other_horse._name);
        _speed_in_fps = other_horse._speed_in_fps;
        _distance = other_horse._distance;
    }

    Horse() {
        _name = new char[1];
        _name[0] = '\0';
        _speed_in_fps = 0;
        _distance = 0;
    }

    ~Horse() {
        //cout << "Calling delete on the address " << (long) _name << endl;
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

class Track {
public:
    Track(Horse * p_horses, size_t num_horses) {
        _track_length = 80;
        _num_horses = num_horses;
        _p_horses = new Horse[_num_horses];
        for (size_t horse_index = 0; horse_index < _num_horses; horse_index++) {
            _p_horses[horse_index].set_name(p_horses[horse_index].get_name());
            _p_horses[horse_index].set_speed(p_horses[horse_index].get_speed());
        }
    }

    ~Track() {
        delete[] _p_horses;
    }

    bool has_winner() {
        for (size_t horse_index = 0; horse_index < _num_horses; horse_index++) {
            if (_p_horses[horse_index].get_distance() >= _track_length) {
                return true;
            }
        }
        return false;
    }

    void race() {
        bool is_winner = has_winner();
        while (!is_winner) {
            for (size_t horse_index = 0; horse_index < _num_horses; horse_index++) {
                _p_horses[horse_index].move();
            }
            print_track();
            sleep(1);
            is_winner = has_winner();
        }
    }

    void print_track() {
        for (size_t blank = 0; blank < 50; blank++) {
            cout << endl;
        }
        cout << "Current state of the track: " << endl;
        for (size_t horse_index = 0; horse_index < _num_horses; horse_index++) {
            _p_horses[horse_index].print_horse_on_track();
        }
    }

    void declare_winner() {
        for (size_t horse_index = 0; horse_index < _num_horses; horse_index++) {
            if (_p_horses[horse_index].get_distance() >= _track_length) {
                cout << _p_horses[horse_index].get_name() << " is the winner!" << endl;
            }
        }
    }
private:
    Horse * _p_horses;
    size_t _num_horses;
    unsigned int _track_length;
};

// Replace this with Track class, encapsulate complexity so it's much 
// more readable.
/* 
void race(Horse & horse1, Horse & horse2) {
    while (horse1.get_distance() < TRACK_LENGTH && horse2.get_distance() < TRACK_LENGTH) {
        horse1.move();
        horse2.move();
        for (size_t blank = 0; blank < 50; blank++) {
            cout << endl;
        }
        cout << "Current state of the track: " << endl;
        horse1.print_horse_on_track();
        horse2.print_horse_on_track();
        //cin.get();
    }
    if (horse1.get_distance() >= TRACK_LENGTH) {
        cout << horse1.get_name() << " is the winner!" << endl;
    }
    else if (horse2.get_distance() >= TRACK_LENGTH) {
        cout << horse2.get_name() << " is the winner!" << endl;
    }
}
*/

// Controls operation of program.
int main() {
    // We're going to build a horse race simulator.
    char ed[] = "Ed";
    char chidi[] = "Chidi";
    
    Horse * p_horses = new Horse[2];
    p_horses[0].set_name(ed);
    p_horses[0].set_speed(2);

    p_horses[1].set_name(chidi);
    p_horses[1].set_speed(5);

    Track t(p_horses, 2);
    t.race();
    t.declare_winner();

    delete[] p_horses;
    return 0;
}
