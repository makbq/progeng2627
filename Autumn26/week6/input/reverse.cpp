#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <fstream>

int main() {
    std::ifstream z;
    z.open("smpltxt.txt");

    std::vector<std::string> v;

    if(!z.is_open()){ 
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string x;

    while(z >> x){
        v.push_back(x);
    }

    z.close();

    int i = v.size();
    while(i > 0){
        i--;
        std::cout << v[i] << " ";
    }

}