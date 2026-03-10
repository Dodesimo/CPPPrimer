#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string s {"fhjdklasfhdslakSDFHJLKhfdlahfjslkdashdfFDSLJH"};
    int lowerCounter {};
    for (auto& c : s) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }
    std::cout << s;
    return 0;
}