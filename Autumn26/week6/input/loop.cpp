#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <fstream>

int main() {
    std::ifstream z;
    z.open("smpl.txt");

    if(z.is_open()){ 
    int x;
    int n = 0;
    bool f = false;

    while(z >> x){
        if(f) {
         std::cout << "+";
        }

        std::cout << x;
        n += x;
        f = true;
    }

    z.close(); 

    std::cout << " = " << n << std::endl;
    }

    else{
        std::cout << "Error opening file" << std::endl;
    }
}