#include <iostream>
using namespace std;

class Consumer {
public:
    virtual float calculateBill(int units) = 0;
};

class Domestic : public Consumer {
public:
    float calculateBill(int units) {
        return units * 3.5;
    }
};

class Commercial : public Consumer {
public:
    float calculateBill(int units) {
        return units * 7.0;
    }
};

int main() {
    Consumer* c;
    Domestic d;
    Commercial com;

    int units;
    cin >> units;

    c = &d;
    cout << c->calculateBill(units) << endl;

    c = &com;
    cout << c->calculateBill(units) << endl;
}
