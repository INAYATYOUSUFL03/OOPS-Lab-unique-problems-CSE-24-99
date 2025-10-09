#include <iostream>
using namespace std;

void inputMatrix(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
}

void display(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void addMatrix(int a[10][10], int b[10][10], int r, int c) {
    int res[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];
    display(res, r, c);
}

int main() {
    int a[10][10], b[10][10], r, c;
    cout << "Enter rows & cols: ";
    cin >> r >> c;
    cout << "Enter Matrix A:\n"; inputMatrix(a, r, c);
    cout << "Enter Matrix B:\n"; inputMatrix(b, r, c);
    cout << "Addition Result:\n"; addMatrix(a, b, r, c);
}
