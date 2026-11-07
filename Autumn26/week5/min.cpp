
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int min_vector_element(const vector<double>& vin) {
    if (vin.size() == 0) {
        return -1;
    }

    int s = 0;
    int i = 1;

    while (i < vin.size()) {
        if (vin[i] < vin[s]) {
            s = i;
        }
        i++;
    }

    return s;
}

int main() {
    int n;
    double x;
    vector<double> v;

    cout << "Enter number of elements: ";
    cin >> n;

    int i = 0;

    while (i < n) {
        cout << "Enter a number: ";
        cin >> x;
        v.push_back(x);
        i++;
    }

    cout << "Index of minimum element: "
         << min_vector_element(v) << endl;

}