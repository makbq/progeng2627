#include <iostream>
#include <string>
#include <cstdio>

int main(){

    double l, w;

    std::cout << "Enter Pounds Sterling: ";
    std::cin >> l;

    std::cout << "Enter EURGBP=X rate: ";
    std::cin >> w;
    
    printf("%.2fGBP = %.2fEUR\n", l, l * w);

}