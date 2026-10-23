#include <iostream>
#include <string>
#include <cstdio>

int main(){
    int n;
    int r;
    int c;

    printf("Enter a number: ");
    std::cin >> n;
    r = 1;
    c = 1;

    while (r <= n) {
        c = 1;
        while (c <= n) {
            printf("%d\t", r*c);
            c++;
        }
        printf("\n");
        r++;
    }
}