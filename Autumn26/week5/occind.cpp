
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n, x, s;
    int count = 0;
    vector<int> v;

    cout << "Please enter n:" << endl;
    cin >> n;

    int i = 0;

    while (i < n) {
        cout << "Please enter a number:" << endl;
        cin >> x;
        v.push_back(x);
        i++;
    }

    cout << "Please enter s:" << endl;
    cin >> s;

    i = 0;

    while (i < v.size()) {
        if (v[i] == s) {
            count++;
        }
        i++;
    }

    if (count == 0) {
        cout << "There are 0 occurrences." << endl;
    }
    else {
        cout << "There are " << count << " occurrences of " << s << " at indices:" << endl;

        i = 0;

        while (i < v.size()) {
            if (v[i] == s) {
                cout << i << endl;
            }
            i++;
        }
    }
}