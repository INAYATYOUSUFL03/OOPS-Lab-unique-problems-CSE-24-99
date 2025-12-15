#include <iostream>
using namespace std;

class Ticket {
public:
    int seat;
    Ticket(int s) {
        seat = s;
    }
    void display() {
        cout << seat << endl;
    }
};

int main() {
    int seat;
    cin >> seat;

    Ticket t(seat);
    t.display();
}
