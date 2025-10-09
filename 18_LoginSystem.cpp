#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string user, pass;
    cout << "Enter new username: "; cin >> user;
    cout << "Enter password: "; cin >> pass;
    ofstream out("users.txt", ios::app);
    out << user << " " << pass << endl;
    cout << "Registration successful!\n";
}

void loginUser() {
    string user, pass, u, p;
    cout << "Enter username: "; cin >> user;
    cout << "Enter password: "; cin >> pass;

    ifstream in("users.txt");
    bool success = false;
    while (in >> u >> p) {
        if (u == user && p == pass) success = true;
    }
    if (success) cout << "Login successful!\n";
    else cout << "Invalid credentials.\n";
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoose: ";
    cin >> choice;
    if (choice == 1) registerUser();
    else loginUser();
}
