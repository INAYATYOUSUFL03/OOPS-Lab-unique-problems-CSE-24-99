#include <iostream>
using namespace std;

class Sensor {
public:
    virtual void readData() = 0;
};

class TemperatureSensor : public Sensor {
public:
    void readData() {
        cout << "Temperature: 25C" << endl;
    }
};

class HumiditySensor : public Sensor {
public:
    void readData() {
        cout << "Humidity: 60%" << endl;
    }
};

int main() {
    Sensor* s;
    TemperatureSensor t;
    HumiditySensor h;

    s = &t;
    s->readData();

    s = &h;
    s->readData();
}
