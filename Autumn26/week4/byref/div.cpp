#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

void calc(int a, int b, int &f, int &r) {
    f = a / b;
    r = a % b;
}

int main() {
    int a, b, f, r;

    cout << "Enter dividend and divisor: ";
    cin >> a >> b;

    calc(a, b, f, r);

    cout << "Division result: " << f << endl;
    cout << "Remainder: " << r << endl;
}