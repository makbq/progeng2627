#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <fstream>

int sv(std::string s, const std::vector<std::string>& vin) {
    int i = 0;

    while (i < vin.size()) {
        if (vin[i] == s) {
            return i;
        }
        i++;
    }
    return -1;
}

void uv(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

    vout.clear();
    int i = 0;

    while (i < vin1.size()) {
        if (sv(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
        i++;
    }

    i = 0;

    while (i < vin2.size()) {
        if (sv(vin2[i], vout) == -1) {
            vout.push_back(vin2[i]);
        }
        i++;
    }
}

void iv(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

    vout.clear();
    int i = 0;

    while (i < vin1.size()) {
        if (sv(vin1[i], vin2) != -1 &&
            sv(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
        i++;
    }
}

int main() {
    std::string f1, f2, x;
    std::vector<std::string> v1, v2, vu, vi;

    std::cout << "Enter first filename: ";
    std::cin >> f1;

    std::cout << "Enter second filename: ";
    std::cin >> f2;

    std::ifstream w1(f1);
    std::ifstream w2(f2);

    if (!w1.is_open() || !w2.is_open()) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    while (w1 >> x) {
        v1.push_back(x);
    }

    while (w2 >> x) {
        v2.push_back(x);
    }

    w1.close();
    w2.close();

    uv(v1, v2, vu);
    iv(v1, v2, vi);

    std::ofstream o1("uni.txt");
    std::ofstream o2("inter.txt");

    if (!o1.is_open() || !o2.is_open()) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    int i = 0;

    while (i < vu.size()) {
        o1 << vu[i] << std::endl;
        i++;
    }

    i = 0;

    while (i < vi.size()) {
        o2 << vi[i] << std::endl;
        i++;
    }

    o1.close();
    o2.close();

}