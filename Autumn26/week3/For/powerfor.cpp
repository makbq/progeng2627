#include <iostream>
#include <string>
#include <cstdio>

int main(){
    double x;
    double r;
    int n;
    int c;

    printf("Enter a number: ");
    std::cin >> x;
    printf("Enter a power (integer): ");
    std::cin >> n;

    r = 1;
    for (c=0 ;c != n; c++) {
        r = r * x;
    }
    printf("%f^%d: %f\n", x, n, r);
}