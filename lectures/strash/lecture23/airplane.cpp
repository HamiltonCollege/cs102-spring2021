#include <iostream>

using namespace std;

class Airplane {
public:
    void start_engine() const {
        cout << "Starting engine" << endl;
    }
    void check_brakes() const {
        cout << "Checking breaks" << endl;
    }
    void system_check() const {
        check_brakes();
        custom_checks();
    }
    virtual void custom_checks() const = 0;
};

class AirBus : public Airplane {
public:
    void processor_check() const {
        cout << "Airbus: checking processor" << endl;
    }
    void custom_checks() const {
        processor_check();
    }
};

void prepare_for_takeoff(Airplane & airplane) {
    airplane.start_engine();
    airplane.system_check();
}

int main() {
    //Airplane airplane;
    //airplane.start_engine();

    AirBus airbus;
    //airbus.start_engine();
    //airbus.system_check();
    prepare_for_takeoff(airbus);
    return 0;
}