#include <iostream>
#include <string>
#include <cstdio>

int main(){

    double l, w;

    std::cout << "Enter Length: ";
    std::cin >> l;

    std::cout << "Enter Width: ";
    std::cin >> w;
    
    printf("Perimeter of rectangle is: %f\n", 2 * (l + w));
    printf("Area of rectangle is: %f\n", l * w);

}