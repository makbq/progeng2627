#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream z;
    z.open("smpl.txt");

    if(z.is_open()){
        int x;

        z >> x;
        cout << x << endl;

        z >> x;
        cout << x << endl;

        z >> x;
        cout << x << endl;

        z >> x;
        cout << x << endl;

        z.close(); 

    }
    else{
        cout << "Error opening file" << endl;
    }

}