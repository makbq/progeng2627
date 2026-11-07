
#include <iostream>
#include <vector>

using namespace std;

void append_vectors(const vector<int>& vin1, const vector<int>& vin2, vector<int>& vout) {
    vout.clear();

    int i = 0;

    while (i < vin1.size()) {
        vout.push_back(vin1[i]);
        i++;
    }

    i = 0;

    while (i < vin2.size()) {
        vout.push_back(vin2[i]);
        i++;
    }
}

int main() {
    vector<int> vin1, vin2, vout;
    int n1, n2, x;

    cout << "Enter size of first vector: ";
    cin >> n1;

    int i = 0;

    while (i < n1) {
        cin >> x;
        vin1.push_back(x);
        i++;
    }

    cout << "Enter size of second vector: ";
    cin >> n2;

    i = 0;

    while (i < n2) {
        cin >> x;
        vin2.push_back(x);
        i++;
    }

    append_vectors(vin1, vin2, vout);

    cout << "Appended vector: ";

    i = 0;

    while (i < vout.size()) {
        cout << vout[i] << " ";
        i++;
    }

    cout << endl;
}