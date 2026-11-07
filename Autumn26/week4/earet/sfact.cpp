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

    return n;
}

int main() {
    int n;

    cout << "Enter a number (>1): ";
    cin >> n;

    int result = sf(n);

    cout << "Smallest factor: " << result << endl;

}