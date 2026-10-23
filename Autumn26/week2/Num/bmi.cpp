#include <iostream>
#include <string>
#include <cstdio>

int main(){

    double l, w;

    std::cout << "Enter Height in cm: ";
    std::cin >> l;

    std::cout << "Enter Weight in KG: ";
    std::cin >> w;
    
    printf("BMI is: %f\n", w / ((l / 100) * (l / 100)));

}