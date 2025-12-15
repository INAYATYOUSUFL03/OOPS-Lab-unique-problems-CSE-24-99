#include <iostream>
using namespace std;

class Voter {
public:
    int vote;
};

class Election {
public:
    int candidate1 = 0;
    int candidate2 = 0;

    void castVote(int v) {
        if(v == 1) candidate1++;
        else if(v == 2) candidate2++;
    }

    void result() {
        cout << candidate1 << " " << candidate2 << endl;
    }
};

int main() {
    Election e;
    int v;

    cin >> v;
    e.castVote(v);
    e.result();
}
