/*

// still incomplete
#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100

            // ...

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)

            // ...

        }
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}

*/

// still incomplete
#include <iostream>
#include <string>
#include <cstdio>

int main(){
    int year;

    std::cout << "Please enter a year: " << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 

        if( (year % 100) == 0 && (year % 400) == 0){ 
            printf("%d is a leap year\n", year);

        }
        if( (year % 100) == 0 && (year % 400) != 0){ 
            printf("%d is not a leap year\n", year);

        }
        else{ 
            printf("%d is a leap year\n", year);

        }
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}