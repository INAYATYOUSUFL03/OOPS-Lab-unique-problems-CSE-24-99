#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

void addStudent() {
    Student s;
    ofstream out("students.dat", ios::app | ios::binary);
    cout << "Enter roll, name, marks: ";
    cin >> s.roll >> s.name >> s.marks;
    out.write((char*)&s, sizeof(s));
    cout << "Student added.\n";
}

void viewAll() {
    Student s;
    ifstream in("students.dat", ios::binary);
    while (in.read((char*)&s, sizeof(s))) {
        cout << s.roll << " " << s.name << " " << s.marks << endl;
    }
}

int main() {
    int ch;
    cout << "1. Add Student\n2. View All\nChoice: ";
    cin >> ch;
    if (ch == 1) addStudent();
    else viewAll();
}
