#include <iostream>
#include <string>
#include <cstdio>

int main(){
    int x;
    int o;
    int n;
    int c;

    printf("Enter a divident: ");
    std::cin >> x;
    o = x;
    printf("Enter a divisor: ");
    std::cin >> n;

    c = 0;
    while (x >= n) {
        x = x - n;
        c++;
    }
    printf("%d / %d = %d r %d", o, n, c, x);
}