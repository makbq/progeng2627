#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

void swap(string &a, string &b) {
    string z = a;
    a = b;
    b = z;
}

int main() {
    string t1;
    string t2;
    cout << "Enter t1: ";
    cin >> t1;
    cout << "Enter t2: ";
    cin >> t2;

    swap(t1, t2);

    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;
}