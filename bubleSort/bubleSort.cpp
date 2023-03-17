#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
    while (true) {
        cout << "masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai makisimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}
void bubblesortarray() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void unsorted() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang belum tersusun" << endl;
    cout << "================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout << endl;
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout << endl;
}

int main() {
    input();
    unsorted();
    bubblesortarray();
    display();
    return 0;
}