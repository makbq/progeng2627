#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int sf(int n) {
    int x = 2;

    while (x < n) {
        if (n % x == 0) {
            return x;
        }
        x++;
    }

    return 0;
}

int main() {
    int a, b;

cout << "Enter two numbers (>1), (n1 < n2): ";
    cin >> a >> b;

    while (a <= b) {
        if (sf(a) == 0) {
            cout << a << endl;
        }
        a++;
    }
}