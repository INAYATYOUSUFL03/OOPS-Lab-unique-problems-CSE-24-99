#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Doctor : public Person {
public:
    string specialization;
};

class Patient : public Person {
public:
    void bookAppointment(Doctor d) {
        cout << name << " appointed with " << d.name << endl;
    }
};

int main() {
    Doctor d;
    Patient p;

    cin >> d.name >> d.specialization;
    cin >> p.name;

    p.bookAppointment(d);
}
