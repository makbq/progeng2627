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

    c = 0;
    r = 1;
    while (c != n) {
        r = r * x;
        c++;
    }
    printf("%f^%d: %f\n", x, n, r);
}