#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n, t, x;
    vector<int> v;

    cout << "Enter number of elements: ";
    cin >> n;

    int i = 0;

    while (i < n) {
        cin >> x;
        v.push_back(x);
        i++;
    }

    cout << "Enter threshold: ";
    cin >> t;

    i = 0;

    while (i < v.size()) {
        if (v[i] < t) {
            cout << v[i] << endl;
        }
        i++;
    }
}
