#include <iostream>
using namespace std;

class Employee {
public:
    virtual int bonus() = 0;
};

class Developer : public Employee {
public:
    int bonus() {
        return 10000;
    }
};

class Manager : public Employee {
public:
    int bonus() {
        return 20000;
    }
};

int main() {
    Employee* e;
    Developer d;
    Manager m;

    e = &d;
    cout << e->bonus() << endl;

    e = &m;
    cout << e->bonus() << endl;
}
