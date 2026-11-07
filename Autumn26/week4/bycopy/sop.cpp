
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

double sum(double x, double n)
{
    int i;
    double s = 0;

    i = 1;
    while (n + 1 != i)
    {
        s = s + (pow(x, i));
        i++;
    }

    return s;
}

int main()
{
    double n;
    double x;
    double s;

    std::cout << (sum(2, 7) == 254) << std::endl;
    std::cout << (sum(3, 4) == 120) << std::endl;

    if (sum(2, 7) == 254 && sum(3, 4) == 120)
    {
        std::cout << "Test passed" << std::endl;
    }
    else
    {
        std::cout << "Test failed" << std::endl;
    }

    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter a power: ";
    std::cin >> n;

    s = sum(x, n);

    std::cout << "The sum of powers of "
              << std::fixed << std::setprecision(2)
              << x << " to the power of " << n
              << " is " << s << std::endl;

    return 0;
}