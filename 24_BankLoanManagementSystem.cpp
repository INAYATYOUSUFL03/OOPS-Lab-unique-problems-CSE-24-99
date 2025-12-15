#include <iostream>
using namespace std;

class Loan {
public:
    virtual float calculateEMI(float amount) = 0;
};

class HomeLoan : public Loan {
public:
    float calculateEMI(float amount) {
        return amount * 0.01;
    }
};

class EducationLoan : public Loan {
public:
    float calculateEMI(float amount) {
        return amount * 0.005;
    }
};

int main() {
    Loan* l;
    HomeLoan h;
    EducationLoan e;

    float amt;
    cin >> amt;

    l = &h;
    cout << l->calculateEMI(amt) << endl;

    l = &e;
    cout << l->calculateEMI(amt) << endl;
}
