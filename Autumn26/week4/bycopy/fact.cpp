#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

unsigned long long fact(int n)
{
    int i;
    unsigned long long s = 1;

    i = 1;
    while (n + 1 != i)
    {
        s = s * i;
        i++;
    }

    return s;
}

int main()
{
    int n;
    unsigned long long s;

    std::cout << "Enter a number below 21: ";
    std::cin >> n;

    n = std::abs(n);

    s = fact(n);

    std::cout << n << "! = " << s << std::endl;

    return 0;
}
