#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int getCharge(int hours) = 0;
};

class Car : public Vehicle {
public:
    int getCharge(int hours) {
        return hours * 50;
    }
};

class Bike : public Vehicle {
public:
    int getCharge(int hours) {
        return hours * 20;
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;

    int hours;
    cin >> hours;

    v = &c;
    cout << v->getCharge(hours) << endl;

    v = &b;
    cout << v->getCharge(hours) << endl;
}
