#include <iostream>
#include <string>
#include <cstdio>

int main(){
    std::string n;

    for (std::cin >> n; n != "STOP" && n != "stop" && n != "Stop"; std::cin >> n) {
        std::cout << n << std::endl;
    }
}