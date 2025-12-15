#include <iostream>
using namespace std;

class Exam {
public:
    virtual int calculateScore(int correct) = 0;
};

class MCQExam : public Exam {
public:
    int calculateScore(int correct) {
        return correct * 4;
    }
};

int main() {
    Exam* e;
    MCQExam m;

    int correct;
    cin >> correct;

    e = &m;
    cout << e->calculateScore(correct) << endl;
}
