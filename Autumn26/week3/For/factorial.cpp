#include <iostream>
#include <string>
#include <cstdio>

int main(){
    int n;
    int o;
    int x;

    printf("Enter a number: ");
    std::cin >> n;
    o = n;

    for (x = 1; n > 1; n--) {
        x = x * n;
    }
    printf("%d!= %d", o, x);
}