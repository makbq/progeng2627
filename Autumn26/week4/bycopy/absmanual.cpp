#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

double abs(double n) {
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main() {
    double n;
    printf("Enter a number: ");
    std::cin >> n;
    double m = abs(n);
    std::cout << "The absolute value of " << std::fixed << std::setprecision(2) << n << " is " << m << std::endl;
}