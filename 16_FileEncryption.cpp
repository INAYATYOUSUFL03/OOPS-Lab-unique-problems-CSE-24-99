#include <iostream>
#include <fstream>
using namespace std;

void encryptFile(const string &filename, int key) {
    ifstream in(filename);
    ofstream out("encrypted.txt");
    char ch;
    while (in.get(ch)) {
        out.put(ch + key); 
    }
    cout << "File encrypted as 'encrypted.txt'\n";
}

void decryptFile(const string &filename, int key) {
    ifstream in(filename);
    ofstream out("decrypted.txt");
    char ch;
    while (in.get(ch)) {
        out.put(ch - key); 
    }
    cout << "File decrypted as 'decrypted.txt'\n";
}

int main() {
    string file;
    int key, choice;
    cout << "Enter file name: ";
    cin >> file;
    cout << "Enter key: ";
    cin >> key;
    cout << "1. Encrypt\n2. Decrypt\nChoose: ";
    cin >> choice;

    if (choice == 1) encryptFile(file, key);
    else decryptFile(file, key);
}
