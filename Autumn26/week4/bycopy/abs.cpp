#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

int main() {
    double n;
    printf("Enter a number: ");
    std::cin >> n;
    printf("The absolute value of %.2f is %.2f\n", n, std::abs(n));
}