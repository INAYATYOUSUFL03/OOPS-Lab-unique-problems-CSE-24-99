#include <iostream>
using namespace std;

class Product {
public:
    virtual float price() = 0;
};

class Electronics : public Product {
public:
    float price() {
        return 25000;
    }
};

class Clothing : public Product {
public:
    float price() {
        return 1500;
    }
};

int main() {
    Product* p;
    Electronics e;
    Clothing c;

    p = &e;
    cout << p->price() << endl;

    p = &c;
    cout << p->price() << endl;
}
