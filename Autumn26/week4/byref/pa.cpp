#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

void calc(double l, double w, double &p, double &a) {
    p = 2 * (l + w);
    a = l * w;
}

int main() {
    double l, w, p, a;

    cout << "Enter length and width: ";
    cin >> l >> w;

    calc(l, w, p, a);

    cout << "Perimeter: " << p << endl;
    cout << "Area: " << a << endl;
}