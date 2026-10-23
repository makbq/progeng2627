#include <iostream>
#include <string>
#include <cstdio>

int main(){

    double l, w;

    std::cout << "Enter Temperature in Centigrade: ";
    std::cin >> l;

    
    printf("%.1fC = %.1fF\n", l, l * 9/5 + 32);

}