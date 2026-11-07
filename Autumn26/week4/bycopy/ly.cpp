
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

bool ly(int x)
{
    bool ly;

    if (x % 400 == 0)
    {
        ly = true;
    }
    else if (x % 100 == 0)
    {
        ly = false;
    }
    else if (x % 4 == 0)
    {
        ly = true;
    }
    else
    {
        ly = false;
    }

    return ly;
}

int main()
{
    int x;

    std::cout << (ly(1600) == true) << std::endl;
    std::cout << (ly(1700) == false) << std::endl;

    if (ly(1600) == true && ly(1700) == false)
    {
        std::cout << "Test passed" << std::endl;
    }
    else
    {
        std::cout << "Test failed" << std::endl;
    }

    std::cout << "Enter a year: ";
    std::cin >> x;

    if (ly(x))
    {
        std::cout << x << " is a leap year" << std::endl;
    }
    else
    {
        std::cout << x << " is not a leap year" << std::endl;
    }

    return 0;
}