
#include <iostream>
#include <string>
#include <cstdio>

int main() {
    int f;
    int l;
    int u;
    std::string g;
    std::string h = "n";

    printf("Enter lower bound: ");
    std::cin >> l;

    printf("Enter upper bound: ");
    std::cin >> u;

    if (l <= u) {
        printf("Think of a number between %d and %d\n", l, u);

        while (h != "y" && l <= u) {
            f = l + (u - l) / 2;

            printf("Current Guess: %d\n", f);
            printf("Is your number %d (y/n): ", f);
            std::cin >> h;

            if (h == "n") {
                printf("Is the number greater than %d (y/n): ", f);
                std::cin >> g;

                if (g == "y") {
                    l = f + 1;
                }
                else {
                    u = f - 1;
                }
            }
        }

        if (h == "y") {
            printf("Your number is %d\n", f);
        }
        else {
            printf("Error");
        }
    }
    else {
        printf("Error");
    }
}
